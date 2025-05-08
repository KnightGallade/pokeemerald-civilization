# 1 "data/maps/PalletTown/scripts.pory"

# 2 "data/maps/PalletTown/scripts.pory"
PalletTown_MapScripts::
# 3 "data/maps/PalletTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_OnTransition
# 4 "data/maps/PalletTown/scripts.pory"
	.byte 0
# 5 "data/maps/PalletTown/scripts.pory"

# 6 "data/maps/PalletTown/scripts.pory"
PalletTown_OnTransition:
# 7 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_VISITED_PALLET_TOWN
# 8 "data/maps/PalletTown/scripts.pory"
	end
# 9 "data/maps/PalletTown/scripts.pory"

# 10 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLady::
# 11 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RaisingMonsToo, MSGBOX_NPC
# 12 "data/maps/PalletTown/scripts.pory"
	end
# 13 "data/maps/PalletTown/scripts.pory"

# 14 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_FatMan::
# 15 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CanStoreItemsAndMonsInPC, MSGBOX_NPC
# 16 "data/maps/PalletTown/scripts.pory"
	end
# 17 "data/maps/PalletTown/scripts.pory"

# 18 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OaksLabSign::
# 19 "data/maps/PalletTown/scripts.pory"
	lockall
# 20 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakPokemonResearchLab
# 21 "data/maps/PalletTown/scripts.pory"
	releaseall
# 22 "data/maps/PalletTown/scripts.pory"
	end
# 23 "data/maps/PalletTown/scripts.pory"

# 24 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_PlayersHouseSign::
# 25 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PlayersHouse, MSGBOX_SIGN
# 26 "data/maps/PalletTown/scripts.pory"
	end
# 27 "data/maps/PalletTown/scripts.pory"

# 28 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_RivalsHouseSign::
# 29 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RivalsHouse, MSGBOX_SIGN
# 30 "data/maps/PalletTown/scripts.pory"
	end
# 31 "data/maps/PalletTown/scripts.pory"

# 32 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_TownSign::
# 33 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_TownSign, MSGBOX_SIGN
# 34 "data/maps/PalletTown/scripts.pory"
	end
# 35 "data/maps/PalletTown/scripts.pory"

# 36 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_TrainerTips::
# 37 "data/maps/PalletTown/scripts.pory"
	lockall
# 38 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenu
# 39 "data/maps/PalletTown/scripts.pory"
	releaseall
# 40 "data/maps/PalletTown/scripts.pory"
	end
# 41 "data/maps/PalletTown/scripts.pory"

# 42 "data/maps/PalletTown/scripts.pory"
PalletTown_Text_RaisingMonsToo::
# 43 "data/maps/PalletTown/scripts.pory"
    .string "I'm raising POKéMON, too.\p"
# 44 "data/maps/PalletTown/scripts.pory"
    .string "When they get strong, they can\n"
# 45 "data/maps/PalletTown/scripts.pory"
    .string "protect me.$"
# 46 "data/maps/PalletTown/scripts.pory"

# 47 "data/maps/PalletTown/scripts.pory"
PalletTown_Text_CanStoreItemsAndMonsInPC::
# 48 "data/maps/PalletTown/scripts.pory"
    .string "Technology is incredible!\p"
# 49 "data/maps/PalletTown/scripts.pory"
    .string "You can now store and recall items\n"
# 50 "data/maps/PalletTown/scripts.pory"
    .string "and POKéMON as data via PC.$"
# 51 "data/maps/PalletTown/scripts.pory"

# 52 "data/maps/PalletTown/scripts.pory"
PalletTown_Text_OakPokemonResearchLab::
# 53 "data/maps/PalletTown/scripts.pory"
    .string "OAK POKéMON RESEARCH LAB$"
# 54 "data/maps/PalletTown/scripts.pory"

# 55 "data/maps/PalletTown/scripts.pory"
PalletTown_Text_PlayersHouse::
# 56 "data/maps/PalletTown/scripts.pory"
    .string "{PLAYER}'s house$"
