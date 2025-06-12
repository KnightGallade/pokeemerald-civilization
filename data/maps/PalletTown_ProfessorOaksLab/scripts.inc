PalletTown_ProfessorOaksLab_MapScripts::
# 9 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_ProfessorOaksLab_OnTransition
# 10 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_ProfessorOaksLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 13 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_ProfessorOaksLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PalletTown_ProfessorOaksLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 11 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene
	.2byte 0

PalletTown_ProfessorOaksLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_ChooseStarterScene
# 15 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene
	.2byte 0


PalletTown_ProfessorOaksLab_OnTransition::
# 20 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_VISITED_OAKS_LAB
# 21 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene
# 22 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene
# 23 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished
# 24 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck
	end


PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck::
# 29 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_OAK_SKIP_22_RIVAL_CHECK
	return


PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished::
# 34 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9
	return


PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene::
# 39 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PALLET_OAKS_LAB_PROF_OAK, 6, 11
# 40 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_UP
# 41 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	savebgm MUS_RG_OAK
	return


PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene::
# 46 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PALLET_OAKS_LAB_PROF_OAK, 6, 11
# 47 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_UP
	return


PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene::
# 52 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end


PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene::
# 58 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 59 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_FACING, DIR_NORTH
# 60 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 61 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 62 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_PALLET_OAKS_LAB_PROF_OAK
# 63 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PALLET_OAKS_LAB_PROF_OAK, 6, 3
# 64 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 65 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 66 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 67 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 68 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
	end


PalletTown_ProfessorOaksLab_EventScript_NationalDexScene::
# 73 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakSightingsOfRareMons
# 74 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 75 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth
# 76 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth
# 77 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 78 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 79 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalJustLetMeHandleEverything
# 80 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 81 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNeedYourHelpTooNeedToSeePokedexes
# 82 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth
# 83 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest
# 84 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTookBothPokedexUnits
# 85 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 86 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth
# 87 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth
# 88 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast
# 89 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest
# 90 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_PALLET_OAKS_LAB_POKEDEX_1
# 91 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_PALLET_OAKS_LAB_POKEDEX_2
# 92 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 93 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNowTheseUnitsCanRecordMoreData
# 94 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 95 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_PALLET_OAKS_LAB_POKEDEX_1
# 96 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_PALLET_OAKS_LAB_POKEDEX_2
# 97 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 98 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 99 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 100 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 101 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 102 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 103 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_PlayersPokedexWasUpgraded
# 104 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 105 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 106 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special EnableNationalPokedex
# 107 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMustReallyWorkToFillPokedex
# 108 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllCompleteThePokedex
# 109 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 110 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 111 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 112 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 113 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 114 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 115 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_PALLET_OAKS_LAB_RIVAL
# 116 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 117 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8
# 118 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth::
# 123 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PALLET_OAKS_LAB_RIVAL, 5, 10
# 124 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_PALLET_OAKS_LAB_RIVAL
# 125 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 126 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 127 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 128 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest::
# 133 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PALLET_OAKS_LAB_RIVAL, 6, 10
# 134 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_PALLET_OAKS_LAB_RIVAL
# 135 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 136 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 137 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 138 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 139 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth::
# 144 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PALLET_OAKS_LAB_RIVAL, 6, 10
# 145 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_PALLET_OAKS_LAB_RIVAL
# 146 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 147 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 148 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 149 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth::
# 154 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 155 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest::
# 160 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 161 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth::
# 166 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 167 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth::
# 172 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth
# 173 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 174 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 175 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PALLET_OAKS_LAB_PROF_OAK
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast::
# 180 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 181 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 182 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PALLET_OAKS_LAB_PROF_OAK
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest::
# 187 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 188 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 192 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk:
# 193 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 194 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 195 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 196 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 197 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 198 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 201 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth:
# 202 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 203 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 204 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 205 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 206 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 207 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_ChooseStarterScene::
# 211 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 212 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 213 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 214 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_PALLET_OAKS_LAB_PROF_OAK
# 215 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PALLET_OAKS_LAB_PROF_OAK, 6, 3
# 216 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 217 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 218 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 219 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 220 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 221 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 222 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 223 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	savebgm MUS_DUMMY
# 224 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 225 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting
# 226 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 227 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 60
# 228 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne
# 229 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 230 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 231 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalReact
# 232 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 233 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe
# 234 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBePatientRival
# 235 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 236 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


