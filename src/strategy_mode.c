#include "global.h"
#include "battle.h"
#include "event_data.h"
#include "field_player_avatar.h"
#include "overworld.h"
#include "main.h"
#include "pokeblock.h"
#include "script.h"
#include "string_util.h"
#include "tv.h"
#include "constants/game_stat.h"
#include "field_screen_effect.h"
#include "strategy_mode.h"

// NOTE: originally copied from safari_zone.c

extern const u8 StrategyMode_EventScript_TimesUp[];
extern const u8 StrategyMode_EventScript_RetirePrompt[];
extern const u8 StrategyMode_EventScript_OutOfBallsMidBattle[];
extern const u8 StrategyMode_EventScript_OutOfBalls[];

EWRAM_DATA u8 gStrategyModeStepCounter = 0;
EWRAM_DATA u8 gActiveTrainer = 0;

bool32 GetStrategyModeFlag(void)
{
    return FlagGet(FLAG_SYS_STRATEGY_MODE);
}

void SetStrategyModeFlag(void)
{
    FlagSet(FLAG_SYS_STRATEGY_MODE);
}

void SetActiveTrainers(void)
{
    // TODO - set only active trainers here
    FlagSet(FLAG_STRATEGY_PLAYER1_ACTIVE);
    FlagSet(FLAG_STRATEGY_PLAYER2_ACTIVE);
    FlagSet(FLAG_STRATEGY_PLAYER3_ACTIVE);
    FlagSet(FLAG_STRATEGY_PLAYER4_ACTIVE);
    FlagSet(FLAG_STRATEGY_PLAYER5_ACTIVE);
    FlagSet(FLAG_STRATEGY_PLAYER6_ACTIVE);
    FlagSet(FLAG_STRATEGY_ENEMY1_ACTIVE);
    FlagSet(FLAG_STRATEGY_ENEMY2_ACTIVE);
    FlagSet(FLAG_STRATEGY_ENEMY3_ACTIVE);
    FlagSet(FLAG_STRATEGY_ENEMY4_ACTIVE);
    FlagSet(FLAG_STRATEGY_ENEMY5_ACTIVE);
    FlagSet(FLAG_STRATEGY_ENEMY6_ACTIVE);
}

void ResetStrategyModeFlag(void)
{
    FlagClear(FLAG_SYS_STRATEGY_MODE);
}

void EnterStrategyMode(void)
{
    IncrementGameStat(GAME_STAT_ENTERED_STRATEGY_MODE);
    SetStrategyModeFlag();
    SetActiveTrainers();
    gStrategyModeStepCounter = 10;
    gActiveTrainer = 1;
}

void ExitStrategyMode(void)
{
    ResetStrategyModeFlag();
    gStrategyModeStepCounter = 0;
}

void PlayerRest(void)
{
    switch (gActiveTrainer) {
        case 0:
        case 1:
            FlagClear(FLAG_STRATEGY_PLAYER1_ACTIVE);
        case 2:
            FlagClear(FLAG_STRATEGY_PLAYER2_ACTIVE);
        case 3:
            FlagClear(FLAG_STRATEGY_PLAYER3_ACTIVE);
        case 4:
            FlagClear(FLAG_STRATEGY_PLAYER4_ACTIVE);
        case 5:
            FlagClear(FLAG_STRATEGY_PLAYER5_ACTIVE);
        case 6:
            FlagClear(FLAG_STRATEGY_PLAYER6_ACTIVE);
    }
    gActiveTrainer++;
    gStrategyModeStepCounter = 10;
    if (gActiveTrainer > 6) {
        FlagSet(FLAG_STRATEGY_CURRENT_SIDE);
        ScriptContext_SetupScript(StrategyMode_EventScript_TimesUp);
    }
}

// False = Player, True = Enemy
bool32 CheckEnemyTurn(void)
{
    return FlagGet(FLAG_STRATEGY_CURRENT_SIDE);
}

bool8 StrategyModeTakeStep(void)
{
    if (GetStrategyModeFlag() == FALSE)
    {
        return FALSE;
    }

    gStrategyModeStepCounter--;
    if (gStrategyModeStepCounter == 0)
    {
        PlayerRest();
        if (CheckEnemyTurn()) {
            return TRUE;
        }
    }
    return FALSE;
}

void StrategyModeRetirePrompt(void)
{
    ScriptContext_SetupScript(StrategyMode_EventScript_RetirePrompt);
}

void CB2_EndStrategyBattle(void)
{
    if (gBattleOutcome == B_OUTCOME_CAUGHT)
        gStrategyModeStepCounter++; // TODO - placeholder
    if (gBattleOutcome == B_OUTCOME_NO_SAFARI_BALLS)
    {
        // RunScriptImmediately(StrategyMode_EventScript_OutOfBallsMidBattle); // TODO - placeholder
        WarpIntoMap();
        gFieldCallback = FieldCB_ReturnToFieldNoScriptCheckMusic;
        SetMainCallback2(CB2_LoadMap);
    }
    else if (gBattleOutcome == B_OUTCOME_CAUGHT)
    {
        ScriptContext_SetupScript(StrategyMode_EventScript_OutOfBalls);
        ScriptContext_Stop();
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
    }
}