# 57 "data/maps/PalletTown/scripts.pory"

# 58 "data/maps/PalletTown/scripts.pory"
PalletTown_Text_RivalsHouse::
# 59 "data/maps/PalletTown/scripts.pory"
    .string "{RIVAL}'s house$"
# 60 "data/maps/PalletTown/scripts.pory"

# 61 "data/maps/PalletTown/scripts.pory"
PalletTown_Text_TownSign::
# 62 "data/maps/PalletTown/scripts.pory"
    .string "PALLET TOWN\n"
# 63 "data/maps/PalletTown/scripts.pory"
    .string "Shades of your journey await!$"
# 64 "data/maps/PalletTown/scripts.pory"

# 65 "data/maps/PalletTown/scripts.pory"
PalletTown_Text_PressStartToOpenMenu::
# 66 "data/maps/PalletTown/scripts.pory"
	.string "TRAINER TIPS\p"
# 67 "data/maps/PalletTown/scripts.pory"
	.string "Press START to open the MENU!$"

PalletTown_EventScript_Talk_To_Celebi::
# 73 "data/maps/PalletTown/scripts.pory"
	lockall
# 74 "data/maps/PalletTown/scripts.pory"
	applymovement 3, PalletTown_EventScript_Talk_To_Celebi_Movement_0
# 75 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_EventScript_Ask_Celebi, MSGBOX_YESNO
# 76 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_EventScript_Celebi_Back_In_Time
# 77 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_EventScript_Refuse_Celebi, MSGBOX_NPC
# 78 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_Celebi_Back_In_Time::
# 83 "data/maps/PalletTown/scripts.pory"
	fadenewbgm MUS_CAVE_OF_ORIGIN
# 84 "data/maps/PalletTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Accepted_Celebi, MSGBOX_NPC
# 85 "data/maps/PalletTown/scripts.pory"
	setvar VAR_RESULT, 2
# 86 "data/maps/PalletTown/scripts.pory"
	special DoOrbEffect
# 87 "data/maps/PalletTown/scripts.pory"
	lockall
# 88 "data/maps/PalletTown/scripts.pory"
	delay 150
# 89 "data/maps/PalletTown/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
# 90 "data/maps/PalletTown/scripts.pory"
	special FadeOutOrbEffect
# 91 "data/maps/PalletTown/scripts.pory"
	lockall
# 92 "data/maps/PalletTown/scripts.pory"
	delay 30
# 93 "data/maps/PalletTown/scripts.pory"
	waitmoncry
# 94 "data/maps/PalletTown/scripts.pory"
	playse SE_SHINY
# 95 "data/maps/PalletTown/scripts.pory"
	checkplayergender
# 96 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, PalletTown_EventScript_Celebi_Male
# 97 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, PalletTown_EventScript_Celebi_Female
	return


PalletTown_EventScript_Celebi_Male::
# 101 "data/maps/PalletTown/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 102 "data/maps/PalletTown/scripts.pory"
	warpteleport MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 1, 4
# 103 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_Celebi_Female::
# 108 "data/maps/PalletTown/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
# 109 "data/maps/PalletTown/scripts.pory"
	warpteleport MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 7, 4
# 110 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


# 74 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_Talk_To_Celebi_Movement_0:
# 74 "data/maps/PalletTown/scripts.pory"
	face_player
# 74 "data/maps/PalletTown/scripts.pory"
	emote_exclamation_mark
	step_end

PalletTown_EventScript_Ask_Celebi::
# 114 "data/maps/PalletTown/scripts.pory"
	.string "It appears Celebi wants you to \n"
	.string "follow it...\l"
	.string "Do you wish to go with Celebi?$"

PalletTown_EventScript_Refuse_Celebi::
# 120 "data/maps/PalletTown/scripts.pory"
	.string "Yeah, FireRed is pretty cool.$"

PalletTown_EventScript_Accepted_Celebi::
# 124 "data/maps/PalletTown/scripts.pory"
	.string "You enter a different reality...$"
