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

bool32 GetStrategyModeFlag(void)
{
    return FlagGet(FLAG_SYS_STRATEGY_MODE);
}

void SetStrategyModeFlag(void)
{
    FlagSet(FLAG_SYS_STRATEGY_MODE);
}

void ResetStrategyModeFlag(void)
{
    FlagClear(FLAG_SYS_STRATEGY_MODE);
}

void EnterStrategyMode(void)
{
    IncrementGameStat(GAME_STAT_ENTERED_STRATEGY_MODE);
    SetStrategyModeFlag();
    gStrategyModeStepCounter = 10;
}

void ExitStrategyMode(void)
{
    ResetStrategyModeFlag();
    gStrategyModeStepCounter = 0;
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
        ScriptContext_SetupScript(StrategyMode_EventScript_TimesUp);
        return TRUE;
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




