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
# 365 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_OAKS_LAB_SQUIRTLE, PalletTown_ProfessorOaksLab_Text_RivalDefeat
# 366 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
	end


# 370 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft:
# 371 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 372 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 373 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 374 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 375 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 376 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 377 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 380 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid:
# 381 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 382 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 383 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 384 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 385 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 386 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 389 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight:
# 390 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 391 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 392 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 393 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 394 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander::
# 398 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft
# 399 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid
# 400 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft::
# 405 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft
# 406 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 407 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid::
# 412 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid
# 413 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 414 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight::
# 419 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight
# 420 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 421 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander::
# 428 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_OAKS_LAB_CHARMANDER, PalletTown_ProfessorOaksLab_Text_RivalDefeat
# 429 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
	end


# 433 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft:
# 434 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 435 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 436 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 437 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 438 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 439 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 440 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 441 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 444 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid:
# 445 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 446 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 447 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 448 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 449 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 450 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 451 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 454 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight:
# 455 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 456 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 457 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 458 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 459 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 460 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur::
# 464 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft
# 465 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid
# 466 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft::
# 471 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft
# 472 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 473 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid::
# 478 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid
# 479 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 480 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight::
# 485 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight
# 486 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 487 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur::
# 494 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_OAKS_LAB_BULBASAUR, PalletTown_ProfessorOaksLab_Text_RivalDefeat
# 495 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
	end


# 499 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft:
# 500 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 501 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 502 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 503 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 504 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 505 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 508 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid:
# 509 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 510 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 511 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 512 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 513 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 516 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight:
# 517 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 518 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 519 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 520 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle::
# 524 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special HealPlayerParty
# 525 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon
# 526 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 527 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 528 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft
# 529 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid
# 530 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight
# 531 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject 8
# 532 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_EXIT
# 533 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 534 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
# 535 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
# 536 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft::
# 541 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft
# 542 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 543 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 8
	return


PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid::
# 548 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid
# 549 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 550 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 8
	return


PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight::
# 555 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight
# 556 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight
# 557 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 8
	return


# 561 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft:
# 562 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 563 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 564 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 565 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 566 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 567 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 568 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 569 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 572 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight:
# 573 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 574 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 575 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 576 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 577 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 578 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 579 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 580 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 583 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid:
# 584 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 585 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 586 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 587 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 588 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 589 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 590 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 591 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 592 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 595 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle:
# 596 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 597 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 598 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 599 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 600 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 601 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 604 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight:
# 605 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 606 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 607 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 608 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 609 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 610 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_Rival::
# 614 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 615 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 616 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter
# 617 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter
# 618 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround
# 619 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter::
# 624 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer
# 625 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter::
# 630 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher
# 631 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ProfOak::
# 636 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 637 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 638 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_TEMP_2, PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex
# 639 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 640 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 641 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene
# 642 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 643 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls
# 644 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene
# 645 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4, PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow
# 646 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon
# 647 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose
# 648 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex::
# 653 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 654 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon::
# 659 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon
# 660 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow::
# 665 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow
# 666 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene::
# 671 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe
# 672 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 673 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel
# 674 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 675 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 676 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeitem ITEM_OAKS_PARCEL
# 677 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered
# 678 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 679 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGramps
# 680 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 681 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth
# 682 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth
# 683 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 684 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 685 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 686 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor
# 687 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 688 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 689 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_PIN
# 690 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 691 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 692 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_Delay48
# 693 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 694 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth
# 695 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast
# 696 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest
# 697 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth
# 698 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo
# 699 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 700 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth
# 701 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth
# 702 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast
# 703 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest
# 704 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk
# 705 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 706 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 707 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou
# 708 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 709 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 710 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 711 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject 9
# 712 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 713 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject 10
# 714 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 25
# 715 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 716 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 717 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 718 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 719 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 720 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 721 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak
# 722 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 723 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 724 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 725 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 726 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 727 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese
# 728 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 729 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakExplainCatching
# 730 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream
# 731 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps
# 732 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth
# 733 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth
# 734 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 735 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 736 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap
# 737 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 738 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 739 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 740 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 741 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 742 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 743 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject 8
# 744 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 745 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 746 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 747 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 748 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 749 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 750 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth::
# 755 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 756 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth::
# 761 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth
# 762 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast::
# 767 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 768 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast
# 769 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest::
# 774 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 775 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 779 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast:
# 780 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 781 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 782 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 783 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 786 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver:
# 787 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 788 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 789 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 792 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth:
# 793 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 794 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 795 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth::
# 799 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 800 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth::
# 805 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth
# 806 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 807 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 808 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 4
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast::
# 813 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 814 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 815 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 4
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest::
# 820 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 821 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 825 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast:
# 826 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 827 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 828 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 829 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 832 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk:
# 833 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 834 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 835 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 836 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 839 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk:
# 840 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 841 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 842 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 843 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 844 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 847 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth:
# 848 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 849 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 850 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 851 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 852 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 853 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls::
# 857 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 858 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 859 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 860 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 861 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 862 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 863 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_0x8009, 1, PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls
# 864 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex
	end


