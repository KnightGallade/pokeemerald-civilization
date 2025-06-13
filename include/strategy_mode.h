#ifndef GUARD_STRATEGY_MODE_H
#define GUARD_STRATEGY_MODE_H

extern u8 gStrategyModeStepCounter;

bool32 GetStrategyModeFlag(void);
void SetStrategyModeFlag(void);
void ResetStrategyModeFlag(void);

void EnterStrategyMode(void);
void ExitStrategyMode(void);

bool8 StrategyModeTakeStep(void);
void StrategyModeRetirePrompt(void);

void CB2_EndStrategyBattle(void);

#endif // GUARD_STRATEGY_MODE_H
