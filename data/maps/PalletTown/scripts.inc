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
