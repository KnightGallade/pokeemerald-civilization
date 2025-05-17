Route2_EastBuilding_MapScripts::
	.byte 0


Route2_EastBuilding_EventScript_Aide::
# 6 "data/maps/Route2_EastBuilding/scripts.pory"
	lock
# 7 "data/maps/Route2_EastBuilding/scripts.pory"
	faceplayer
# 8 "data/maps/Route2_EastBuilding/scripts.pory"
	call Route2_EastBuilding_EventScript_GetAideRequestInfo
# 9 "data/maps/Route2_EastBuilding/scripts.pory"
	goto_if_set FLAG_GOT_HM05, Route2_EastBuilding_EventScript_AlreadyGotHM05
# 10 "data/maps/Route2_EastBuilding/scripts.pory"
	msgbox Route2_EastBuilding_Text_GiveHM05IfSeen10Mons, MSGBOX_YESNO
# 11 "data/maps/Route2_EastBuilding/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Aide_EventScript_DeclineCheckMons
# 12 "data/maps/Route2_EastBuilding/scripts.pory"
	setvar VAR_0x8004, 1
# 13 "data/maps/Route2_EastBuilding/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 14 "data/maps/Route2_EastBuilding/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 15 "data/maps/Route2_EastBuilding/scripts.pory"
	call Route2_EastBuilding_EventScript_GetAideRequestInfo
# 16 "data/maps/Route2_EastBuilding/scripts.pory"
	goto_if_lt VAR_0x8006, 10, Aide_EventScript_HaventCaughtEnough
# 17 "data/maps/Route2_EastBuilding/scripts.pory"
	msgbox Route2_EastBuilding_Text_GreatHereYouGo
# 18 "data/maps/Route2_EastBuilding/scripts.pory"
	checkitemspace ITEM_HM05
# 19 "data/maps/Route2_EastBuilding/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Aide_EventScript_NoRoomForItem
# 20 "data/maps/Route2_EastBuilding/scripts.pory"
	giveitem_msg Route2_EastBuilding_Text_ReceivedHM05FromAide, ITEM_HM05
# 21 "data/maps/Route2_EastBuilding/scripts.pory"
	setflag FLAG_GOT_HM05
# 22 "data/maps/Route2_EastBuilding/scripts.pory"
	msgbox Route2_EastBuilding_Text_ExplainHM05
# 23 "data/maps/Route2_EastBuilding/scripts.pory"
	release
	end


Route2_EastBuilding_EventScript_AlreadyGotHM05::
# 28 "data/maps/Route2_EastBuilding/scripts.pory"
	msgbox Route2_EastBuilding_Text_ExplainHM05
# 29 "data/maps/Route2_EastBuilding/scripts.pory"
	release
	end


Route2_EastBuilding_EventScript_GetAideRequestInfo::
# 34 "data/maps/Route2_EastBuilding/scripts.pory"
	buffernumberstring STR_VAR_1, 10
# 35 "data/maps/Route2_EastBuilding/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_HM05
	return


Route2_EastBuilding_EventScript_Rocker::
# 40 "data/maps/Route2_EastBuilding/scripts.pory"
	msgbox Route2_EastBuilding_Text_CanGetThroughRockTunnel, MSGBOX_NPC
	end


Route2_EastBuilding_Text_GiveHM05IfSeen10Mons::
# 44 "data/maps/Route2_EastBuilding/scripts.pory"
	.string "Hi! Remember me?\n"
	.string "I'm one of PROF. OAK's AIDES.\p"
	.string "If your POKéDEX has complete data\n"
	.string "on ten species, I'm supposed to\l"
	.string "give you a reward.\p"
	.string "PROF. OAK entrusted me with\n"
	.string "HM05 for you.\p"
	.string "So, {PLAYER}, let me ask you.\p"
	.string "Have you gathered data on at least\n"
	.string "ten kinds of POKéMON?$"

Route2_EastBuilding_Text_GreatHereYouGo::
# 57 "data/maps/Route2_EastBuilding/scripts.pory"
	.string "Great! You have caught or owned\n"
	.string "{STR_VAR_3} kinds of POKéMON!\p"
	.string "Congratulations!\n"
	.string "Here you go!$"

Route2_EastBuilding_Text_ReceivedHM05FromAide::
# 64 "data/maps/Route2_EastBuilding/scripts.pory"
	.string "{PLAYER} received HM05\n"
	.string "from the AIDE.$"

Route2_EastBuilding_Text_ExplainHM05::
# 69 "data/maps/Route2_EastBuilding/scripts.pory"
	.string "HM05 contains the hidden move\n"
	.string "FLASH.\p"
	.string "FLASH lights up even the darkest\n"
	.string "of caves and dungeons.$"

Route2_EastBuilding_Text_CanGetThroughRockTunnel::
# 76 "data/maps/Route2_EastBuilding/scripts.pory"
	.string "Once a POKéMON learns FLASH, you\n"
	.string "can get through ROCK TUNNEL.$"
