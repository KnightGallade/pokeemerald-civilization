PalletTown_PlayersHouse_1F_MapScripts::
	.byte 0


PalletTown_PlayersHouse_1F_EventScript_Mom::
# 6 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	lock
# 7 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 8 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	goto_if_set FLAG_BEAT_RIVAL_IN_OAKS_LAB, PalletTown_PlayersHouse_1F_EventScript_MomHeal
# 9 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 10 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale
# 11 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale
# 12 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 13 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 14 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 15 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	release
	end


PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale::
# 20 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou
	return


PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale::
# 25 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou
	return


PalletTown_PlayersHouse_1F_EventScript_MomHeal::
# 30 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest
# 31 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 32 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 33 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare
# 34 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	release
	end


PalletTown_PlayersHouse_1F_EventScript_TV::
# 40 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	lockall
# 41 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, PalletTown_PlayersHouse_1F_EventScript_TVScreen
# 42 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_OopsWrongSide
# 43 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	releaseall
	end


PalletTown_PlayersHouse_1F_EventScript_TVScreen::
# 48 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 49 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenMale
# 50 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale
# 51 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	releaseall
	end


PalletTown_PlayersHouse_1F_EventScript_TVScreenMale::
# 56 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad
	return


PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale::
# 61 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad
	return


PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou::
# 65 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: …Right.\n"
	.string "All boys leave home someday.\l"
	.string "It said so on TV.\p"
	.string "Oh, yes. PROF. OAK, next door, was\n"
	.string "looking for you.$"

PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou::
# 73 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: …Right.\n"
	.string "All girls dream of traveling.\l"
	.string "It said so on TV.\p"
	.string "Oh, yes. PROF. OAK, next door, was\n"
	.string "looking for you.$"

PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest::
# 81 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}!\n"
	.string "You should take a quick rest.$"

PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare::
# 86 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Oh, good! You and your\n"
	.string "POKéMON are looking great.\l"
	.string "Take care now!$"

PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad::
# 92 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "There's a movie on TV.\n"
	.string "Four boys are walking on railroad\l"
	.string "tracks.\p"
	.string "…I better go, too.$"

PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad::
# 100 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "There's a movie on TV.\n"
	.string "A girl with her hair in pigtails is\l"
	.string "walking up a brick road.\p"
	.string "…I better go, too.$"

PalletTown_PlayersHouse_1F_Text_OopsWrongSide::
# 107 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "Oops, wrong side…$"
