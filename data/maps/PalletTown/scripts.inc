PalletTown_MapScripts::
# 4 "data/maps/PalletTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_OnTransition
# 5 "data/maps/PalletTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PalletTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/PalletTown/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_OAK, 2, PalletTown_EventScript_OakRatingScene
	.2byte 0


PalletTown_OnTransition::
# 9 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_VISITED_PALLET_TOWN
# 10 "data/maps/PalletTown/scripts.pory"
	call_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_TryReadySignLady
# 11 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 0, PalletTown_EventScript_SetSignLadyPos
# 12 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, PalletTown_EventScript_SetSignLadyDone
	end


PalletTown_EventScript_TryReadySignLady::
# 17 "data/maps/PalletTown/scripts.pory"
	goto_if_unset FLAG_OPENED_START_MENU, Common_EventScript_NopReturn
# 18 "data/maps/PalletTown/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, Common_EventScript_NopReturn
# 19 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
	return


PalletTown_EventScript_SetSignLadyDone::
# 24 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2
	return


PalletTown_EventScript_SetSignLadyPos::
# 29 "data/maps/PalletTown/scripts.pory"
	goto_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_MoveSignLadyToRouteEntrance
# 30 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_PALLET_SIGN_LADY, 5, 15
# 31 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_SIGN_LADY, MOVEMENT_TYPE_FACE_UP
	return


PalletTown_EventScript_MoveSignLadyToRouteEntrance::
# 36 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_PALLET_SIGN_LADY, 12, 2
# 37 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_SIGN_LADY, MOVEMENT_TYPE_FACE_DOWN
# 38 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_2, TRUE
	return


PalletTown_EventScript_OakRatingScene::
# 44 "data/maps/PalletTown/scripts.pory"
	lockall
# 45 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_PALLET_PROF_OAK, 14, 14
# 46 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_PROF_OAK, MOVEMENT_TYPE_FACE_LEFT
# 47 "data/maps/PalletTown/scripts.pory"
	addobject LOCALID_PALLET_PROF_OAK
# 48 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToPlayersDoor
# 49 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 52 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_NotBeenToOneIslandYet
# 53 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakLetMeSeePokedex
# 54 "data/maps/PalletTown/scripts.pory"
	setvar VAR_0x8004, 0
# 55 "data/maps/PalletTown/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 56 "data/maps/PalletTown/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 57 "data/maps/PalletTown/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 58 "data/maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 59 "data/maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 60 "data/maps/PalletTown/scripts.pory"
	goto_if_lt VAR_0x8009, 60, PalletTown_EventScript_NotEnoughMonsForNationalDex
# 61 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXImpressiveFollowMe
# 62 "data/maps/PalletTown/scripts.pory"
	closemessage
# 63 "data/maps/PalletTown/scripts.pory"
	playbgm MUS_RG_FOLLOW_ME, 0
# 64 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabFromHouse
# 65 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabFromHouse
# 66 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 67 "data/maps/PalletTown/scripts.pory"
	opendoor 17, 13
# 68 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 69 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLab
# 70 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 71 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 72 "data/maps/PalletTown/scripts.pory"
	closedoor 17, 13
# 73 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 74 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7
# 75 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 76 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 77 "data/maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 78 "data/maps/PalletTown/scripts.pory"
	waitstate
# 79 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_EndOakRatingScene::
# 84 "data/maps/PalletTown/scripts.pory"
	closemessage
# 85 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakExit
# 86 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 87 "data/maps/PalletTown/scripts.pory"
	removeobject LOCALID_PALLET_PROF_OAK
# 88 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 89 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_NotEnoughMonsForNationalDex::
# 94 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXPuttingInHonestEffort
# 95 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
	end


PalletTown_EventScript_NotBeenToOneIslandYet::
# 100 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakYouEnjoyingTraveling
# 101 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
	end


# 105 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToPlayersDoor:
# 106 "data/maps/PalletTown/scripts.pory"
	walk_left
# 107 "data/maps/PalletTown/scripts.pory"
	walk_left
# 108 "data/maps/PalletTown/scripts.pory"
	walk_left
# 109 "data/maps/PalletTown/scripts.pory"
	walk_up
# 110 "data/maps/PalletTown/scripts.pory"
	walk_up
# 111 "data/maps/PalletTown/scripts.pory"
	walk_up
# 112 "data/maps/PalletTown/scripts.pory"
	walk_up
