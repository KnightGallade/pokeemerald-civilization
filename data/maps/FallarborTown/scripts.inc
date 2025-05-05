# 1 "data/maps/FallarborTown/scripts.pory"

# 2 "data/maps/FallarborTown/scripts.pory"
FallarborTown_MapScripts::
# 3 "data/maps/FallarborTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
# 4 "data/maps/FallarborTown/scripts.pory"
	.byte 0
# 5 "data/maps/FallarborTown/scripts.pory"

# 6 "data/maps/FallarborTown/scripts.pory"
FallarborTown_OnTransition:
# 7 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_VISITED_FALLARBOR_TOWN
# 8 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 9 "data/maps/FallarborTown/scripts.pory"
	end
# 10 "data/maps/FallarborTown/scripts.pory"

# 11 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertM::
# 12 "data/maps/FallarborTown/scripts.pory"
	lock
# 13 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 14 "data/maps/FallarborTown/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
# 15 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
# 16 "data/maps/FallarborTown/scripts.pory"
	release
# 17 "data/maps/FallarborTown/scripts.pory"
	end
# 18 "data/maps/FallarborTown/scripts.pory"

# 19 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertMNormal::
# 20 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
# 21 "data/maps/FallarborTown/scripts.pory"
	release
# 22 "data/maps/FallarborTown/scripts.pory"
	end
# 23 "data/maps/FallarborTown/scripts.pory"

# 24 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Girl::
# 25 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
# 26 "data/maps/FallarborTown/scripts.pory"
	end
# 27 "data/maps/FallarborTown/scripts.pory"

# 28 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Gentleman::
# 29 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
# 30 "data/maps/FallarborTown/scripts.pory"
	end
# 31 "data/maps/FallarborTown/scripts.pory"

# 32 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Azurill::
# 33 "data/maps/FallarborTown/scripts.pory"
	lock
# 34 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 35 "data/maps/FallarborTown/scripts.pory"
	waitse
# 36 "data/maps/FallarborTown/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 37 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
# 38 "data/maps/FallarborTown/scripts.pory"
	waitmoncry
# 39 "data/maps/FallarborTown/scripts.pory"
	release
# 40 "data/maps/FallarborTown/scripts.pory"
	end
# 41 "data/maps/FallarborTown/scripts.pory"

# 42 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_BattleTentSign::
# 43 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
# 44 "data/maps/FallarborTown/scripts.pory"
	end
# 45 "data/maps/FallarborTown/scripts.pory"

# 46 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_TownSign::
# 47 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
# 48 "data/maps/FallarborTown/scripts.pory"
	end
# 49 "data/maps/FallarborTown/scripts.pory"

# 50 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_MoveTutorSign::
# 51 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
# 52 "data/maps/FallarborTown/scripts.pory"
	end
# 53 "data/maps/FallarborTown/scripts.pory"

# 54 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_ShadyCharactersCozmosHome:
# 55 "data/maps/FallarborTown/scripts.pory"
	.string "Something's happening,\n"
# 56 "data/maps/FallarborTown/scripts.pory"
	.string "and I don't like it!\p"
# 57 "data/maps/FallarborTown/scripts.pory"
	.string "I've seen shady characters wandering\n"
# 58 "data/maps/FallarborTown/scripts.pory"
	.string "in and out of PROF. COZMO's home…$"
# 59 "data/maps/FallarborTown/scripts.pory"

# 60 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_RegionKnownForMeteors:
# 61 "data/maps/FallarborTown/scripts.pory"
	.string "This region's been known for meteors\n"
# 62 "data/maps/FallarborTown/scripts.pory"
	.string "since the olden days.\p"
# 63 "data/maps/FallarborTown/scripts.pory"
	.string "They say METEOR FALLS was gouged out\n"
# 64 "data/maps/FallarborTown/scripts.pory"
	.string "by a falling meteorite long ago.$"
# 65 "data/maps/FallarborTown/scripts.pory"

# 66 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MyPreciousAzurill:
# 67 "data/maps/FallarborTown/scripts.pory"
	.string "See! Take a look!\n"
# 68 "data/maps/FallarborTown/scripts.pory"
	.string "This is my precious AZURILL!\p"
# 69 "data/maps/FallarborTown/scripts.pory"
	.string "It's slick and smooth and plushy, too!$"
# 70 "data/maps/FallarborTown/scripts.pory"

# 71 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_Azurill:
# 72 "data/maps/FallarborTown/scripts.pory"
	.string "AZURILL: Rooreelooo.$"
# 73 "data/maps/FallarborTown/scripts.pory"

# 74 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_HaveYouChallengedFlannery:
# 75 "data/maps/FallarborTown/scripts.pory"
	.string "Have you already challenged FLANNERY,\n"
# 76 "data/maps/FallarborTown/scripts.pory"
	.string "the LEADER of LAVARIDGE GYM?\p"
# 77 "data/maps/FallarborTown/scripts.pory"
	.string "The girl's grandfather was famous.\n"
# 78 "data/maps/FallarborTown/scripts.pory"
	.string "He was one of the ELITE FOUR in the\l"
# 79 "data/maps/FallarborTown/scripts.pory"
	.string "POKéMON LEAGUE at one point.\p"
# 80 "data/maps/FallarborTown/scripts.pory"
	.string "It wouldn't surprise me to see FLANNERY\n"
# 81 "data/maps/FallarborTown/scripts.pory"
	.string "become a great TRAINER in her own\l"
# 82 "data/maps/FallarborTown/scripts.pory"
	.string "right.$"
# 83 "data/maps/FallarborTown/scripts.pory"

# 84 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_BattleTentSign:
# 85 "data/maps/FallarborTown/scripts.pory"
	.string "BATTLE TENT FALLARBOR SITE\n"
# 86 "data/maps/FallarborTown/scripts.pory"
	.string "“May the Greatest Teams Gather!”$"
# 87 "data/maps/FallarborTown/scripts.pory"

# 88 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_TownSign:
# 89 "data/maps/FallarborTown/scripts.pory"
	.string "FALLARBOR TOWN\n"
# 90 "data/maps/FallarborTown/scripts.pory"
	.string "“A farm community with small gardens.”$"
# 91 "data/maps/FallarborTown/scripts.pory"

# 92 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MoveTutorSign:
# 93 "data/maps/FallarborTown/scripts.pory"
	.string "MOVE TUTOR'S HOUSE\n"
# 94 "data/maps/FallarborTown/scripts.pory"
	.string "“New moves taught to POKéMON.”$"
