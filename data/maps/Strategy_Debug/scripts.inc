Strategy_Debug_MapScripts::
# 2 "data/maps/Strategy_Debug/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Strategy_Debug_OnTransition
	.byte 0


Strategy_Debug_OnTransition::
# 6 "data/maps/Strategy_Debug/scripts.pory"
	switch VAR_RESULT
# 7 "data/maps/Strategy_Debug/scripts.pory"
	case ITEM_NET_BALL, Strategy_Debug_OnTransition_2
# 14 "data/maps/Strategy_Debug/scripts.pory"
	case ITEM_DIVE_BALL, Strategy_Debug_OnTransition_3
# 21 "data/maps/Strategy_Debug/scripts.pory"
	case ITEM_POKE_BALL, Strategy_Debug_OnTransition_4
# 28 "data/maps/Strategy_Debug/scripts.pory"
	case ITEM_ULTRA_BALL, Strategy_Debug_OnTransition_5
# 35 "data/maps/Strategy_Debug/scripts.pory"
	case ITEM_DUSK_BALL, Strategy_Debug_OnTransition_6
# 42 "data/maps/Strategy_Debug/scripts.pory"
	case ITEM_LOVE_BALL, Strategy_Debug_OnTransition_7
# 50 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_FRLG_OLD_MAN_1
# 51 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_FRLG_OLD_MAN_1
# 52 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_FRLG_OLD_MAN_1
# 53 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_FRLG_OLD_MAN_1
# 54 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_FRLG_OLD_MAN_1
# 55 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_FRLG_OLD_MAN_1
	return

Strategy_Debug_OnTransition_2:
# 8 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BUG_CATCHER
# 9 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_FRLG_BUG_CATCHER
# 10 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_BUG_CATCHER
# 11 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_FRLG_BUG_CATCHER
# 12 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_BUG_CATCHER
# 13 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_FRLG_BUG_CATCHER
	return

Strategy_Debug_OnTransition_3:
# 15 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_FRLG_SWIMMER_M_LAND
# 16 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_FRLG_SWIMMER_F_LAND
# 17 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_SWIMMER_F
# 18 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_FRLG_SWIMMER_M_LAND
# 19 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_FRLG_SWIMMER_F_LAND
# 20 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SWIMMER_M
	return

Strategy_Debug_OnTransition_4:
# 22 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_YOUNGSTER
# 23 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_FRLG_YOUNGSTER
# 24 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_YOUNGSTER
# 25 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_FRLG_YOUNGSTER
# 26 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_YOUNGSTER
# 27 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_FRLG_YOUNGSTER
	return

Strategy_Debug_OnTransition_5:
# 29 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_FRLG_COOLTRAINER_M
# 30 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_FRLG_COOLTRAINER_F
# 31 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_FRLG_COOLTRAINER_M
# 32 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_FRLG_COOLTRAINER_F
# 33 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_FRLG_COOLTRAINER_M
# 34 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_FRLG_COOLTRAINER_F
	return

Strategy_Debug_OnTransition_6:
# 36 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_FRLG_ROCKET_F
# 37 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_FRLG_ROCKET_M
# 38 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_FRLG_ROCKET_F
# 39 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_FRLG_ROCKET_M
# 40 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_FRLG_ROCKET_F
# 41 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_FRLG_ROCKET_M
	return

Strategy_Debug_OnTransition_7:
# 43 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BEAUTY
# 44 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_FRLG_BEAUTY
# 45 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_BEAUTY
# 46 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_FRLG_BEAUTY
# 47 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_BEAUTY
# 48 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_FRLG_BEAUTY
	return


Strategy_Debug_Test::
# 60 "data/maps/Strategy_Debug/scripts.pory"
	msgbox Strategy_Debug_Test_Text_0, MSGBOX_NPC
# 61 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BUG_CATCHER
# 62 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_FRLG_BUG_CATCHER
# 63 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_BUG_CATCHER
# 64 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_FRLG_BUG_CATCHER
# 65 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_BUG_CATCHER
# 66 "data/maps/Strategy_Debug/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_FRLG_BUG_CATCHER
# 67 "data/maps/Strategy_Debug/scripts.pory"
	releaseall
	end


Strategy_Debug_Test_Text_0:
# 60 "data/maps/Strategy_Debug/scripts.pory"
	.string "Test$"