# 113 "data/maps/PalletTown/scripts.pory"
	walk_up
# 114 "data/maps/PalletTown/scripts.pory"
	walk_left
# 115 "data/maps/PalletTown/scripts.pory"
	walk_left
# 116 "data/maps/PalletTown/scripts.pory"
	walk_left
# 117 "data/maps/PalletTown/scripts.pory"
	walk_left
# 118 "data/maps/PalletTown/scripts.pory"
	walk_left
# 119 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 120 "data/maps/PalletTown/scripts.pory"
	step_end

# 123 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakExit:
# 124 "data/maps/PalletTown/scripts.pory"
	walk_right
# 125 "data/maps/PalletTown/scripts.pory"
	walk_right
# 126 "data/maps/PalletTown/scripts.pory"
	walk_right
# 127 "data/maps/PalletTown/scripts.pory"
	walk_right
# 128 "data/maps/PalletTown/scripts.pory"
	walk_right
# 129 "data/maps/PalletTown/scripts.pory"
	walk_down
# 130 "data/maps/PalletTown/scripts.pory"
	walk_down
# 131 "data/maps/PalletTown/scripts.pory"
	walk_down
# 132 "data/maps/PalletTown/scripts.pory"
	walk_down
# 133 "data/maps/PalletTown/scripts.pory"
	walk_down
# 134 "data/maps/PalletTown/scripts.pory"
	walk_right
# 135 "data/maps/PalletTown/scripts.pory"
	walk_right
# 136 "data/maps/PalletTown/scripts.pory"
	walk_right
# 137 "data/maps/PalletTown/scripts.pory"
	step_end

# 140 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabFromHouse:
# 141 "data/maps/PalletTown/scripts.pory"
	walk_right
# 142 "data/maps/PalletTown/scripts.pory"
	walk_right
# 143 "data/maps/PalletTown/scripts.pory"
	walk_right
# 144 "data/maps/PalletTown/scripts.pory"
	walk_right
# 145 "data/maps/PalletTown/scripts.pory"
	walk_right
# 146 "data/maps/PalletTown/scripts.pory"
	walk_down
# 147 "data/maps/PalletTown/scripts.pory"
	walk_down
# 148 "data/maps/PalletTown/scripts.pory"
	walk_down
# 149 "data/maps/PalletTown/scripts.pory"
	walk_down
# 150 "data/maps/PalletTown/scripts.pory"
	walk_down
# 151 "data/maps/PalletTown/scripts.pory"
	walk_right
# 152 "data/maps/PalletTown/scripts.pory"
	walk_right
# 153 "data/maps/PalletTown/scripts.pory"
	walk_right
# 154 "data/maps/PalletTown/scripts.pory"
	walk_right
# 155 "data/maps/PalletTown/scripts.pory"
	walk_right
# 156 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 157 "data/maps/PalletTown/scripts.pory"
	step_end

# 160 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabFromHouse:
# 161 "data/maps/PalletTown/scripts.pory"
	walk_down
# 162 "data/maps/PalletTown/scripts.pory"
	walk_right
# 163 "data/maps/PalletTown/scripts.pory"
	walk_right
# 164 "data/maps/PalletTown/scripts.pory"
	walk_right
# 165 "data/maps/PalletTown/scripts.pory"
	walk_right
# 166 "data/maps/PalletTown/scripts.pory"
	walk_right
# 167 "data/maps/PalletTown/scripts.pory"
	walk_down
# 168 "data/maps/PalletTown/scripts.pory"
	walk_down
# 169 "data/maps/PalletTown/scripts.pory"
	walk_down
# 170 "data/maps/PalletTown/scripts.pory"
	walk_down
# 171 "data/maps/PalletTown/scripts.pory"
	walk_down
# 172 "data/maps/PalletTown/scripts.pory"
	walk_right
# 173 "data/maps/PalletTown/scripts.pory"
	walk_right
# 174 "data/maps/PalletTown/scripts.pory"
	walk_right
# 175 "data/maps/PalletTown/scripts.pory"
	walk_right
# 176 "data/maps/PalletTown/scripts.pory"
	step_end

PalletTown_EventScript_OakTriggerLeft::
# 180 "data/maps/PalletTown/scripts.pory"
	lockall
# 181 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 0
# 182 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
	end


PalletTown_EventScript_OakTriggerRight::
# 187 "data/maps/PalletTown/scripts.pory"
	lockall
# 188 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 189 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
	end