PalletTown_ProfessorOaksLab_EventScript_RatePokedex::
# 869 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 870 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SAW_DEX_COMPLETION, PalletTown_ProfessorOaksLab_EventScript_DexCompleted
# 871 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_DexCompleted::
# 876 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 877 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 878 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PokedexRating_Text_Wroooaaarrr
# 879 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 880 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth
# 881 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth
# 882 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast
# 883 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest
# 884 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 885 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 886 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 887 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 70
# 888 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 889 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_TEMP_2
# 890 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth::
# 895 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth
# 896 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth::
# 901 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth
# 902 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast::
# 907 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakExcitedEast
# 908 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest::
# 913 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, PalletTown_ProfessorOaksLab_Movement_OakExcitedWest
# 914 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 918 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth:
# 919 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 920 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 921 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 922 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 923 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 924 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 925 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 928 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth:
# 929 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 930 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 931 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 932 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 933 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 934 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 935 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 938 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedEast:
# 939 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 940 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 941 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 942 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 943 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 944 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 945 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 948 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedWest:
# 949 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 950 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 951 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 952 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 953 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 954 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 955 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene::
# 959 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 960 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 961 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_lt VAR_0x8009, 60, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 962 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 963 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer
# 964 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
	end


PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene::
# 969 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls::
# 974 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SKIP_22_RIVAL_CHECK, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 975 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls
# 976 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	checkitem ITEM_POKE_BALL
# 977 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls
# 978 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
	end


PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls::
# 983 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ROUTE22, 2, PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls
# 984 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
	end


PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls::
# 989 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex
# 990 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 991 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
# 992 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait::
# 997 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait
# 998 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls::
# 1003 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime
# 1004 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth::
# 1009 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm 8, 5, 10
# 1010 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject 8
# 1011 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 1012 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 1013 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest::
# 1018 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm 8, 6, 10
# 1019 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject 8
# 1020 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 1021 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 1022 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 1023 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth::
# 1028 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm 8, 6, 10
# 1029 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject 8
# 1030 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 1031 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 1032 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth::
# 1037 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 1038 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1039 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1040 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 1041 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest::
# 1046 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 1047 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1048 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1049 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1050 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 1051 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast::
# 1056 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 1057 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1058 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1059 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1060 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 1061 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth::
# 1066 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, Common_Movement_FacePlayer
# 1067 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1068 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth::
# 1073 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterUp
# 1074 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1075 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest::
# 1080 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, Common_Movement_FacePlayer
# 1081 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1082 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth::
# 1087 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 1088 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1089 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_RivalExit::
# 1094 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1095 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth::
# 1100 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1101 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 1105 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest:
# 1106 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 1107 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1108 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1111 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth:
# 1112 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1113 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1114 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1115 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1116 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1117 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1118 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 1119 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 1120 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1123 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalEnter:
# 1124 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1125 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1126 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1127 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1128 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1129 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1130 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1133 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExit:
# 1134 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1135 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1136 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1137 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1138 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1139 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1140 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 1144 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1145 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1146 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 0
# 1147 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_BULBASAUR
# 1148 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHARMANDER
# 1149 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_4, 7
# 1150 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1151 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1152 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1153 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice::
# 1158 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 1159 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1160 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	showmonpic VAR_TEMP_2, 10, 3
# 1161 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 0, PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur
# 1162 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 1, PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle
# 1163 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander
	end


PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur::
# 1168 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur, MSGBOX_YESNO
# 1169 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1170 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
	end


PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle::
# 1175 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle, MSGBOX_YESNO
# 1176 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1177 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
	end


PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander::
# 1182 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander, MSGBOX_YESNO
# 1183 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1184 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
	end


PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter::
# 1189 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1190 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ChoseStarter::
# 1195 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1196 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1197 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 1198 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1199 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 1200 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	givemon VAR_TEMP_2, 5
# 1201 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_STARTER_MON, VAR_TEMP_1
# 1202 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_2
# 1203 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 1204 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1205 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 1206 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1207 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox gText_GiveNicknameToThisMon, MSGBOX_YESNO
# 1208 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_GiveNicknameToStarter
# 1209 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
	end


EventScript_GiveNicknameToStarter::
# 1214 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 1215 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 1216 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
	end


PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter::
# 1221 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 1222 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 0, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander
# 1223 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 1, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur
# 1224 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander::
# 1229 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander
# 1230 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1231 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
	end


PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle::
# 1236 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle
# 1237 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1238 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
	end


PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur::
# 1243 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement 8, PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur
# 1244 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1245 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
	end


PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter::
# 1250 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen
# 1251 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject VAR_TEMP_4
# 1252 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_3
# 1253 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak
# 1254 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1255 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 1256 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1257 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 1258 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_OPENED_START_MENU, PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene
# 1259 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene::
# 1264 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
	return


# 1268 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander:
# 1269 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1270 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1271 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1272 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1273 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1274 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1275 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1276 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1277 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1280 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle:
# 1281 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1282 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1283 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1284 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1285 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1286 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1287 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1290 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur:
# 1291 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1292 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1293 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1294 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1295 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1296 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 1300 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1301 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1302 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 1
# 1303 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SQUIRTLE
# 1304 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_BULBASAUR
# 1305 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_4, 5
# 1306 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1307 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1308 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1309 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 1314 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1315 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1316 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 2
# 1317 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHARMANDER
# 1318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SQUIRTLE
# 1319 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_4, 6
# 1320 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1321 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1322 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1323 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_LastPokeBall::
# 1328 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OaksLastMon
# 1329 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide1::
# 1334 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1335 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1336 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear
# 1337 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1338 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear::
# 1343 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow
# 1344 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide2::
# 1349 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1350 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1351 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear
# 1352 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1353 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear::
# 1358 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons
# 1359 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide3::
# 1364 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1365 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1366 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons
# 1367 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Pokedex::
# 1372 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia, MSGBOX_NPC
	end


PalletTown_ProfessorOaksLab_EventScript_Computer::
# 1377 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_EmailMessage, MSGBOX_SIGN
	end


PalletTown_ProfessorOaksLab_EventScript_LeftSign::
# 1382 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu, MSGBOX_SIGN
	end


PalletTown_ProfessorOaksLab_EventScript_RightSign::
# 1387 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 1388 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RightSignAlt
# 1389 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu
# 1390 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


PalletTown_ProfessorOaksLab_EventScript_RightSignAlt::
# 1395 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints
# 1396 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


PokedexRating_EventScript_RateInPerson::
# 1967 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_OAK_SAW_DEX_COMPLETION, PokedexRating_EventScript_DexCompleteIntro
# 1968 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_unset FLAG_OAK_SAW_DEX_COMPLETION, PokedexRating_EventScript_NormalIntro
# 1969 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_Rate
	return


PokedexRating_EventScript_DexCompleteIntro::
# 1974 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_LoveSeeingYourPokedex
	return