# 240 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakEnter:
# 241 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 242 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 243 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 244 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 245 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 246 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 247 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 250 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerEnter:
# 251 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 252 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 253 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 254 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 255 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 256 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 257 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 258 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 259 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 262 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalReact:
# 263 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 264 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 265 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_LeaveStarterSceneTrigger::
# 269 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 270 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, Common_Movement_FaceDown
# 271 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 272 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet
# 273 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 274 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp
# 275 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 276 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


# 280 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp:
# 281 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 282 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerLeft::
# 286 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 287 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 1
# 288 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerMid::
# 293 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 294 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 2
# 295 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerRight::
# 300 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 301 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 3
# 302 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattle::
# 307 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 308 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 309 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 310 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 311 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 312 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons
# 313 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 314 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, Common_Movement_FaceDown
# 315 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 316 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 0, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander
# 317 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur
# 318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle::
# 327 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft
# 328 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid
# 329 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft::
# 334 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft
# 335 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 336 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid::
# 341 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid
# 342 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 343 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight::
# 348 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight
# 349 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 350 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle::
# 355 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_RIVAL_OAKS_LAB_SQUIRTLE, PalletTown_ProfessorOaksLab_Text_RivalDefeat
# 356 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
	end


# 360 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft:
# 361 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 362 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 363 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 364 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 365 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 366 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 367 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 370 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid:
# 371 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 372 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 373 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 374 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 375 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 376 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 379 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight:
# 380 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 381 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 382 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 383 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 384 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander::
# 388 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft
# 389 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid
# 390 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft::
# 395 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft
# 396 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 397 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid::
# 402 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid
# 403 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 404 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight::
# 409 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight
# 410 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 411 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander::
# 416 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_RIVAL_OAKS_LAB_CHARMANDER, PalletTown_ProfessorOaksLab_Text_RivalDefeat
# 417 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
	end


# 421 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft:
# 422 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 423 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 424 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 425 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 426 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 427 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 428 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 429 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 432 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid:
# 433 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 434 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 435 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 436 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 437 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 438 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 439 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 442 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight:
# 443 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 444 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 445 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 446 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 447 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 448 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur::
# 452 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft
# 453 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid
# 454 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft::
# 459 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft
# 460 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 461 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid::
# 466 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid
# 467 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 468 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight::
# 473 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight
# 474 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 475 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur::
# 480 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_RIVAL_OAKS_LAB_BULBASAUR, PalletTown_ProfessorOaksLab_Text_RivalDefeat
# 481 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
	end


# 485 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft:
# 486 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 487 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 488 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 489 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 490 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 491 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 494 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid:
# 495 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 496 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 497 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 498 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 499 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 502 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight:
# 503 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 504 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 505 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 506 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle::
# 510 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special HealPlayerParty
# 511 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon
# 512 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 513 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 514 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft
# 515 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid
# 516 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight
# 517 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_PALLET_OAKS_LAB_RIVAL
# 518 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_EXIT
# 519 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 520 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
# 521 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
# 522 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft::
# 527 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft
# 528 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 529 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PALLET_OAKS_LAB_RIVAL
	return


PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid::
# 534 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid
# 535 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 536 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PALLET_OAKS_LAB_RIVAL
	return


PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight::
# 541 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight
# 542 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight
# 543 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PALLET_OAKS_LAB_RIVAL
	return