PalletTown_EventScript_OakTrigger::
# 194 "data/maps/PalletTown/scripts.pory"
	delay 30
# 195 "data/maps/PalletTown/scripts.pory"
	playbgm MUS_RG_OAK, 0
# 196 "data/maps/PalletTown/scripts.pory"
	message PalletTown_Text_OakDontGoOut
# 197 "data/maps/PalletTown/scripts.pory"
	waitmessage
# 198 "data/maps/PalletTown/scripts.pory"
	delay 85
# 199 "data/maps/PalletTown/scripts.pory"
	closemessage
# 200 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 201 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 202 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 203 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 204 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 205 "data/maps/PalletTown/scripts.pory"
	delay 30
# 206 "data/maps/PalletTown/scripts.pory"
	addobject LOCALID_PALLET_PROF_OAK
# 207 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakEnterLeft
# 208 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakEnterRight
# 209 "data/maps/PalletTown/scripts.pory"
	delay 30
# 210 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakGrassUnsafeNeedMon
# 211 "data/maps/PalletTown/scripts.pory"
	closemessage
# 212 "data/maps/PalletTown/scripts.pory"
	delay 30
# 213 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakLeadPlayerToLabLeft
# 214 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakLeadPlayerToLabRight
# 215 "data/maps/PalletTown/scripts.pory"
	opendoor 17, 13
# 216 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 217 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLab
# 218 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 219 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 220 "data/maps/PalletTown/scripts.pory"
	closedoor 17, 13
# 221 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 222 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
# 223 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 224 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1
# 225 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 226 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 227 "data/maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 228 "data/maps/PalletTown/scripts.pory"
	waitstate
# 229 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_OakEnterLeft::
# 234 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLeft
# 235 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_OakEnterRight::
# 240 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterRight
# 241 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_OakLeadPlayerToLabLeft::
# 246 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabLeft
# 247 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabLeft
# 248 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_OakLeadPlayerToLabRight::
# 253 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabRight
# 254 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabRight
# 255 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


# 258 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLeft:
# 259 "data/maps/PalletTown/scripts.pory"
	walk_up
# 260 "data/maps/PalletTown/scripts.pory"
	walk_up
# 261 "data/maps/PalletTown/scripts.pory"
	walk_right
# 262 "data/maps/PalletTown/scripts.pory"
	walk_up
# 263 "data/maps/PalletTown/scripts.pory"
	walk_up
# 264 "data/maps/PalletTown/scripts.pory"
	walk_right
# 265 "data/maps/PalletTown/scripts.pory"
	walk_up
# 266 "data/maps/PalletTown/scripts.pory"
	walk_up
# 267 "data/maps/PalletTown/scripts.pory"
	step_end

# 270 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterRight:
# 271 "data/maps/PalletTown/scripts.pory"
	walk_right
# 272 "data/maps/PalletTown/scripts.pory"
	walk_up
# 273 "data/maps/PalletTown/scripts.pory"
	walk_up
# 274 "data/maps/PalletTown/scripts.pory"
	walk_right
# 275 "data/maps/PalletTown/scripts.pory"
	walk_up
# 276 "data/maps/PalletTown/scripts.pory"
	walk_up
# 277 "data/maps/PalletTown/scripts.pory"
	walk_right
# 278 "data/maps/PalletTown/scripts.pory"
	walk_up
# 279 "data/maps/PalletTown/scripts.pory"
	walk_up
# 280 "data/maps/PalletTown/scripts.pory"
	step_end

# 283 "data/maps/PalletTown/scripts.pory"

# 284 "data/maps/PalletTown/scripts.pory"
	.macro walk_to_lab
# 285 "data/maps/PalletTown/scripts.pory"
	walk_left
# 286 "data/maps/PalletTown/scripts.pory"
	walk_down
# 287 "data/maps/PalletTown/scripts.pory"
	walk_down
# 288 "data/maps/PalletTown/scripts.pory"
	walk_down
# 289 "data/maps/PalletTown/scripts.pory"
	walk_down
# 290 "data/maps/PalletTown/scripts.pory"
	walk_down
# 291 "data/maps/PalletTown/scripts.pory"
	walk_down
# 292 "data/maps/PalletTown/scripts.pory"
	walk_down
# 293 "data/maps/PalletTown/scripts.pory"
	walk_down
# 294 "data/maps/PalletTown/scripts.pory"
	walk_down
# 295 "data/maps/PalletTown/scripts.pory"
	walk_down