PokedexRating_EventScript_NormalIntro::
# 1979 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_HowIsPokedexComingAlong
	return


PokedexRating_EventScript_ShowRatingMsg::
# 1984 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1985 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special ShowPokedexRatingMessage
# 1986 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1987 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, PokedexRating_EventScript_NormalFanfare
# 1988 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, PokedexRating_EventScript_DexCompleteFanfare
# 1989 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1990 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitbuttonpress
	return


PokedexRating_EventScript_NormalFanfare::
# 1995 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_RG_DEX_RATING
	return


PokedexRating_EventScript_DexCompleteFanfare::
# 2000 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_EVOLVED
	return


PokedexRating_EventScript_Rate::
# 2005 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 2006 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 2007 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 2008 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 2009 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x800A, VAR_RESULT
# 2010 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 2011 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 2012 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_SeenXOwnedY
# 2013 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_ShowRatingMsg
# 2014 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_0x800A, 0, Common_EventScript_NopReturn
# 2015 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 1
# 2016 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 2017 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 2018 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 2019 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 2020 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 2021 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_NationalDexSeenXOwnedY
# 2022 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	specialvar VAR_RESULT, HasAllMons
# 2023 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PokedexRating_EventScript_DexIncomplete
# 2024 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PokedexRating_EventScript_DexComplete
	end


PokedexRating_EventScript_DexIncomplete::
# 2029 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_LookForwardToFilledNationalDex
# 2030 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto Common_EventScript_NopReturn
	end


PokedexRating_EventScript_DexComplete::
# 2035 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_OAK_SAW_DEX_COMPLETION
# 2036 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_YouveCompletedDex
# 2037 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto Common_EventScript_NopReturn
	end


PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround::
# 1400 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: What, it's only {PLAYER}?\n"
	.string "Gramps isn't around.$"

PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting::
# 1405 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Gramps!\n"
	.string "I'm fed up with waiting!$"

PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe::
# 1410 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Hey! Gramps! No fair!\n"
	.string "What about me?$"

PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer::
# 1415 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Heh, I don't need to be\n"
	.string "greedy like you. I'm mature!\p"
	.string "Go ahead and choose, {PLAYER}!$"

PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen::
# 1421 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: I'll take this one, then!$"

PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak::
# 1425 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL} received the {STR_VAR_1}\n"
	.string "from PROF. OAK!$"

PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher::
# 1430 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: My POKéMON looks a lot\n"
	.string "tougher than yours.$"

PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons::
# 1435 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Wait, {PLAYER}!\n"
	.string "Let's check out our POKéMON!\p"
	.string "Come on, I'll take you on!$"

PalletTown_ProfessorOaksLab_Text_RivalDefeat::
# 1441 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "WHAT?\n"
	.string "Unbelievable!\l"
	.string "I picked the wrong POKéMON!$"

Text_RivalVictory::
# 1448 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Yeah!\n"
	.string "Am I great or what?$"

PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon::
# 1453 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Okay! I'll make my\n"
	.string "POKéMON battle to toughen it up!\p"
	.string "{PLAYER}! Gramps!\n"
	.string "Smell you later!$"

PalletTown_ProfessorOaksLab_Text_RivalGramps::
# 1460 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Gramps!$"

PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor::
# 1464 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: I almost forgot!\n"
	.string "What did you call me for?$"

PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps::
# 1469 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: All right, Gramps!\n"
	.string "Leave it all to me!$"

PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap::
# 1474 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{PLAYER}, I hate to say it, but you\n"
	.string "won't be necessary for this.\p"
	.string "I know! I'll borrow a TOWN MAP\n"
	.string "from my sis!\p"
	.string "I'll tell her not to lend you one,\n"
	.string "{PLAYER}! Hahaha!\p"
	.string "Don't bother coming around to\n"
	.string "my place after this!$"

PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne::
# 1485 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
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
# 1503 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: Be patient, {RIVAL}.\n"
	.string "You can have one, too!$"

PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose::
# 1508 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: Now, {PLAYER}.\p"
	.string "Inside those three POKé BALLS are\n"
	.string "POKéMON.\p"
	.string "Which one will you choose for\n"
	.string "yourself?$"

PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet::
# 1516 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: Hey!\n"
	.string "Don't go away yet!$"

PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander::
# 1521 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Ah! CHARMANDER is your choice.\n"
	.string "You should raise it patiently.\p"
	.string "So, {PLAYER}, you're claiming the\n"
	.string "FIRE POKéMON CHARMANDER?$"

PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle::
# 1528 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Hm! SQUIRTLE is your choice.\n"
	.string "It's one worth raising.\p"
	.string "So, {PLAYER}, you've decided on the\n"
	.string "WATER POKéMON SQUIRTLE?$"

PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur::
# 1535 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "I see! BULBASAUR is your choice.\n"
	.string "It's very easy to raise.\p"
	.string "So, {PLAYER}, you want to go with\n"
	.string "the GRASS POKéMON BULBASAUR?$"

PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic::
# 1542 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "This POKéMON is really quite\n"
	.string "energetic!$"

PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak::
# 1547 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
	.string "from PROF. OAK!$"

PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon::
# 1552 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: If a wild POKéMON appears,\n"
	.string "your POKéMON can battle it.\p"
	.string "With it at your side, you should be\n"
	.string "able to reach the next town.$"

PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow::
# 1559 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: {PLAYER}, raise your young\n"
	.string "POKéMON by making it battle.\p"
	.string "It has to battle for it to grow.$"

PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe::
# 1565 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: Oh, {PLAYER}!\n"
	.string "How is my old POKéMON?\p"
	.string "Well, it seems to be growing more\n"
	.string "attached to you.\p"
	.string "You must be talented as a POKéMON\n"
	.string "TRAINER.\p"
	.string "What's that?\n"
	.string "You have something for me?$"

PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel::
# 1576 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{PLAYER} delivered OAK'S PARCEL.$"

PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered::
# 1580 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Ah! \n"
	.string "It's the custom POKé BALL!\p"
	.string "I had it on order.\n"
	.string "Thank you!$"

PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo::
# 1587 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: Oh, right!\n"
	.string "I have a request for you two.$"

PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk::
# 1592 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "On the desk there is my invention,\n"
	.string "the POKéDEX!\p"
	.string "It automatically records data on\n"
	.string "POKéMON you've seen or caught.\p"
	.string "It's a high-tech encyclopedia!$"

PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou::
# 1600 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: {PLAYER} and {RIVAL}.\n"
	.string "Take these with you.$"

PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak::
# 1605 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{PLAYER} received the POKéDEX\n"
	.string "from PROF. OAK.$"

PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese::
# 1610 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: You can't get detailed data\n"
	.string "on POKéMON by just seeing them.\p"
	.string "You must catch them to obtain\n"
	.string "complete data.\p"
	.string "So, here are some tools for\n"
	.string "catching wild POKéMON.$"

PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls::
# 1619 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{PLAYER} received five POKé BALLS.$"

PalletTown_ProfessorOaksLab_Text_OakExplainCatching::
# 1623 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "When a wild POKéMON appears,\n"
	.string "it's fair game.\p"
	.string "Just throw a POKé BALL at it and\n"
	.string "try to catch it!\p"
	.string "This won't always work, however.\p"
	.string "A healthy POKéMON can escape.\n"
	.string "You have to be lucky!$"

PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream::
# 1633 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
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
# 1646 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "POKéMON around the world wait for\n"
	.string "you, {PLAYER}!$"

PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex::
# 1651 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
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
# 1664 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: Come see me sometime.\p"
	.string "After all, I want to know how your\n"
	.string "POKéDEX is coming along.$"

PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia::
# 1670 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "It's like an encyclopedia, but the\n"
	.string "pages are blank.$"

PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls::
# 1675 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Those are POKé BALLS.\n"
	.string "They contain POKéMON!$"

PalletTown_ProfessorOaksLab_Text_OaksLastMon::
# 1680 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "That's PROF. OAK's last POKéMON.$"

PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu::
# 1684 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Press START to open the MENU!$"

PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu::
# 1688 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "The SAVE option is on the MENU.\n"
	.string "Use it regularly.$"

PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints::
# 1693 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "All POKéMON types have strong and\n"
	.string "weak points against others.$"

PalletTown_ProfessorOaksLab_Text_EmailMessage::
# 1698 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
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
# 1713 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "I study POKéMON as PROF. OAK's\n"
	.string "AIDE.$"

PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons::
# 1718 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
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
# 1731 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "PROF. OAK is going to have his own\n"
	.string "radio show soon.\p"
	.string "The program will be called PROF.\n"
	.string "OAK's POKéMON SEMINAR.$"

PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons::
# 1738 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "PROF. OAK may not look like much,\n"
	.string "but he's the authority on POKéMON.\p"
	.string "Many POKéMON TRAINERS hold him in\n"
	.string "high regard.$"

PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer::
# 1745 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Ah, now this is excellent!\p"
	.string "{PLAYER}, I have another important\n"
	.string "favor to ask of you.\p"
	.string "I need you to listen closely.$"

PalletTown_ProfessorOaksLab_Text_OakSightingsOfRareMons::
# 1752 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Recently, there have been sightings\n"
	.string "of many rare POKéMON species.\p"
	.string "I'm talking about POKéMON that\n"
	.string "have never been seen in KANTO.\p"
	.string "I would love to go see things for\n"
	.string "myself, but I'm much too old.\p"
	.string "Since I can't do it, {PLAYER}, I'd\n"
	.string "like you to go in my place.$"

PalletTown_ProfessorOaksLab_Text_RivalJustLetMeHandleEverything::
# 1763 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Hey, I heard that!\p"
	.string "Gramps, what's with favoring\n"
	.string "{PLAYER} over me all the time?\p"
	.string "I went and collected more POKéMON,\n"
	.string "and faster, too.\p"
	.string "You should just let me handle\n"
	.string "everything.$"

PalletTown_ProfessorOaksLab_Text_OakNeedYourHelpTooNeedToSeePokedexes::
# 1773 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: I know, I know.\n"
	.string "Of course I need your help, too.\p"
	.string "Now, I need to see both your\n"
	.string "POKéDEXES.$"

PalletTown_ProfessorOaksLab_Text_OakTookBothPokedexUnits::
# 1780 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "PROF. OAK took both POKéDEX\n"
	.string "units.$"

PalletTown_ProfessorOaksLab_Text_OakNowTheseUnitsCanRecordMoreData::
# 1785 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "… … …  … … …\p"
	.string "… … …  … … …\p"
	.string "…And that's done!\p"
	.string "Now these units can record data on\n"
	.string "a lot more POKéMON.$"

PalletTown_ProfessorOaksLab_Text_PlayersPokedexWasUpgraded::
# 1793 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{PLAYER}'s POKéDEX was upgraded!$"

PalletTown_ProfessorOaksLab_Text_OakMustReallyWorkToFillPokedex::
# 1797 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Now, {PLAYER} and {RIVAL}!\p"
	.string "This time, you really must work\n"
	.string "towards filling your POKéDEXES.\p"
	.string "I urge you to make them the best\n"
	.string "and the most complete of all time!\p"
	.string "Truly, this is a monumentally great\n"
	.string "undertaking in POKéMON history!$"

PalletTown_ProfessorOaksLab_Text_RivalIllCompleteThePokedex::
# 1807 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Gramps, calm down.\n"
	.string "Don't get so excited.\p"
	.string "I'll get the POKéDEX completed,\n"
	.string "don't you worry about a thing.\p"
	.string "I think I'll try looking around\n"
	.string "ONE ISLAND first…\p"
	.string "Anyways, I'm outta here!$"

PokedexRating_Text_HowIsPokedexComingAlong::
# 1819 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: Good to see you!\n"
	.string "How is your POKéDEX coming along?\p"
	.string "Here, let me take a look.$"

PokedexRating_Text_SeenXOwnedY::
# 1825 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "The amount of progress you've made\n"
	.string "on your POKéDEX is:\p"
	.string "{STR_VAR_1} POKéMON seen and\n"
	.string "{STR_VAR_2} POKéMON owned.\p"
	.string "{FONT_NORMAL}PROF. OAK's rating:$"

