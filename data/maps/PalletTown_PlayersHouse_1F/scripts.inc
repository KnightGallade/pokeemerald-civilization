PalletTown_PlayersHouse_1F_MapScripts::
	.byte 0


PalletTown_PlayersHouse_1F_EventScript_Mom::
# 4 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	lock
# 5 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 6 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	goto_if_set FLAG_BEAT_RIVAL_IN_OAKS_LAB, PalletTown_PlayersHouse_1F_EventScript_MomHeal
# 7 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 8 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale
# 9 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale
# 10 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 11 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_PALLET_PLAYERSHOUSE_1F_MOM, Common_Movement_FaceOriginalDirection
# 12 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 13 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	release
	end


PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale::
# 18 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou
	return


PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale::
# 23 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou
	return


PalletTown_PlayersHouse_1F_EventScript_MomHeal::
# 28 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest
# 29 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 30 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 31 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare
# 32 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	release
	end


PalletTown_PlayersHouse_1F_EventScript_TV::
# 38 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	lockall
# 39 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, PalletTown_PlayersHouse_1F_EventScript_TVScreen
# 40 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_OopsWrongSide
# 41 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	releaseall
	end


PalletTown_PlayersHouse_1F_EventScript_TVScreen::
# 46 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 47 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenMale
# 48 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale
# 49 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	releaseall
	end


PalletTown_PlayersHouse_1F_EventScript_TVScreenMale::
# 54 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad
	return


PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale::
# 59 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad
	return


PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou::
# 63 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: …Right.\n"
	.string "All boys leave home someday.\l"
	.string "It said so on TV.\p"
	.string "Oh, yes. PROF. OAK, next door, was\n"
	.string "looking for you.$"

PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou::
# 71 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: …Right.\n"
	.string "All girls dream of traveling.\l"
	.string "It said so on TV.\p"
	.string "Oh, yes. PROF. OAK, next door, was\n"
	.string "looking for you.$"

PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest::
# 79 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}!\n"
	.string "You should take a quick rest.$"

PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare::
# 84 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Oh, good! You and your\n"
	.string "POKéMON are looking great.\l"
	.string "Take care now!$"

PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad::
# 90 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "There's a movie on TV.\n"
	.string "Four boys are walking on railroad\l"
	.string "tracks.\p"
	.string "…I better go, too.$"

PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad::
# 98 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "There's a movie on TV.\n"
	.string "A girl with her hair in pigtails is\l"
	.string "walking up a brick road.\p"
	.string "…I better go, too.$"

PalletTown_PlayersHouse_1F_Text_OopsWrongSide::
# 105 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.string "Oops, wrong side…$"
