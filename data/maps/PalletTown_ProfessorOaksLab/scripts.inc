PalletTown_ProfessorOaksLab_MapScripts::
# 17 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_ProfessorOaksLab_OnTransition
# 18 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_ProfessorOaksLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 21 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_ProfessorOaksLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PalletTown_ProfessorOaksLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 19 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene
	.2byte 0

PalletTown_ProfessorOaksLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 22 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_ChooseStarterScene
# 23 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene
	.2byte 0


PalletTown_ProfessorOaksLab_OnTransition::
# 28 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_VISITED_OAKS_LAB
# 29 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene
# 30 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene
# 31 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished
# 32 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck
	end


PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck::
# 37 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_OAK_SKIP_22_RIVAL_CHECK
	return


PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished::
# 42 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9
	return


PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene::
# 47 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm 4, 6, 11
# 48 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 49 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	savebgm MUS_RG_OAK
	return


PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene::
# 54 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm 4, 6, 11
# 55 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
	return


PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene::
# 60 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end


PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene::
# 66 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 67 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_FACING, DIR_NORTH
# 68 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 69 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 70 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject 4
# 71 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm 4, 6, 3
# 72 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 73 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 74 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 75 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 76 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
	end


PalletTown_ProfessorOaksLab_EventScript_NationalDexScene::
# 81 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakSightingsOfRareMons
# 82 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 83 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth
# 84 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth
# 85 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 86 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 87 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalJustLetMeHandleEverything
# 88 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 89 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNeedYourHelpTooNeedToSeePokedexes
# 90 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth
# 91 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest
# 92 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTookBothPokedexUnits
# 93 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 94 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth
# 95 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth
# 96 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast
# 97 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest
# 98 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject 9
# 99 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject 10
# 100 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 101 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNowTheseUnitsCanRecordMoreData
# 102 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 103 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject 9
# 104 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject 10
# 105 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 106 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 107 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 108 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 109 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 110 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 111 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_PlayersPokedexWasUpgraded
# 112 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 113 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 114 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special EnableNationalPokedex
# 115 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMustReallyWorkToFillPokedex
# 116 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllCompleteThePokedex
# 117 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 118 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 119 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 120 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 121 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 122 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 123 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject 8
# 124 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 125 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8
# 126 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth::
# 131 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm 8, 5, 10
# 132 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject 8
# 133 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 134 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 135 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 136 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest::
# 141 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm 8, 6, 10
# 142 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject 8
# 143 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 144 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 145 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 146 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 147 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth::
# 152 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm 8, 6, 10
# 153 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject 8
# 154 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 155 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 156 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 157 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth::
# 162 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 163 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest::
# 168 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 169 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth::
# 174 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 175 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth::
# 180 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth
# 181 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 182 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 183 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 4
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast::
# 188 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 189 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 190 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 4
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest::
# 195 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 196 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 200 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk:
# 201 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 202 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 203 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 204 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 205 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 206 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 209 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth:
# 210 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 211 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 212 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 213 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 214 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 215 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_ChooseStarterScene::
# 219 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 220 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 221 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 222 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject 4
# 223 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm 4, 6, 3
# 224 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 225 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 226 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 227 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 228 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterUp
# 229 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 230 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 231 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	savebgm MUS_DUMMY
# 232 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 233 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting
# 234 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 235 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 60
# 236 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne
# 237 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 238 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 239 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalReact
# 240 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 241 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe
# 242 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBePatientRival
# 243 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 244 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


# 248 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakEnter:
# 249 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 250 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 251 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 252 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 253 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 254 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 255 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 258 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerEnter:
# 259 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 260 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 261 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 262 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 263 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 264 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 265 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 266 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 267 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 270 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalReact:
# 271 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 272 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 273 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_LeaveStarterSceneTrigger::
# 277 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 278 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 279 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 280 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet
# 281 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 282 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp
# 283 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 284 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


# 288 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp:
# 289 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 290 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerLeft::
# 294 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 295 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 1
# 296 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerMid::
# 301 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 302 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 2
# 303 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerRight::
# 308 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 309 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 3
# 310 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattle::
# 315 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 316 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterDown
# 317 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 319 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 320 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons
# 321 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 322 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 323 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 324 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 0, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander
# 325 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur
# 326 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle::
# 335 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft
# 336 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid
# 337 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft::
# 342 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft
# 343 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 344 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid::
# 349 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid
# 350 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 351 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight::
# 356 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight
# 357 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 358 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle::
# 363 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_RIVAL_OAKS_LAB_SQUIRTLE, PalletTown_ProfessorOaksLab_Text_RivalDefeat
# 364 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
	end


