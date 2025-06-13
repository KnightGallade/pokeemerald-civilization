StrategyMode_EventScript_Exit::
	@ setvar VAR_STRATEGY_MODE_STATE, 1
	special ExitStrategyMode
	warp MAP_PALLET_TOWN, 21, 3
	waitstate
	end

@ TODO - eventually this will be a "pass turn" function
StrategyMode_EventScript_RetirePrompt::
	lockall
	msgbox StrategyMode_Text_WouldYouLikeToExit, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, StrategyMode_EventScript_Retire
	releaseall
	end

StrategyMode_EventScript_Retire::
	goto StrategyMode_EventScript_Exit

StrategyMode_EventScript_TimesUp::
	lockall
	playse SE_DING_DONG
	message StrategyMode_Text_TimesUp
	waitmessage
	waitbuttonpress
	releaseall
	goto StrategyMode_EventScript_Exit

StrategyMode_EventScript_OutOfBalls::
	lockall
	playse SE_DING_DONG
	message StrategyMode_Text_OutOfBalls
	waitmessage
	waitbuttonpress
	releaseall
	goto StrategyMode_EventScript_Exit

StrategyMode_Text_WouldYouLikeToExit:
	.string "Would you like to exit the STRATEGY\n"
	.string "MODE right now?$"

StrategyMode_Text_TimesUp:
	.string "Ding-dong! Time's up!\n"
	.string "Your STRATEGY Game is over.$"

StrategyMode_Text_OutOfBalls:
	.string "You've run out of SAFARI BALLS.\n"
	.string "Your STRATEGY Game is over.$"