# 296 "data/maps/PalletTown/scripts.pory"
	walk_down
# 297 "data/maps/PalletTown/scripts.pory"
	walk_right
# 298 "data/maps/PalletTown/scripts.pory"
	walk_right
# 299 "data/maps/PalletTown/scripts.pory"
	walk_right
# 300 "data/maps/PalletTown/scripts.pory"
	walk_right
# 301 "data/maps/PalletTown/scripts.pory"
	walk_right
# 302 "data/maps/PalletTown/scripts.pory"
	.endm

# 305 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabLeft:
# 306 "data/maps/PalletTown/scripts.pory"
	walk_down
# 307 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 308 "data/maps/PalletTown/scripts.pory"
	walk_right
# 309 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 310 "data/maps/PalletTown/scripts.pory"
	step_end

# 313 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabRight:
# 314 "data/maps/PalletTown/scripts.pory"
	walk_down
# 315 "data/maps/PalletTown/scripts.pory"
	walk_left
# 316 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 317 "data/maps/PalletTown/scripts.pory"
	walk_right
# 318 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 319 "data/maps/PalletTown/scripts.pory"
	step_end

# 322 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLab:
# 323 "data/maps/PalletTown/scripts.pory"
	walk_up
# 324 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 325 "data/maps/PalletTown/scripts.pory"
	step_end

# 328 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabLeft:
# 329 "data/maps/PalletTown/scripts.pory"
	walk_down
# 330 "data/maps/PalletTown/scripts.pory"
	walk_down
# 331 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 332 "data/maps/PalletTown/scripts.pory"
	step_end

# 335 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabRight:
# 336 "data/maps/PalletTown/scripts.pory"
	walk_down
# 337 "data/maps/PalletTown/scripts.pory"
	walk_down
# 338 "data/maps/PalletTown/scripts.pory"
	walk_left
# 339 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 340 "data/maps/PalletTown/scripts.pory"
	step_end

# 343 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerEnterLab:
# 344 "data/maps/PalletTown/scripts.pory"
	walk_right
# 345 "data/maps/PalletTown/scripts.pory"
	walk_up
# 346 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 347 "data/maps/PalletTown/scripts.pory"
	step_end

PalletTown_EventScript_SignLady::
# 351 "data/maps/PalletTown/scripts.pory"
	lock
# 352 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2, PalletTown_EventScript_SignLadyDone
# 353 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, PalletTown_EventScript_SignLadyJustShowedSign
# 354 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_TEMP_2, TRUE, PalletTown_EventScript_SignLadyStartShowSign
# 355 "data/maps/PalletTown/scripts.pory"
	goto_if_set FLAG_TEMP_2, PalletTown_EventScript_SignLadyGoReadSign
# 356 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_HmmIsThatRight
# 357 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 358 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 359 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 360 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_ExclamationMark
# 361 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 362 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_Delay48
# 363 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 364 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OhLookLook
# 365 "data/maps/PalletTown/scripts.pory"
	closemessage
# 366 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayRight
# 367 "data/maps/PalletTown/scripts.pory"
	call_if_ne VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayLeft
# 368 "data/maps/PalletTown/scripts.pory"
	copyobjectxytoperm LOCALID_PALLET_SIGN_LADY
# 369 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_TEMP_2
# 370 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_SignLadyMoveOutOfWayRight::
# 375 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayRight
# 376 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_SignLadyMoveOutOfWayLeft::
# 381 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayLeft
# 382 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_SignLadyDone::
# 387 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 388 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 389 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RaisingMonsToo
# 390 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_SignLadyGoReadSign::
# 395 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 396 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 397 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_ReadItReadIt
# 398 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_SignLadyJustShowedSign::
# 403 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 404 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 405 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_SignsAreUsefulArentThey
# 406 "data/maps/PalletTown/scripts.pory"
	release
	end


# 410 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayRight:
# 411 "data/maps/PalletTown/scripts.pory"
	walk_right
# 412 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_left
# 413 "data/maps/PalletTown/scripts.pory"
	step_end

# 416 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayLeft:
# 417 "data/maps/PalletTown/scripts.pory"
	walk_left
# 418 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_right
# 419 "data/maps/PalletTown/scripts.pory"
	step_end

PalletTown_EventScript_FatMan::
# 423 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CanStoreItemsAndMonsInPC, MSGBOX_NPC
	end