# 368 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft:
# 369 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 370 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 371 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 372 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 373 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 374 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 375 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 378 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid:
# 379 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
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

# 387 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight:
# 388 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 389 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 390 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 391 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 392 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander::
# 396 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft
# 397 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid
# 398 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft::
# 403 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft
# 404 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 405 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid::
# 410 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid
# 411 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 412 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight::
# 417 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight
# 418 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 419 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander::
# 424 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_RIVAL_OAKS_LAB_CHARMANDER, PalletTown_ProfessorOaksLab_Text_RivalDefeat
# 425 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
	end


# 429 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft:
# 430 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 431 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 432 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 433 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 434 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 435 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 436 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 437 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 440 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid:
# 441 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 442 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 443 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 444 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 445 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 446 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 447 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 450 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight:
# 451 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 452 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 453 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 454 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 455 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 456 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur::
# 460 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft
# 461 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid
# 462 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft::
# 467 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft
# 468 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 469 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid::
# 474 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid
# 475 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 476 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight::
# 481 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight
# 482 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 483 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur::
# 488 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_RIVAL_OAKS_LAB_BULBASAUR, PalletTown_ProfessorOaksLab_Text_RivalDefeat
# 489 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
	end


# 493 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft:
# 494 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
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
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid:
# 503 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 504 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 505 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 506 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 507 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 510 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight:
# 511 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 512 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 513 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 514 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle::
# 518 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special HealPlayerParty
# 519 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon
# 520 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 521 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 522 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft
# 523 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid
# 524 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight
# 525 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject 8
# 526 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_EXIT
# 527 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 528 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
# 529 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
# 530 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft::
# 535 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft
# 536 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 537 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 8
	return


PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid::
# 542 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid
# 543 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 544 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 8
	return


PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight::
# 549 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight
# 550 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight
# 551 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 8
	return


# 555 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft:
# 556 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 557 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 558 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 559 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 560 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 561 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 562 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 563 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 566 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight:
# 567 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 568 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 569 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 570 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 571 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 572 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 573 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 574 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 577 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid:
# 578 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 579 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 580 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 581 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 582 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 583 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 584 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 585 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 586 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 589 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle:
# 590 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 591 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 592 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 593 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 594 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 595 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 598 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight:
# 599 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 600 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 601 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 602 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 603 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 604 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_Rival::
# 608 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 609 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 610 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter
# 611 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter
# 612 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround
# 613 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter::
# 618 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer
# 619 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter::
# 624 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher
# 625 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ProfOak::
# 630 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 631 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 632 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_TEMP_2, PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex
# 633 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 634 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 635 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene
# 636 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 637 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls
# 638 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene
# 639 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4, PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow
# 640 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon
# 641 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose
# 642 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex::
# 647 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 648 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon::
# 653 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon
# 654 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow::
# 659 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow
# 660 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene::
# 665 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe
# 666 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 667 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel
# 668 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 669 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 670 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeitem ITEM_OAKS_PARCEL
# 671 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered
# 672 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 673 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGramps
# 674 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 675 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth
# 676 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth
# 677 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 678 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 679 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 680 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor
# 681 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 682 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 683 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_PIN
# 684 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 685 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 686 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_Delay48
# 687 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 688 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth
# 689 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast
# 690 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest
# 691 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth
# 692 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo
# 693 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 694 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth
# 695 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth
# 696 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast
# 697 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest
# 698 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk
# 699 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 700 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 701 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou
# 702 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 703 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 704 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 705 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject 9
# 706 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 707 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject 10
# 708 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 25
# 709 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 710 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 711 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 712 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 713 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 714 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 715 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak
# 716 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 717 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 718 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 719 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 720 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 721 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese
# 722 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 723 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakExplainCatching
# 724 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream
# 725 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps
# 726 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth
# 727 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth
# 728 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 729 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 730 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap
# 731 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 732 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 733 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 734 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 735 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 736 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 737 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject 8
# 738 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 739 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 740 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 741 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 742 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 743 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 744 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth::
# 749 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 750 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth::
# 755 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth
# 756 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast::
# 761 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 762 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast
# 763 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest::
# 768 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 769 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 773 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast:
# 774 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 775 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 776 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 777 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 780 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver:
# 781 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 782 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 783 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 786 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth:
# 787 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 788 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 789 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth::
# 793 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 794 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth::
# 799 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth
# 800 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 801 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 802 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 4
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast::
# 807 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 808 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 809 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 4
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest::
# 814 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 815 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 819 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast:
# 820 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 821 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 822 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 823 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 826 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk:
# 827 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 828 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 829 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 830 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 833 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk:
# 834 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 835 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 836 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 837 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 838 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 841 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth:
# 842 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 843 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 844 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 845 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 846 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 847 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls::
# 851 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 852 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 853 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 854 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 855 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 856 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 857 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_0x8009, 1, PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls
# 858 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex
	end