# 547 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft:
# 548 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 549 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 550 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 551 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 552 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 553 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 554 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 555 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 558 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight:
# 559 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 560 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 561 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 562 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 563 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 564 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 565 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 566 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 569 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid:
# 570 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 571 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 572 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 573 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 574 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 575 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 576 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 577 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 578 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 581 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle:
# 582 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 583 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 584 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 585 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 586 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 587 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 590 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight:
# 591 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 592 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 593 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 594 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 595 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 596 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_Rival::
# 600 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 601 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 602 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter
# 603 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter
# 604 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround
# 605 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter::
# 610 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer
# 611 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter::
# 616 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher
# 617 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ProfOak::
# 622 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 623 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 624 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_TEMP_2, PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex
# 625 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 626 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 627 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene
# 628 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 629 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls
# 630 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene
# 631 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4, PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow
# 632 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon
# 633 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose
# 634 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex::
# 639 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 640 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon::
# 645 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon
# 646 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow::
# 651 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow
# 652 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene::
# 657 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe
# 658 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 659 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel
# 660 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 661 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 662 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeitem ITEM_OAKS_PARCEL
# 663 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered
# 664 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 665 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGramps
# 666 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 667 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth
# 668 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth
# 669 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 670 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 671 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 672 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor
# 673 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 674 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 675 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_PIN
# 676 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, Common_Movement_ExclamationMark
# 677 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 678 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, Common_Movement_Delay48
# 679 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 680 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth
# 681 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast
# 682 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest
# 683 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth
# 684 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo
# 685 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 686 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth
# 687 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth
# 688 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast
# 689 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest
# 690 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk
# 691 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 692 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 693 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou
# 694 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 695 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterUp
# 696 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 697 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_PALLET_OAKS_LAB_POKEDEX_1
# 698 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 699 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_PALLET_OAKS_LAB_POKEDEX_2
# 700 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 25
# 701 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 702 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 703 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 704 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 705 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 706 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 707 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak
# 708 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 709 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 710 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 711 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 712 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 713 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese
# 714 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 715 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakExplainCatching
# 716 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream
# 717 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps
# 718 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth
# 719 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth
# 720 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 721 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 722 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap
# 723 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 724 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 725 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 726 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 727 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 728 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 729 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_PALLET_OAKS_LAB_RIVAL
# 730 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 731 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 732 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 733 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 734 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 735 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 736 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth::
# 741 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 742 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth::
# 747 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth
# 748 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast::
# 753 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 754 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast
# 755 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest::
# 760 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 761 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 765 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast:
# 766 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 767 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 768 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 769 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 772 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver:
# 773 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 774 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 775 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 778 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth:
# 779 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 780 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 781 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth::
# 785 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 786 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth::
# 791 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth
# 792 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 793 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 794 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PALLET_OAKS_LAB_PROF_OAK
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast::
# 799 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 800 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 801 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PALLET_OAKS_LAB_PROF_OAK
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest::
# 806 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 807 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 811 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast:
# 812 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 813 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 814 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 815 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 818 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk:
# 819 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 820 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 821 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 822 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 825 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk:
# 826 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 827 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 828 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 829 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 830 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 833 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth:
# 834 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 835 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 836 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 837 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 838 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 839 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls::
# 843 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 844 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 845 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 846 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 847 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 848 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 849 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_0x8009, 1, PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls
# 850 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex
	end


PalletTown_ProfessorOaksLab_EventScript_RatePokedex::
# 855 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 856 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SAW_DEX_COMPLETION, PalletTown_ProfessorOaksLab_EventScript_DexCompleted
# 857 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_DexCompleted::
# 862 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 863 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 864 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PokedexRating_Text_Wroooaaarrr
# 865 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 866 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth
# 867 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth
# 868 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast
# 869 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest
# 870 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 871 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 872 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 873 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 70
# 874 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 875 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_TEMP_2
# 876 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth::
# 881 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth
# 882 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth::
# 887 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth
# 888 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast::
# 893 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedEast
# 894 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest::
# 899 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedWest
# 900 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 904 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth:
# 905 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 906 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 907 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 908 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 909 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 910 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 911 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 914 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth:
# 915 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 916 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 917 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 918 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 919 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 920 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 921 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 924 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedEast:
# 925 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 926 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 927 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 928 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 929 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 930 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 931 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 934 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedWest:
# 935 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 936 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 937 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 938 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 939 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 940 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 941 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene::
# 945 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 946 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 947 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_lt VAR_0x8009, 60, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 948 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 949 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer
# 950 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
	end


PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene::
# 955 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls::
# 960 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SKIP_22_RIVAL_CHECK, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 961 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls
# 962 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	checkitem ITEM_POKE_BALL
# 963 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls
# 964 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
	end


PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls::
# 969 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ROUTE22, 2, PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls
# 970 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
	end


PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls::
# 975 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex
# 976 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 977 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
# 978 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait::
# 983 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait
# 984 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls::
# 989 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime
# 990 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth::
# 995 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PALLET_OAKS_LAB_RIVAL, 5, 10
# 996 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_PALLET_OAKS_LAB_RIVAL
# 997 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 998 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 999 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest::
# 1004 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PALLET_OAKS_LAB_RIVAL, 6, 10
# 1005 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_PALLET_OAKS_LAB_RIVAL
# 1006 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1007 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 1008 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 1009 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth::
# 1014 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PALLET_OAKS_LAB_RIVAL, 6, 10
# 1015 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_PALLET_OAKS_LAB_RIVAL
# 1016 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1017 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 1018 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth::
# 1023 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 1024 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1025 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1026 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1027 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest::
# 1032 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 1033 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1034 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1035 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1036 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1037 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast::
# 1042 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 1043 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1044 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1045 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1046 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1047 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth::
# 1052 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, Common_Movement_FacePlayer
# 1053 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1054 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth::
# 1059 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 1060 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1061 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest::
# 1066 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, Common_Movement_FacePlayer
# 1067 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1068 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth::
# 1073 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 1074 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1075 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_RivalExit::
# 1080 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1081 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth::
# 1086 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1087 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 1091 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest:
# 1092 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 1093 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1094 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1097 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth:
# 1098 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1099 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1100 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1101 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1102 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1103 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1104 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 1105 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 1106 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1109 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalEnter:
# 1110 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1111 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1112 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1113 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1114 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1115 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1116 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1119 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExit:
# 1120 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1121 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1122 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1123 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1124 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1125 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1126 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 1130 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1131 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1132 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 0
# 1133 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_BULBASAUR
# 1134 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHARMANDER
# 1135 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_4, LOCALID_PALLET_OAKS_LAB_CHARMANDER_BALL
# 1136 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1137 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1138 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1139 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice::
# 1144 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_PROF_OAK, Common_Movement_FaceRight
# 1145 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1146 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	showmonpic VAR_TEMP_2, 10, 3
# 1147 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 0, PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur
# 1148 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 1, PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle
# 1149 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander
	end


PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur::
# 1154 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur, MSGBOX_YESNO
# 1155 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1156 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
	end


PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle::
# 1161 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle, MSGBOX_YESNO
# 1162 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1163 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
	end


PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander::
# 1168 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander, MSGBOX_YESNO
# 1169 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1170 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
	end


PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter::
# 1175 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1176 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ChoseStarter::
# 1181 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1182 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1183 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 1184 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1185 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 1186 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	givemon VAR_TEMP_2, 5
# 1187 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_STARTER_MON, VAR_TEMP_1
# 1188 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_2
# 1189 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 1190 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1191 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 1192 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1193 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox gText_GiveNicknameToThisMon, MSGBOX_YESNO
# 1194 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_GiveNicknameToStarter
# 1195 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
	end


EventScript_GiveNicknameToStarter::
# 1202 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1203 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 1204 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
	end


PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter::
# 1209 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 1210 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 0, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander
# 1211 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 1, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur
# 1212 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander::
# 1217 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander
# 1218 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1219 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
	end


PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle::
# 1224 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle
# 1225 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1226 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
	end


PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur::
# 1231 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PALLET_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur
# 1232 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1233 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
	end


PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter::
# 1238 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen
# 1239 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject VAR_TEMP_4
# 1240 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_3
# 1241 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak
# 1242 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1243 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 1244 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1245 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 1246 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_OPENED_START_MENU, PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene
# 1247 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene::
# 1252 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
	return


# 1256 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander:
# 1257 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1258 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1259 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1260 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1261 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1262 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1263 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1264 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1265 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1268 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle:
# 1269 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1270 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1271 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1272 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1273 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1274 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1275 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1278 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur:
# 1279 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1280 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1281 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1282 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1283 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1284 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 1288 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1289 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1290 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 1
# 1291 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SQUIRTLE
# 1292 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_BULBASAUR
# 1293 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_4, LOCALID_PALLET_OAKS_LAB_BULBASAUR_BALL
# 1294 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1295 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1296 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1297 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 1302 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1303 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1304 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 2
# 1305 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHARMANDER
# 1306 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SQUIRTLE
# 1307 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_4, LOCALID_PALLET_OAKS_LAB_SQUIRTLE_BALL
# 1308 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1309 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1310 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1311 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_LastPokeBall::
# 1316 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OaksLastMon
# 1317 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide1::
# 1322 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1323 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1324 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear
# 1325 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1326 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear::
# 1331 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow
# 1332 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide2::
# 1337 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1338 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1339 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear
# 1340 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1341 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear::
# 1346 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons
# 1347 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide3::
# 1352 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1353 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1354 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons
# 1355 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Pokedex::
# 1360 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia, MSGBOX_NPC
	end