PalletTown_EventScript_OaksLabSign::
# 428 "data/maps/PalletTown/scripts.pory"
	lockall
# 429 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakPokemonResearchLab
# 430 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_PlayersHouseSign::
# 435 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PlayersHouse, MSGBOX_SIGN
	end


PalletTown_EventScript_RivalsHouseSign::
# 440 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RivalsHouse, MSGBOX_SIGN
	end


PalletTown_EventScript_TownSign::
# 445 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_TownSign, MSGBOX_SIGN
	end


PalletTown_EventScript_TrainerTips::
# 450 "data/maps/PalletTown/scripts.pory"
	lockall
# 451 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenu
# 452 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 453 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_SignLadyTrigger::
# 458 "data/maps/PalletTown/scripts.pory"
	lockall
# 459 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_WalkInPlaceFasterRight
# 460 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 461 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 462 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 463 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_SignLadyShowSign::
# 468 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_LookCopiedTrainerTipsSign
# 469 "data/maps/PalletTown/scripts.pory"
	closemessage
# 470 "data/maps/PalletTown/scripts.pory"
	delay 20
# 471 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_OPENED_START_MENU
# 472 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 473 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_2, FALSE
# 477 "data/maps/PalletTown/scripts.pory"
	signmsg
# 478 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenuCopy
# 479 "data/maps/PalletTown/scripts.pory"
	normalmsg
	return


PalletTown_EventScript_SignLadyStartShowSign::
# 484 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 485 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 486 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 487 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_Talk_To_Celebi::
# 492 "data/maps/PalletTown/scripts.pory"
	lockall
# 493 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_CELEBI, PalletTown_EventScript_Talk_To_Celebi_Movement_0
# 494 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_EventScript_Ask_Celebi, MSGBOX_YESNO
# 495 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_EventScript_Celebi_Back_In_Time
# 496 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_EventScript_Refuse_Celebi, MSGBOX_NPC
# 497 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_Celebi_Back_In_Time::
# 502 "data/maps/PalletTown/scripts.pory"
	fadenewbgm MUS_CAVE_OF_ORIGIN
# 503 "data/maps/PalletTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Accepted_Celebi, MSGBOX_NPC
# 504 "data/maps/PalletTown/scripts.pory"
	setvar VAR_RESULT, 2
# 505 "data/maps/PalletTown/scripts.pory"
	special DoOrbEffect
# 506 "data/maps/PalletTown/scripts.pory"
	lockall
# 507 "data/maps/PalletTown/scripts.pory"
	delay 150
# 508 "data/maps/PalletTown/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
# 509 "data/maps/PalletTown/scripts.pory"
	special FadeOutOrbEffect
# 510 "data/maps/PalletTown/scripts.pory"
	lockall
# 511 "data/maps/PalletTown/scripts.pory"
	delay 30
# 512 "data/maps/PalletTown/scripts.pory"
	waitmoncry
# 513 "data/maps/PalletTown/scripts.pory"
	playse SE_SHINY
# 514 "data/maps/PalletTown/scripts.pory"
	checkplayergender
# 515 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, PalletTown_EventScript_Celebi_Male
# 516 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, PalletTown_EventScript_Celebi_Female
	return


PalletTown_EventScript_Celebi_Male::
# 520 "data/maps/PalletTown/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 521 "data/maps/PalletTown/scripts.pory"
	warpteleport MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 1, 4
# 522 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_Celebi_Female::
# 527 "data/maps/PalletTown/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
# 528 "data/maps/PalletTown/scripts.pory"
	warpteleport MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 7, 4
# 529 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


# 493 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_Talk_To_Celebi_Movement_0:
# 493 "data/maps/PalletTown/scripts.pory"
	face_player
# 493 "data/maps/PalletTown/scripts.pory"
	emote_exclamation_mark
	step_end

PalletTown_EventScript_Ask_Celebi::
# 533 "data/maps/PalletTown/scripts.pory"
	.string "It appears Celebi wants you to \n"
	.string "follow it...\l"
	.string "Do you wish to go with Celebi?$"

PalletTown_EventScript_Refuse_Celebi::
# 539 "data/maps/PalletTown/scripts.pory"
	.string "Yeah, FireRed is pretty cool.$"

PalletTown_EventScript_Accepted_Celebi::
# 543 "data/maps/PalletTown/scripts.pory"
	.string "You enter a different reality...$"