PokedexRating_Text_LessThan10::
# 1833 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "You still have lots to do.\p"
	.string "Go into every patch of grass you\n"
	.string "see and look for POKéMON!$"

PokedexRating_Text_LessThan20::
# 1839 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "It looks as if you're getting on\n"
	.string "the right track!\p"
	.string "I've given one of my AIDES a FLASH\n"
	.string "HM. Make sure you go get it!$"

PokedexRating_Text_LessThan30::
# 1846 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Your POKéDEX could use a bit more\n"
	.string "volume still!\p"
	.string "Try to catch other species of\n"
	.string "POKéMON!$"

PokedexRating_Text_LessThan40::
# 1853 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Good, it's apparent that you're\n"
	.string "trying hard!\p"
	.string "I've given one of my AIDES an\n"
	.string "ITEMFINDER. Be sure to collect it!$"

PokedexRating_Text_LessThan50::
# 1860 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Your POKéDEX is coming along quite\n"
	.string "well!\p"
	.string "I've given one of my AIDES an\n"
	.string "AMULET COIN. Be sure to get it!$"

PokedexRating_Text_LessThan60::
# 1867 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Ah, you've finally topped 50\n"
	.string "species!\p"
	.string "I've given one of my AIDES an EXP.\n"
	.string "SHARE. Be sure to go get it!$"

PokedexRating_Text_LessThan70::
# 1874 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Hoho! This is turning into quite the\n"
	.string "respectable POKéDEX!$"

PokedexRating_Text_LessThan80::
# 1879 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Very good!\p"
	.string "I think you'll collect even more\n"
	.string "POKéMON by going fishing!$"

PokedexRating_Text_LessThan90::
# 1885 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Wonderful! Let me guess… You\n"
	.string "like to collect things, don't you?$"

PokedexRating_Text_LessThan100::
# 1890 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "I'm impressed!\n"
	.string "It must have been difficult to do!$"

PokedexRating_Text_LessThan110::
# 1895 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "You've finally hit 100 species!\n"
	.string "I can't believe how good you are!$"

PokedexRating_Text_LessThan120::
# 1900 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "You even have the evolved forms\n"
	.string "of POKéMON! Super!$"

PokedexRating_Text_LessThan130::
# 1905 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Excellent! Trade with friends to\n"
	.string "get some more!$"

PokedexRating_Text_LessThan140::
# 1910 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Outstanding!\n"
	.string "You've become a real pro at this!$"

PokedexRating_Text_LessThan150::
# 1915 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "I have nothing left to say!\n"
	.string "You're the POKéMON PROFESSOR now!$"

PokedexRating_Text_Complete::
# 1920 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Your POKéDEX is entirely complete!\n"
	.string "Congratulations!!$"

PokedexRating_Text_NationalDexSeenXOwnedY::
# 1925 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "And your NATIONAL POKéDEX is:\p"
	.string "{STR_VAR_1} POKéMON seen and\n"
	.string "{STR_VAR_2} POKéMON owned.$"

PokedexRating_Text_LookForwardToFilledNationalDex::
# 1931 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "I'll be looking forward to seeing\n"
	.string "you fill the NATIONAL POKéDEX!$"

PokedexRating_Text_YouveCompletedDex::
# 1936 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Finally…\p"
	.string "You've finally completed the\n"
	.string "POKéDEX!\p"
	.string "It's magnificent!\n"
	.string "Truly, this is a fantastic feat!$"

PokedexRating_Text_Wroooaaarrr::
# 1944 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Wroooooooaaaaaarrrr!$"

PokedexRating_Text_ThankYouMadeDreamReality::
# 1948 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Thank you, {PLAYER}!\n"
	.string "Sincerely, thank you!\l"
	.string "You've made my dream a reality!$"

PokedexRating_Text_LoveSeeingYourPokedex::
# 1954 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "OAK: Ah, welcome!\p"
	.string "Tell me, how is your POKéDEX\n"
	.string "coming along?\p"
	.string "Wahaha!\p"
	.string "Actually, I know how it is, but I\n"
	.string "love seeing it anyway!\p"
	.string "Let's see…$"