PalletTown_ProfessorOaksLab_EventScript_Computer::
# 1365 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_EmailMessage, MSGBOX_SIGN
	end


PalletTown_ProfessorOaksLab_EventScript_LeftSign::
# 1370 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu, MSGBOX_SIGN
	end


PalletTown_ProfessorOaksLab_EventScript_RightSign::
# 1375 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 1376 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RightSignAlt
# 1377 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu
# 1378 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


PalletTown_ProfessorOaksLab_EventScript_RightSignAlt::
# 1383 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints
# 1384 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround::
# 1388 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: What, it's only {PLAYER}?\n"
	.string "Gramps isn't around.$"

PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting::
# 1393 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Gramps!\n"
	.string "I'm fed up with waiting!$"

PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe::
# 1398 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Hey! Gramps! No fair!\n"
	.string "What about me?$"

PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer::
# 1403 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Heh, I don't need to be\n"
	.string "greedy like you. I'm mature!\p"
	.string "Go ahead and choose, {PLAYER}!$"

PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen::
# 1409 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: I'll take this one, then!$"

PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak::
# 1413 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL} received the {STR_VAR_1}\n"
	.string "from PROF. OAK!$"

PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher::
# 1418 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: My POKéMON looks a lot\n"
	.string "tougher than yours.$"

PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons::
# 1423 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Wait, {PLAYER}!\n"
	.string "Let's check out our POKéMON!\p"
	.string "Come on, I'll take you on!$"

PalletTown_ProfessorOaksLab_Text_RivalDefeat::
# 1429 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "WHAT?\n"
	.string "Unbelievable!\l"
	.string "I picked the wrong POKéMON!$"

PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon::
# 1435 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Okay! I'll make my\n"
	.string "POKéMON battle to toughen it up!\p"
	.string "{PLAYER}! Gramps!\n"
	.string "Smell you later!$"

PalletTown_ProfessorOaksLab_Text_RivalGramps::
# 1442 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Gramps!$"

PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor::
# 1446 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: I almost forgot!\n"
	.string "What did you call me for?$"

PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps::
# 1451 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: All right, Gramps!\n"
	.string "Leave it all to me!$"

PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap::
# 1456 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{PLAYER}, I hate to say it, but you\n"
	.string "won't be necessary for this.\p"
	.string "I know! I'll borrow a TOWN MAP\n"
	.string "from my sis!\p"
	.string "I'll tell her not to lend you one,\n"
	.string "{PLAYER}! Hahaha!\p"
	.string "Don't bother coming around to\n"
	.string "my place after this!$"

PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne::
# 1467 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: {RIVAL}?\n"
	.string "Let me think…\p"
	.string "Oh, that's right, I told you to\n"
	.string "come! Just wait!\p"
	.string "Here, {PLAYER}.\p"
	.string "There are three POKéMON here.\p"
	.string "Haha!\p"
	.string "The POKéMON are held inside\n"
	.string "these POKé BALLS.\p"
	.string "When I was young, I was a serious\n"
	.string "POKéMON TRAINER.\p"
	.string "But now, in my old age, I have\n"
	.string "only these three left.\p"
	.string "You can have one.\n"
	.string "Go on, choose!$"

PalletTown_ProfessorOaksLab_Text_OakBePatientRival::
# 1485 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: Be patient, {RIVAL}.\n"
	.string "You can have one, too!$"

PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose::
# 1490 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: Now, {PLAYER}.\p"
	.string "Inside those three POKé BALLS are\n"
	.string "POKéMON.\p"
	.string "Which one will you choose for\n"
	.string "yourself?$"

PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet::
# 1498 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: Hey!\n"
	.string "Don't go away yet!$"

PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander::
# 1503 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Ah! CHARMANDER is your choice.\n"
	.string "You should raise it patiently.\p"
	.string "So, {PLAYER}, you're claiming the\n"
	.string "FIRE POKéMON CHARMANDER?$"

PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle::
# 1510 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Hm! SQUIRTLE is your choice.\n"
	.string "It's one worth raising.\p"
	.string "So, {PLAYER}, you've decided on the\n"
	.string "WATER POKéMON SQUIRTLE?$"

PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur::
# 1517 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "I see! BULBASAUR is your choice.\n"
	.string "It's very easy to raise.\p"
	.string "So, {PLAYER}, you want to go with\n"
	.string "the GRASS POKéMON BULBASAUR?$"

PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic::
# 1524 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "This POKéMON is really quite\n"
	.string "energetic!$"

PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak::
# 1529 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
	.string "from PROF. OAK!$"

PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon::
# 1534 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: If a wild POKéMON appears,\n"
	.string "your POKéMON can battle it.\p"
	.string "With it at your side, you should be\n"
	.string "able to reach the next town.$"

PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow::
# 1541 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: {PLAYER}, raise your young\n"
	.string "POKéMON by making it battle.\p"
	.string "It has to battle for it to grow.$"

PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe::
# 1547 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: Oh, {PLAYER}!\n"
	.string "How is my old POKéMON?\p"
	.string "Well, it seems to be growing more\n"
	.string "attached to you.\p"
	.string "You must be talented as a POKéMON\n"
	.string "TRAINER.\p"
	.string "What's that?\n"
	.string "You have something for me?$"

PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel::
# 1558 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{PLAYER} delivered OAK'S PARCEL.$"

PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered::
# 1562 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Ah! \n"
	.string "It's the custom POKé BALL!\p"
	.string "I had it on order.\n"
	.string "Thank you!$"

PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo::
# 1569 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: Oh, right!\n"
	.string "I have a request for you two.$"

PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk::
# 1574 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "On the desk there is my invention,\n"
	.string "the POKéDEX!\p"
	.string "It automatically records data on\n"
	.string "POKéMON you've seen or caught.\p"
	.string "It's a high-tech encyclopedia!$"

PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou::
# 1582 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: {PLAYER} and {RIVAL}.\n"
	.string "Take these with you.$"

PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak::
# 1587 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{PLAYER} received the POKéDEX\n"
	.string "from PROF. OAK.$"

PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese::
# 1592 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: You can't get detailed data\n"
	.string "on POKéMON by just seeing them.\p"
	.string "You must catch them to obtain\n"
	.string "complete data.\p"
	.string "So, here are some tools for\n"
	.string "catching wild POKéMON.$"

PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls::
# 1601 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{PLAYER} received five POKé BALLS.$"

PalletTown_ProfessorOaksLab_Text_OakExplainCatching::
# 1605 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "When a wild POKéMON appears,\n"
	.string "it's fair game.\p"
	.string "Just throw a POKé BALL at it and\n"
	.string "try to catch it!\p"
	.string "This won't always work, however.\p"
	.string "A healthy POKéMON can escape.\n"
	.string "You have to be lucky!$"

PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream::
# 1615 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "To make a complete guide on all\n"
	.string "the POKéMON in the world…\p"
	.string "That was my dream!\p"
	.string "But, I'm too old.\n"
	.string "I can't get the job done.\p"
	.string "So, I want you two to fulfill my\n"
	.string "dream for me.\p"
	.string "Get moving, you two.\p"
	.string "This is a great undertaking in\n"
	.string "POKéMON history!$"

PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait::
# 1628 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "POKéMON around the world wait for\n"
	.string "you, {PLAYER}!$"

PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex::
# 1633 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Ah, {PLAYER}!\n"
	.string "How is your POKéDEX shaping up?\p"
	.string "{RIVAL} has already caught some\n"
	.string "POKéMON and added to the data.\p"
	.string "So, {PLAYER}, let's have a look at\n"
	.string "your POKéDEX.\p"
	.string "…What's the matter?\n"
	.string "You've added no new data at all.\p"
	.string "I'll give you these, so do try a\n"
	.string "little harder.$"

PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime::
# 1646 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: Come see me sometime.\p"
	.string "After all, I want to know how your\n"
	.string "POKéDEX is coming along.$"

PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia::
# 1652 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "It's like an encyclopedia, but the\n"
	.string "pages are blank.$"

PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls::
# 1657 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Those are POKé BALLS.\n"
	.string "They contain POKéMON!$"

PalletTown_ProfessorOaksLab_Text_OaksLastMon::
# 1662 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "That's PROF. OAK's last POKéMON.$"

PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu::
# 1666 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Press START to open the MENU!$"

PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu::
# 1670 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "The SAVE option is on the MENU.\n"
	.string "Use it regularly.$"

PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints::
# 1675 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "All POKéMON types have strong and\n"
	.string "weak points against others.$"