PalletTown_ProfessorOaksLab_EventScript_RatePokedex::
# 863 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 864 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SAW_DEX_COMPLETION, PalletTown_ProfessorOaksLab_EventScript_DexCompleted
# 865 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_DexCompleted::
# 870 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 871 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 872 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PokedexRating_Text_Wroooaaarrr
# 873 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 874 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth
# 875 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth
# 876 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast
# 877 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest
# 878 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 879 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 880 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 881 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 70
# 882 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 883 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_TEMP_2
# 884 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth::
# 889 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth
# 890 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth::
# 895 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth
# 896 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast::
# 901 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakExcitedEast
# 902 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest::
# 907 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakExcitedWest
# 908 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 912 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth:
# 913 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 914 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 915 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 916 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 917 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 918 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 919 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 922 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth:
# 923 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 924 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 925 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 926 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 927 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 928 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 929 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 932 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedEast:
# 933 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 934 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 935 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 936 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 937 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 938 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 939 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 942 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedWest:
# 943 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 944 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 945 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 946 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 947 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 948 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 949 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene::
# 953 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 954 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 955 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_lt VAR_0x8009, 60, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 956 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 957 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer
# 958 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
	end


PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene::
# 963 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls::
# 968 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SKIP_22_RIVAL_CHECK, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 969 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls
# 970 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	checkitem ITEM_POKE_BALL
# 971 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls
# 972 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
	end


PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls::
# 977 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ROUTE22, 2, PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls
# 978 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
	end


PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls::
# 983 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex
# 984 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 985 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
# 986 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait::
# 991 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait
# 992 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls::
# 997 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime
# 998 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth::
# 1003 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm 8, 5, 10
# 1004 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject 8
# 1005 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 1006 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 1007 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest::
# 1012 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm 8, 6, 10
# 1013 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject 8
# 1014 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 1015 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 1016 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 1017 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth::
# 1022 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm 8, 6, 10
# 1023 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject 8
# 1024 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 1025 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 1026 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth::
# 1031 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 1032 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1033 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1034 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 1035 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest::
# 1040 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 1041 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1042 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1043 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1044 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 1045 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast::
# 1050 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 1051 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1052 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1053 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1054 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 1055 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth::
# 1060 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, Common_Movement_FacePlayer
# 1061 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1062 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth::
# 1067 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterUp
# 1068 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1069 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest::
# 1074 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, Common_Movement_FacePlayer
# 1075 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1076 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth::
# 1081 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 1082 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1083 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_RivalExit::
# 1088 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1089 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth::
# 1094 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1095 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 1099 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest:
# 1100 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 1101 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1102 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1105 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth:
# 1106 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1107 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1108 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1109 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1110 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1111 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1112 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 1113 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 1114 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1117 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalEnter:
# 1118 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1119 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1120 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1121 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1122 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1123 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1124 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1127 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExit:
# 1128 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1129 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1130 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1131 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1132 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1133 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1134 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 1138 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1139 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1140 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 0
# 1141 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_BULBASAUR
# 1142 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHARMANDER
# 1143 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_4, 7
# 1144 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1145 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1146 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1147 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice::
# 1152 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1153 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1154 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	showmonpic VAR_TEMP_2, 10, 3
# 1155 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 0, PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur
# 1156 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 1, PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle
# 1157 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander
	end


PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur::
# 1162 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur, MSGBOX_YESNO
# 1163 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1164 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
	end


PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle::
# 1169 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle, MSGBOX_YESNO
# 1170 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1171 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
	end


PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander::
# 1176 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander, MSGBOX_YESNO
# 1177 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1178 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
	end


PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter::
# 1183 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1184 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ChoseStarter::
# 1189 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1190 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1191 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 1192 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1193 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 1194 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	givemon VAR_TEMP_2, 5
# 1195 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_STARTER_MON, VAR_TEMP_1
# 1196 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_2
# 1197 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 1198 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1199 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 1200 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1201 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox gText_GiveNicknameToThisMon, MSGBOX_YESNO
# 1202 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_GiveNicknameToStarter
# 1203 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
	end


EventScript_GiveNicknameToStarter::
# 1210 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1211 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 1212 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
	end


PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter::
# 1217 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 1218 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 0, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander
# 1219 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 1, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur
# 1220 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander::
# 1225 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander
# 1226 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1227 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
	end


PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle::
# 1232 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle
# 1233 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1234 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
	end


PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur::
# 1239 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur
# 1240 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1241 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
	end


PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter::
# 1246 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen
# 1247 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject VAR_TEMP_4
# 1248 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_3
# 1249 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak
# 1250 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1251 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 1252 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1253 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 1254 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_OPENED_START_MENU, PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene
# 1255 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene::
# 1260 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
	return


# 1264 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander:
# 1265 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1266 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1267 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1268 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1269 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1270 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1271 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1272 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1273 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1276 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle:
# 1277 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1278 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1279 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1280 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1281 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1282 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1283 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1286 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur:
# 1287 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1288 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1289 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1290 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1291 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1292 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 1296 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1297 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1298 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 1
# 1299 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SQUIRTLE
# 1300 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_BULBASAUR
# 1301 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_4, 5
# 1302 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1303 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1304 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1305 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 1310 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1311 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1312 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 2
# 1313 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHARMANDER
# 1314 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SQUIRTLE
# 1315 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_4, 6
# 1316 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1317 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1319 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_LastPokeBall::
# 1324 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OaksLastMon
# 1325 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide1::
# 1330 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1331 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1332 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear
# 1333 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1334 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear::
# 1339 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow
# 1340 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide2::
# 1345 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1346 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1347 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear
# 1348 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1349 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear::
# 1354 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons
# 1355 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide3::
# 1360 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1361 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1362 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons
# 1363 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Pokedex::
# 1368 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia, MSGBOX_NPC
	end


PalletTown_ProfessorOaksLab_EventScript_Computer::
# 1373 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_EmailMessage, MSGBOX_SIGN
	end


PalletTown_ProfessorOaksLab_EventScript_LeftSign::
# 1378 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu, MSGBOX_SIGN
	end


PalletTown_ProfessorOaksLab_EventScript_RightSign::
# 1383 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 1384 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RightSignAlt
# 1385 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu
# 1386 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


PalletTown_ProfessorOaksLab_EventScript_RightSignAlt::
# 1391 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints
# 1392 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround::
# 1396 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: What, it's only {PLAYER}?\n"
	.string "Gramps isn't around.$"

PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting::
# 1401 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Gramps!\n"
	.string "I'm fed up with waiting!$"

PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe::
# 1406 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Hey! Gramps! No fair!\n"
	.string "What about me?$"

PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer::
# 1411 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Heh, I don't need to be\n"
	.string "greedy like you. I'm mature!\p"
	.string "Go ahead and choose, {PLAYER}!$"

PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen::
# 1417 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: I'll take this one, then!$"

PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak::
# 1421 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL} received the {STR_VAR_1}\n"
	.string "from PROF. OAK!$"

PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher::
# 1426 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: My POKéMON looks a lot\n"
	.string "tougher than yours.$"

PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons::
# 1431 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Wait, {PLAYER}!\n"
	.string "Let's check out our POKéMON!\p"
	.string "Come on, I'll take you on!$"

PalletTown_ProfessorOaksLab_Text_RivalDefeat::
# 1437 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "WHAT?\n"
	.string "Unbelievable!\l"
	.string "I picked the wrong POKéMON!$"

PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon::
# 1443 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Okay! I'll make my\n"
	.string "POKéMON battle to toughen it up!\p"
	.string "{PLAYER}! Gramps!\n"
	.string "Smell you later!$"