PalletTown_Text_OakDontGoOut::
# 548 "data/maps/PalletTown/scripts.pory"
	.string "OAK: Hey! Wait!\n"
	.string "Don't go out!$"

PalletTown_Text_OakGrassUnsafeNeedMon::
# 553 "data/maps/PalletTown/scripts.pory"
	.string "OAK: It's unsafe!\n"
	.string "Wild POKéMON live in tall grass!\p"
	.string "You need your own POKéMON for\n"
	.string "your protection.\p"
	.string "I know!\n"
	.string "Here, come with me!$"

PalletTown_Text_RaisingMonsToo::
# 562 "data/maps/PalletTown/scripts.pory"
	.string "I'm raising POKéMON, too.\p"
	.string "When they get strong, they can\n"
	.string "protect me.$"

PalletTown_Text_CanStoreItemsAndMonsInPC::
# 568 "data/maps/PalletTown/scripts.pory"
	.string "Technology is incredible!\p"
	.string "You can now store and recall items\n"
	.string "and POKéMON as data via PC.$"

PalletTown_Text_OakPokemonResearchLab::
# 574 "data/maps/PalletTown/scripts.pory"
	.string "OAK POKéMON RESEARCH LAB$"

PalletTown_Text_PlayersHouse::
# 578 "data/maps/PalletTown/scripts.pory"
	.string "{PLAYER}'s house$"

PalletTown_Text_RivalsHouse::
# 582 "data/maps/PalletTown/scripts.pory"
	.string "{RIVAL}'s house$"

PalletTown_Text_TownSign::
# 586 "data/maps/PalletTown/scripts.pory"
	.string "PALLET TOWN\n"
	.string "Shades of your journey await!$"

PalletTown_Text_OakLetMeSeePokedex::
# 591 "data/maps/PalletTown/scripts.pory"
	.string "OAK: Ah, {PLAYER}!\n"
	.string "You're back, are you?\p"
	.string "How much have you filled in your\n"
	.string "POKéDEX?\p"
	.string "May I see it?\p"
	.string "Let's see…$"

PalletTown_Text_CaughtXPuttingInHonestEffort::
# 600 "data/maps/PalletTown/scripts.pory"
	.string "You've caught {STR_VAR_2}…\p"
	.string "Hm, it looks as if you're putting\n"
	.string "in an honest effort.\p"
	.string "When you manage to fill it some\n"
	.string "more, come show me, please.$"

PalletTown_Text_CaughtXImpressiveFollowMe::
# 608 "data/maps/PalletTown/scripts.pory"
	.string "You've caught… {STR_VAR_2}!?\n"
	.string "Now, this is impressive!\p"
	.string "There's something I wanted to ask\n"
	.string "of you, {PLAYER}.\p"
	.string "Come.\n"
	.string "Follow me.$"

PalletTown_Text_OakYouEnjoyingTraveling::
# 617 "data/maps/PalletTown/scripts.pory"
	.string "OAK: Ah, {PLAYER}!\n"
	.string "You seem to be enjoying traveling.\p"
	.string "Knowing you, {PLAYER}, I can easily\n"
	.string "imagine you going out to even more\l"
	.string "exotic locales.\p"
	.string "Good for you, good for you.\n"
	.string "Hohoho.$"

PalletTown_Text_HmmIsThatRight::
# 629 "data/maps/PalletTown/scripts.pory"
	.string "Hmm…\n"
	.string "Is that right…$"

PalletTown_Text_OhLookLook::
# 634 "data/maps/PalletTown/scripts.pory"
	.string "Oh!\n"
	.string "Look, look!$"

PalletTown_Text_ReadItReadIt::
# 639 "data/maps/PalletTown/scripts.pory"
	.string "Read it, read it!$"

PalletTown_Text_PressStartToOpenMenu::
# 644 "data/maps/PalletTown/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "Press START to open the MENU!$"

PalletTown_Text_SignsAreUsefulArentThey::
# 649 "data/maps/PalletTown/scripts.pory"
	.string "Signs are useful, aren't they?$"

PalletTown_Text_LookCopiedTrainerTipsSign::
# 653 "data/maps/PalletTown/scripts.pory"
	.string "Look, look!\p"
	.string "I copied what it said on one of\n"
	.string "those TRAINER TIPS signs!$"

PalletTown_Text_PressStartToOpenMenuCopy::
# 660 "data/maps/PalletTown/scripts.pory"
	.string "TRAINER TIPS!\p"
	.string "Press START to open the MENU!$"