PalletTown_ProfessorOaksLab_Text_EmailMessage::
# 1680 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "There's an e-mail message here.\p"
	.string "…\p"
	.string "Finally!\n"
	.string "The ultimate TRAINERS of the\l"
	.string "POKéMON LEAGUE are ready to\l"
	.string "take on all comers!\p"
	.string "Bring your best POKéMON and see\n"
	.string "how you rate as a TRAINER!\p"
	.string "POKéMON LEAGUE HQ\n"
	.string "INDIGO PLATEAU\p"
	.string "PROF. OAK, please visit us!\n"
	.string "…$"

PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide::
# 1695 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "I study POKéMON as PROF. OAK's\n"
	.string "AIDE.$"

PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons::
# 1700 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Hi, {PLAYER}. I bet you've become\n"
	.string "good friends with your POKéMON.\p"
	.string "By the way, did you know about\n"
	.string "DAISY?\p"
	.string "If you show DAISY your POKéMON,\n"
	.string "she can tell how much it likes you.\p"
	.string "Occasionally, she will even groom\n"
	.string "a POKéMON for you.\p"
	.string "This is a secret, so please don't\n"
	.string "tell anyone.$"

PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow::
# 1713 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "PROF. OAK is going to have his own\n"
	.string "radio show soon.\p"
	.string "The program will be called PROF.\n"
	.string "OAK's POKéMON SEMINAR.$"

PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons::
# 1720 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "PROF. OAK may not look like much,\n"
	.string "but he's the authority on POKéMON.\p"
	.string "Many POKéMON TRAINERS hold him in\n"
	.string "high regard.$"

PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer::
# 1727 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Ah, now this is excellent!\p"
	.string "{PLAYER}, I have another important\n"
	.string "favor to ask of you.\p"
	.string "I need you to listen closely.$"

PalletTown_ProfessorOaksLab_Text_OakSightingsOfRareMons::
# 1734 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Recently, there have been sightings\n"
	.string "of many rare POKéMON species.\p"
	.string "I'm talking about POKéMON that\n"
	.string "have never been seen in KANTO.\p"
	.string "I would love to go see things for\n"
	.string "myself, but I'm much too old.\p"
	.string "Since I can't do it, {PLAYER}, I'd\n"
	.string "like you to go in my place.$"

PalletTown_ProfessorOaksLab_Text_RivalJustLetMeHandleEverything::
# 1745 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Hey, I heard that!\p"
	.string "Gramps, what's with favoring\n"
	.string "{PLAYER} over me all the time?\p"
	.string "I went and collected more POKéMON,\n"
	.string "and faster, too.\p"
	.string "You should just let me handle\n"
	.string "everything.$"

PalletTown_ProfessorOaksLab_Text_OakNeedYourHelpTooNeedToSeePokedexes::
# 1755 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: I know, I know.\n"
	.string "Of course I need your help, too.\p"
	.string "Now, I need to see both your\n"
	.string "POKéDEXES.$"

PalletTown_ProfessorOaksLab_Text_OakTookBothPokedexUnits::
# 1762 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "PROF. OAK took both POKéDEX\n"
	.string "units.$"

PalletTown_ProfessorOaksLab_Text_OakNowTheseUnitsCanRecordMoreData::
# 1767 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "… … …  … … …\p"
	.string "… … …  … … …\p"
	.string "…And that's done!\p"
	.string "Now these units can record data on\n"
	.string "a lot more POKéMON.$"

PalletTown_ProfessorOaksLab_Text_PlayersPokedexWasUpgraded::
# 1775 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{PLAYER}'s POKéDEX was upgraded!$"

PalletTown_ProfessorOaksLab_Text_OakMustReallyWorkToFillPokedex::
# 1779 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Now, {PLAYER} and {RIVAL}!\p"
	.string "This time, you really must work\n"
	.string "towards filling your POKéDEXES.\p"
	.string "I urge you to make them the best\n"
	.string "and the most complete of all time!\p"
	.string "Truly, this is a monumentally great\n"
	.string "undertaking in POKéMON history!$"

PalletTown_ProfessorOaksLab_Text_RivalIllCompleteThePokedex::
# 1789 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Gramps, calm down.\n"
	.string "Don't get so excited.\p"
	.string "I'll get the POKéDEX completed,\n"
	.string "don't you worry about a thing.\p"
	.string "I think I'll try looking around\n"
	.string "ONE ISLAND first…\p"
	.string "Anyways, I'm outta here!$"