PalletTown_ProfessorOaksLab_Text_RivalGramps::
# 1450 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Gramps!$"

PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor::
# 1454 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: I almost forgot!\n"
	.string "What did you call me for?$"

PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps::
# 1459 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: All right, Gramps!\n"
	.string "Leave it all to me!$"

PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap::
# 1464 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{PLAYER}, I hate to say it, but you\n"
	.string "won't be necessary for this.\p"
	.string "I know! I'll borrow a TOWN MAP\n"
	.string "from my sis!\p"
	.string "I'll tell her not to lend you one,\n"
	.string "{PLAYER}! Hahaha!\p"
	.string "Don't bother coming around to\n"
	.string "my place after this!$"

PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne::
# 1475 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
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
# 1493 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: Be patient, {RIVAL}.\n"
	.string "You can have one, too!$"

PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose::
# 1498 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: Now, {PLAYER}.\p"
	.string "Inside those three POKé BALLS are\n"
	.string "POKéMON.\p"
	.string "Which one will you choose for\n"
	.string "yourself?$"

PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet::
# 1506 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: Hey!\n"
	.string "Don't go away yet!$"

PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander::
# 1511 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Ah! CHARMANDER is your choice.\n"
	.string "You should raise it patiently.\p"
	.string "So, {PLAYER}, you're claiming the\n"
	.string "FIRE POKéMON CHARMANDER?$"

PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle::
# 1518 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Hm! SQUIRTLE is your choice.\n"
	.string "It's one worth raising.\p"
	.string "So, {PLAYER}, you've decided on the\n"
	.string "WATER POKéMON SQUIRTLE?$"

PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur::
# 1525 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "I see! BULBASAUR is your choice.\n"
	.string "It's very easy to raise.\p"
	.string "So, {PLAYER}, you want to go with\n"
	.string "the GRASS POKéMON BULBASAUR?$"

PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic::
# 1532 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "This POKéMON is really quite\n"
	.string "energetic!$"

PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak::
# 1537 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
	.string "from PROF. OAK!$"

PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon::
# 1542 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: If a wild POKéMON appears,\n"
	.string "your POKéMON can battle it.\p"
	.string "With it at your side, you should be\n"
	.string "able to reach the next town.$"

PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow::
# 1549 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: {PLAYER}, raise your young\n"
	.string "POKéMON by making it battle.\p"
	.string "It has to battle for it to grow.$"

PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe::
# 1555 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: Oh, {PLAYER}!\n"
	.string "How is my old POKéMON?\p"
	.string "Well, it seems to be growing more\n"
	.string "attached to you.\p"
	.string "You must be talented as a POKéMON\n"
	.string "TRAINER.\p"
	.string "What's that?\n"
	.string "You have something for me?$"

PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel::
# 1566 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{PLAYER} delivered OAK'S PARCEL.$"

PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered::
# 1570 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Ah! \n"
	.string "It's the custom POKé BALL!\p"
	.string "I had it on order.\n"
	.string "Thank you!$"

PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo::
# 1577 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: Oh, right!\n"
	.string "I have a request for you two.$"

PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk::
# 1582 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "On the desk there is my invention,\n"
	.string "the POKéDEX!\p"
	.string "It automatically records data on\n"
	.string "POKéMON you've seen or caught.\p"
	.string "It's a high-tech encyclopedia!$"

PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou::
# 1590 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: {PLAYER} and {RIVAL}.\n"
	.string "Take these with you.$"

PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak::
# 1595 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{PLAYER} received the POKéDEX\n"
	.string "from PROF. OAK.$"

PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese::
# 1600 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: You can't get detailed data\n"
	.string "on POKéMON by just seeing them.\p"
	.string "You must catch them to obtain\n"
	.string "complete data.\p"
	.string "So, here are some tools for\n"
	.string "catching wild POKéMON.$"

PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls::
# 1609 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{PLAYER} received five POKé BALLS.$"

PalletTown_ProfessorOaksLab_Text_OakExplainCatching::
# 1613 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "When a wild POKéMON appears,\n"
	.string "it's fair game.\p"
	.string "Just throw a POKé BALL at it and\n"
	.string "try to catch it!\p"
	.string "This won't always work, however.\p"
	.string "A healthy POKéMON can escape.\n"
	.string "You have to be lucky!$"

PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream::
# 1623 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
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
# 1636 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "POKéMON around the world wait for\n"
	.string "you, {PLAYER}!$"

PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex::
# 1641 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
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
# 1654 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: Come see me sometime.\p"
	.string "After all, I want to know how your\n"
	.string "POKéDEX is coming along.$"

PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia::
# 1660 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "It's like an encyclopedia, but the\n"
	.string "pages are blank.$"

PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls::
# 1665 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Those are POKé BALLS.\n"
	.string "They contain POKéMON!$"

PalletTown_ProfessorOaksLab_Text_OaksLastMon::
# 1670 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "That's PROF. OAK's last POKéMON.$"

PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu::
# 1674 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Press START to open the MENU!$"

PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu::
# 1678 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "The SAVE option is on the MENU.\n"
	.string "Use it regularly.$"

PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints::
# 1683 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "All POKéMON types have strong and\n"
	.string "weak points against others.$"

PalletTown_ProfessorOaksLab_Text_EmailMessage::
# 1688 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
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
# 1703 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "I study POKéMON as PROF. OAK's\n"
	.string "AIDE.$"

PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons::
# 1708 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
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
# 1721 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "PROF. OAK is going to have his own\n"
	.string "radio show soon.\p"
	.string "The program will be called PROF.\n"
	.string "OAK's POKéMON SEMINAR.$"

PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons::
# 1728 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "PROF. OAK may not look like much,\n"
	.string "but he's the authority on POKéMON.\p"
	.string "Many POKéMON TRAINERS hold him in\n"
	.string "high regard.$"

PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer::
# 1735 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Ah, now this is excellent!\p"
	.string "{PLAYER}, I have another important\n"
	.string "favor to ask of you.\p"
	.string "I need you to listen closely.$"

PalletTown_ProfessorOaksLab_Text_OakSightingsOfRareMons::
# 1742 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Recently, there have been sightings\n"
	.string "of many rare POKéMON species.\p"
	.string "I'm talking about POKéMON that\n"
	.string "have never been seen in KANTO.\p"
	.string "I would love to go see things for\n"
	.string "myself, but I'm much too old.\p"
	.string "Since I can't do it, {PLAYER}, I'd\n"
	.string "like you to go in my place.$"

PalletTown_ProfessorOaksLab_Text_RivalJustLetMeHandleEverything::
# 1753 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Hey, I heard that!\p"
	.string "Gramps, what's with favoring\n"
	.string "{PLAYER} over me all the time?\p"
	.string "I went and collected more POKéMON,\n"
	.string "and faster, too.\p"
	.string "You should just let me handle\n"
	.string "everything.$"

PalletTown_ProfessorOaksLab_Text_OakNeedYourHelpTooNeedToSeePokedexes::
# 1763 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: I know, I know.\n"
	.string "Of course I need your help, too.\p"
	.string "Now, I need to see both your\n"
	.string "POKéDEXES.$"

PalletTown_ProfessorOaksLab_Text_OakTookBothPokedexUnits::
# 1770 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "PROF. OAK took both POKéDEX\n"
	.string "units.$"

PalletTown_ProfessorOaksLab_Text_OakNowTheseUnitsCanRecordMoreData::
# 1775 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "… … …  … … …\p"
	.string "… … …  … … …\p"
	.string "…And that's done!\p"
	.string "Now these units can record data on\n"
	.string "a lot more POKéMON.$"

PalletTown_ProfessorOaksLab_Text_PlayersPokedexWasUpgraded::
# 1783 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{PLAYER}'s POKéDEX was upgraded!$"

PalletTown_ProfessorOaksLab_Text_OakMustReallyWorkToFillPokedex::
# 1787 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Now, {PLAYER} and {RIVAL}!\p"
	.string "This time, you really must work\n"
	.string "towards filling your POKéDEXES.\p"
	.string "I urge you to make them the best\n"
	.string "and the most complete of all time!\p"
	.string "Truly, this is a monumentally great\n"
	.string "undertaking in POKéMON history!$"

PalletTown_ProfessorOaksLab_Text_RivalIllCompleteThePokedex::
# 1797 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Gramps, calm down.\n"
	.string "Don't get so excited.\p"
	.string "I'll get the POKéDEX completed,\n"
	.string "don't you worry about a thing.\p"
	.string "I think I'll try looking around\n"
	.string "ONE ISLAND first…\p"
	.string "Anyways, I'm outta here!$"
