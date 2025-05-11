PalletTown_MapScripts::
# 7 "data/maps/PalletTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_OnTransition
# 8 "data/maps/PalletTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PalletTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/PalletTown/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_OAK, 2, PalletTown_EventScript_OakRatingScene
	.2byte 0


PalletTown_OnTransition::
# 12 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_VISITED_PALLET_TOWN
# 13 "data/maps/PalletTown/scripts.pory"
	call_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_TryReadySignLady
# 14 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 0, PalletTown_EventScript_SetSignLadyPos
# 15 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, PalletTown_EventScript_SetSignLadyDone
	end


PalletTown_EventScript_TryReadySignLady::
# 20 "data/maps/PalletTown/scripts.pory"
	goto_if_unset FLAG_OPENED_START_MENU, Common_EventScript_NopReturn
# 21 "data/maps/PalletTown/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, Common_EventScript_NopReturn
# 22 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
	return


PalletTown_EventScript_SetSignLadyDone::
# 27 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2
	return


PalletTown_EventScript_SetSignLadyPos::
# 32 "data/maps/PalletTown/scripts.pory"
	goto_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_MoveSignLadyToRouteEntrance
# 33 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm 1, 5, 15
# 34 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return


PalletTown_EventScript_MoveSignLadyToRouteEntrance::
# 39 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm 1, 12, 2
# 40 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 41 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_2, TRUE
	return


PalletTown_EventScript_OakRatingScene::
# 47 "data/maps/PalletTown/scripts.pory"
	lockall
# 48 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm 3, 14, 14
# 49 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
# 50 "data/maps/PalletTown/scripts.pory"
	addobject 3
# 51 "data/maps/PalletTown/scripts.pory"
	applymovement 3, PalletTown_Movement_OakWalkToPlayersDoor
# 52 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 55 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_NotBeenToOneIslandYet
# 56 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakLetMeSeePokedex
# 57 "data/maps/PalletTown/scripts.pory"
	setvar VAR_0x8004, 0
# 58 "data/maps/PalletTown/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 59 "data/maps/PalletTown/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 60 "data/maps/PalletTown/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 61 "data/maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 62 "data/maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 63 "data/maps/PalletTown/scripts.pory"
	goto_if_lt VAR_0x8009, 60, PalletTown_EventScript_NotEnoughMonsForNationalDex
# 64 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXImpressiveFollowMe
# 65 "data/maps/PalletTown/scripts.pory"
	closemessage
# 66 "data/maps/PalletTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 67 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabFromHouse
# 68 "data/maps/PalletTown/scripts.pory"
	applymovement 3, PalletTown_Movement_OakWalkToLabFromHouse
# 69 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 70 "data/maps/PalletTown/scripts.pory"
	opendoor 17, 13
# 71 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 72 "data/maps/PalletTown/scripts.pory"
	applymovement 3, PalletTown_Movement_OakEnterLab
# 73 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 74 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 75 "data/maps/PalletTown/scripts.pory"
	closedoor 17, 13
# 76 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 77 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7
# 78 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 79 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 80 "data/maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 81 "data/maps/PalletTown/scripts.pory"
	waitstate
# 82 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_EndOakRatingScene::
# 87 "data/maps/PalletTown/scripts.pory"
	closemessage
# 88 "data/maps/PalletTown/scripts.pory"
	applymovement 3, PalletTown_Movement_OakExit
# 89 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 90 "data/maps/PalletTown/scripts.pory"
	removeobject 3
# 91 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 92 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_NotEnoughMonsForNationalDex::
# 97 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXPuttingInHonestEffort
# 98 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
	end


PalletTown_EventScript_NotBeenToOneIslandYet::
# 103 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakYouEnjoyingTraveling
# 104 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
	end


# 108 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToPlayersDoor:
# 109 "data/maps/PalletTown/scripts.pory"
	walk_left
# 110 "data/maps/PalletTown/scripts.pory"
	walk_left
# 111 "data/maps/PalletTown/scripts.pory"
	walk_left
# 112 "data/maps/PalletTown/scripts.pory"
	walk_up
# 113 "data/maps/PalletTown/scripts.pory"
	walk_up
# 114 "data/maps/PalletTown/scripts.pory"
	walk_up
# 115 "data/maps/PalletTown/scripts.pory"
	walk_up
# 116 "data/maps/PalletTown/scripts.pory"
	walk_up
# 117 "data/maps/PalletTown/scripts.pory"
	walk_left
# 118 "data/maps/PalletTown/scripts.pory"
	walk_left
# 119 "data/maps/PalletTown/scripts.pory"
	walk_left
# 120 "data/maps/PalletTown/scripts.pory"
	walk_left
# 121 "data/maps/PalletTown/scripts.pory"
	walk_left
# 122 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 123 "data/maps/PalletTown/scripts.pory"
	step_end

# 126 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakExit:
# 127 "data/maps/PalletTown/scripts.pory"
	walk_right
# 128 "data/maps/PalletTown/scripts.pory"
	walk_right
# 129 "data/maps/PalletTown/scripts.pory"
	walk_right
# 130 "data/maps/PalletTown/scripts.pory"
	walk_right
# 131 "data/maps/PalletTown/scripts.pory"
	walk_right
# 132 "data/maps/PalletTown/scripts.pory"
	walk_down
# 133 "data/maps/PalletTown/scripts.pory"
	walk_down
# 134 "data/maps/PalletTown/scripts.pory"
	walk_down
# 135 "data/maps/PalletTown/scripts.pory"
	walk_down
# 136 "data/maps/PalletTown/scripts.pory"
	walk_down
# 137 "data/maps/PalletTown/scripts.pory"
	walk_right
# 138 "data/maps/PalletTown/scripts.pory"
	walk_right
# 139 "data/maps/PalletTown/scripts.pory"
	walk_right
# 140 "data/maps/PalletTown/scripts.pory"
	step_end

# 143 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabFromHouse:
# 144 "data/maps/PalletTown/scripts.pory"
	walk_right
# 145 "data/maps/PalletTown/scripts.pory"
	walk_right
# 146 "data/maps/PalletTown/scripts.pory"
	walk_right
# 147 "data/maps/PalletTown/scripts.pory"
	walk_right
# 148 "data/maps/PalletTown/scripts.pory"
	walk_right
# 149 "data/maps/PalletTown/scripts.pory"
	walk_down
# 150 "data/maps/PalletTown/scripts.pory"
	walk_down
# 151 "data/maps/PalletTown/scripts.pory"
	walk_down
# 152 "data/maps/PalletTown/scripts.pory"
	walk_down
# 153 "data/maps/PalletTown/scripts.pory"
	walk_down
# 154 "data/maps/PalletTown/scripts.pory"
	walk_right
# 155 "data/maps/PalletTown/scripts.pory"
	walk_right
# 156 "data/maps/PalletTown/scripts.pory"
	walk_right
# 157 "data/maps/PalletTown/scripts.pory"
	walk_right
# 158 "data/maps/PalletTown/scripts.pory"
	walk_right
# 159 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 160 "data/maps/PalletTown/scripts.pory"
	step_end

# 163 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabFromHouse:
# 164 "data/maps/PalletTown/scripts.pory"
	walk_down
# 165 "data/maps/PalletTown/scripts.pory"
	walk_right
# 166 "data/maps/PalletTown/scripts.pory"
	walk_right
# 167 "data/maps/PalletTown/scripts.pory"
	walk_right
# 168 "data/maps/PalletTown/scripts.pory"
	walk_right
# 169 "data/maps/PalletTown/scripts.pory"
	walk_right
# 170 "data/maps/PalletTown/scripts.pory"
	walk_down
# 171 "data/maps/PalletTown/scripts.pory"
	walk_down
# 172 "data/maps/PalletTown/scripts.pory"
	walk_down
# 173 "data/maps/PalletTown/scripts.pory"
	walk_down
# 174 "data/maps/PalletTown/scripts.pory"
	walk_down
# 175 "data/maps/PalletTown/scripts.pory"
	walk_right
# 176 "data/maps/PalletTown/scripts.pory"
	walk_right
# 177 "data/maps/PalletTown/scripts.pory"
	walk_right
# 178 "data/maps/PalletTown/scripts.pory"
	walk_right
# 179 "data/maps/PalletTown/scripts.pory"
	step_end

PalletTown_EventScript_OakTriggerLeft::
# 183 "data/maps/PalletTown/scripts.pory"
	lockall
# 184 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 0
# 185 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
	end


PalletTown_EventScript_OakTriggerRight::
# 190 "data/maps/PalletTown/scripts.pory"
	lockall
# 191 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 192 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
	end


PalletTown_EventScript_OakTrigger::
# 197 "data/maps/PalletTown/scripts.pory"
	delay 30
# 198 "data/maps/PalletTown/scripts.pory"
	playbgm MUS_RG_OAK, 0
# 199 "data/maps/PalletTown/scripts.pory"
	message PalletTown_Text_OakDontGoOut
# 200 "data/maps/PalletTown/scripts.pory"
	waitmessage
# 201 "data/maps/PalletTown/scripts.pory"
	delay 85
# 202 "data/maps/PalletTown/scripts.pory"
	closemessage
# 203 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 204 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 205 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 206 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 207 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 208 "data/maps/PalletTown/scripts.pory"
	delay 30
# 209 "data/maps/PalletTown/scripts.pory"
	addobject 3
# 210 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakEnterLeft
# 211 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakEnterRight
# 212 "data/maps/PalletTown/scripts.pory"
	delay 30
# 213 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakGrassUnsafeNeedMon
# 214 "data/maps/PalletTown/scripts.pory"
	closemessage
# 215 "data/maps/PalletTown/scripts.pory"
	delay 30
# 216 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakLeadPlayerToLabLeft
# 217 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakLeadPlayerToLabRight
# 218 "data/maps/PalletTown/scripts.pory"
	opendoor 17, 13
# 219 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 220 "data/maps/PalletTown/scripts.pory"
	applymovement 3, PalletTown_Movement_OakEnterLab
# 221 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 222 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 223 "data/maps/PalletTown/scripts.pory"
	closedoor 17, 13
# 224 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 225 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
# 226 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 227 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1
# 228 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 229 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 230 "data/maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 231 "data/maps/PalletTown/scripts.pory"
	waitstate
# 232 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_OakEnterLeft::
# 237 "data/maps/PalletTown/scripts.pory"
	applymovement 3, PalletTown_Movement_OakEnterLeft
# 238 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_OakEnterRight::
# 243 "data/maps/PalletTown/scripts.pory"
	applymovement 3, PalletTown_Movement_OakEnterRight
# 244 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_OakLeadPlayerToLabLeft::
# 249 "data/maps/PalletTown/scripts.pory"
	applymovement 3, PalletTown_Movement_OakWalkToLabLeft
# 250 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabLeft
# 251 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_OakLeadPlayerToLabRight::
# 256 "data/maps/PalletTown/scripts.pory"
	applymovement 3, PalletTown_Movement_OakWalkToLabRight
# 257 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabRight
# 258 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


# 261 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLeft:
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
	walk_right
# 268 "data/maps/PalletTown/scripts.pory"
	walk_up
# 269 "data/maps/PalletTown/scripts.pory"
	walk_up
# 270 "data/maps/PalletTown/scripts.pory"
	step_end

# 273 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterRight:
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
	walk_right
# 281 "data/maps/PalletTown/scripts.pory"
	walk_up
# 282 "data/maps/PalletTown/scripts.pory"
	walk_up
# 283 "data/maps/PalletTown/scripts.pory"
	step_end

# 286 "data/maps/PalletTown/scripts.pory"

# 287 "data/maps/PalletTown/scripts.pory"
	.macro walk_to_lab
# 288 "data/maps/PalletTown/scripts.pory"
	walk_left
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
	walk_down
# 298 "data/maps/PalletTown/scripts.pory"
	walk_down
# 299 "data/maps/PalletTown/scripts.pory"
	walk_down
# 300 "data/maps/PalletTown/scripts.pory"
	walk_right
# 301 "data/maps/PalletTown/scripts.pory"
	walk_right
# 302 "data/maps/PalletTown/scripts.pory"
	walk_right
# 303 "data/maps/PalletTown/scripts.pory"
	walk_right
# 304 "data/maps/PalletTown/scripts.pory"
	walk_right
# 305 "data/maps/PalletTown/scripts.pory"
	.endm

# 308 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabLeft:
# 309 "data/maps/PalletTown/scripts.pory"
	walk_down
# 310 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 311 "data/maps/PalletTown/scripts.pory"
	walk_right
# 312 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 313 "data/maps/PalletTown/scripts.pory"
	step_end

# 316 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabRight:
# 317 "data/maps/PalletTown/scripts.pory"
	walk_down
# 318 "data/maps/PalletTown/scripts.pory"
	walk_left
# 319 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 320 "data/maps/PalletTown/scripts.pory"
	walk_right
# 321 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 322 "data/maps/PalletTown/scripts.pory"
	step_end

# 325 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLab:
# 326 "data/maps/PalletTown/scripts.pory"
	walk_up
# 327 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 328 "data/maps/PalletTown/scripts.pory"
	step_end

# 331 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabLeft:
# 332 "data/maps/PalletTown/scripts.pory"
	walk_down
# 333 "data/maps/PalletTown/scripts.pory"
	walk_down
# 334 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 335 "data/maps/PalletTown/scripts.pory"
	step_end

# 338 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabRight:
# 339 "data/maps/PalletTown/scripts.pory"
	walk_down
# 340 "data/maps/PalletTown/scripts.pory"
	walk_down
# 341 "data/maps/PalletTown/scripts.pory"
	walk_left
# 342 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 343 "data/maps/PalletTown/scripts.pory"
	step_end

# 346 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerEnterLab:
# 347 "data/maps/PalletTown/scripts.pory"
	walk_right
# 348 "data/maps/PalletTown/scripts.pory"
	walk_up
# 349 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 350 "data/maps/PalletTown/scripts.pory"
	step_end

PalletTown_EventScript_SignLady::
# 354 "data/maps/PalletTown/scripts.pory"
	lock
# 355 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2, PalletTown_EventScript_SignLadyDone
# 356 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, PalletTown_EventScript_SignLadyJustShowedSign
# 357 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_TEMP_2, TRUE, PalletTown_EventScript_SignLadyStartShowSign
# 358 "data/maps/PalletTown/scripts.pory"
	goto_if_set FLAG_TEMP_2, PalletTown_EventScript_SignLadyGoReadSign
# 359 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_HmmIsThatRight
# 360 "data/maps/PalletTown/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 361 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 362 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 363 "data/maps/PalletTown/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 364 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 365 "data/maps/PalletTown/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 366 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 367 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OhLookLook
# 368 "data/maps/PalletTown/scripts.pory"
	closemessage
# 369 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayRight
# 370 "data/maps/PalletTown/scripts.pory"
	call_if_ne VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayLeft
# 371 "data/maps/PalletTown/scripts.pory"
	copyobjectxytoperm 1
# 372 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_TEMP_2
# 373 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_SignLadyMoveOutOfWayRight::
# 378 "data/maps/PalletTown/scripts.pory"
	applymovement 1, PalletTown_Movement_SignLadyMoveOutOfWayRight
# 379 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_SignLadyMoveOutOfWayLeft::
# 384 "data/maps/PalletTown/scripts.pory"
	applymovement 1, PalletTown_Movement_SignLadyMoveOutOfWayLeft
# 385 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_SignLadyDone::
# 390 "data/maps/PalletTown/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 391 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 392 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RaisingMonsToo
# 393 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_SignLadyGoReadSign::
# 398 "data/maps/PalletTown/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 399 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 400 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_ReadItReadIt
# 401 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_SignLadyJustShowedSign::
# 406 "data/maps/PalletTown/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 407 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 408 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_SignsAreUsefulArentThey
# 409 "data/maps/PalletTown/scripts.pory"
	release
	end


# 413 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayRight:
# 414 "data/maps/PalletTown/scripts.pory"
	walk_right
# 415 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_left
# 416 "data/maps/PalletTown/scripts.pory"
	step_end

# 419 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayLeft:
# 420 "data/maps/PalletTown/scripts.pory"
	walk_left
# 421 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_right
# 422 "data/maps/PalletTown/scripts.pory"
	step_end

PalletTown_EventScript_FatMan::
# 426 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CanStoreItemsAndMonsInPC, MSGBOX_NPC
	end


PalletTown_EventScript_OaksLabSign::
# 431 "data/maps/PalletTown/scripts.pory"
	lockall
# 432 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakPokemonResearchLab
# 433 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_PlayersHouseSign::
# 438 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PlayersHouse, MSGBOX_SIGN
	end


PalletTown_EventScript_RivalsHouseSign::
# 443 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RivalsHouse, MSGBOX_SIGN
	end


PalletTown_EventScript_TownSign::
# 448 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_TownSign, MSGBOX_SIGN
	end


PalletTown_EventScript_TrainerTips::
# 453 "data/maps/PalletTown/scripts.pory"
	lockall
# 454 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenu
# 455 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 456 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_SignLadyTrigger::
# 461 "data/maps/PalletTown/scripts.pory"
	lockall
# 462 "data/maps/PalletTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
# 463 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 464 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 465 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 466 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_SignLadyShowSign::
# 471 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_LookCopiedTrainerTipsSign
# 472 "data/maps/PalletTown/scripts.pory"
	closemessage
# 473 "data/maps/PalletTown/scripts.pory"
	delay 20
# 474 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_OPENED_START_MENU
# 475 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 476 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_2, FALSE
# 480 "data/maps/PalletTown/scripts.pory"
	signmsg
# 481 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenuCopy
# 482 "data/maps/PalletTown/scripts.pory"
	normalmsg
	return


PalletTown_EventScript_SignLadyStartShowSign::
# 487 "data/maps/PalletTown/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 488 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 489 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 490 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_Talk_To_Celebi::
# 495 "data/maps/PalletTown/scripts.pory"
	lockall
# 496 "data/maps/PalletTown/scripts.pory"
	applymovement 4, PalletTown_EventScript_Talk_To_Celebi_Movement_0
# 497 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_EventScript_Ask_Celebi, MSGBOX_YESNO
# 498 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_EventScript_Celebi_Back_In_Time
# 499 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_EventScript_Refuse_Celebi, MSGBOX_NPC
# 500 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_Celebi_Back_In_Time::
# 505 "data/maps/PalletTown/scripts.pory"
	fadenewbgm MUS_CAVE_OF_ORIGIN
# 506 "data/maps/PalletTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Accepted_Celebi, MSGBOX_NPC
# 507 "data/maps/PalletTown/scripts.pory"
	setvar VAR_RESULT, 2
# 508 "data/maps/PalletTown/scripts.pory"
	special DoOrbEffect
# 509 "data/maps/PalletTown/scripts.pory"
	lockall
# 510 "data/maps/PalletTown/scripts.pory"
	delay 150
# 511 "data/maps/PalletTown/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
# 512 "data/maps/PalletTown/scripts.pory"
	special FadeOutOrbEffect
# 513 "data/maps/PalletTown/scripts.pory"
	lockall
# 514 "data/maps/PalletTown/scripts.pory"
	delay 30
# 515 "data/maps/PalletTown/scripts.pory"
	waitmoncry
# 516 "data/maps/PalletTown/scripts.pory"
	playse SE_SHINY
# 517 "data/maps/PalletTown/scripts.pory"
	checkplayergender
# 518 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, PalletTown_EventScript_Celebi_Male
# 519 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, PalletTown_EventScript_Celebi_Female
	return


PalletTown_EventScript_Celebi_Male::
# 523 "data/maps/PalletTown/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 524 "data/maps/PalletTown/scripts.pory"
	warpteleport MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 1, 4
# 525 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_Celebi_Female::
# 530 "data/maps/PalletTown/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
# 531 "data/maps/PalletTown/scripts.pory"
	warpteleport MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 7, 4
# 532 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


# 496 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_Talk_To_Celebi_Movement_0:
# 496 "data/maps/PalletTown/scripts.pory"
	face_player
# 496 "data/maps/PalletTown/scripts.pory"
	emote_exclamation_mark
	step_end

PalletTown_EventScript_Ask_Celebi::
# 536 "data/maps/PalletTown/scripts.pory"
	.string "It appears Celebi wants you to \n"
	.string "follow it...\l"
	.string "Do you wish to go with Celebi?$"

PalletTown_EventScript_Refuse_Celebi::
# 542 "data/maps/PalletTown/scripts.pory"
	.string "Yeah, FireRed is pretty cool.$"

PalletTown_EventScript_Accepted_Celebi::
# 546 "data/maps/PalletTown/scripts.pory"
	.string "You enter a different reality...$"

PalletTown_Text_OakDontGoOut::
# 551 "data/maps/PalletTown/scripts.pory"
	.string "OAK: Hey! Wait!\n"
	.string "Don't go out!$"

PalletTown_Text_OakGrassUnsafeNeedMon::
# 556 "data/maps/PalletTown/scripts.pory"
	.string "OAK: It's unsafe!\n"
	.string "Wild POKéMON live in tall grass!\p"
	.string "You need your own POKéMON for\n"
	.string "your protection.\p"
	.string "I know!\n"
	.string "Here, come with me!$"

PalletTown_Text_RaisingMonsToo::
# 565 "data/maps/PalletTown/scripts.pory"
	.string "I'm raising POKéMON, too.\p"
	.string "When they get strong, they can\n"
	.string "protect me.$"

PalletTown_Text_CanStoreItemsAndMonsInPC::
# 571 "data/maps/PalletTown/scripts.pory"
	.string "Technology is incredible!\p"
	.string "You can now store and recall items\n"
	.string "and POKéMON as data via PC.$"

PalletTown_Text_OakPokemonResearchLab::
# 577 "data/maps/PalletTown/scripts.pory"
	.string "OAK POKéMON RESEARCH LAB$"

PalletTown_Text_PlayersHouse::
# 581 "data/maps/PalletTown/scripts.pory"
	.string "{PLAYER}'s house$"

PalletTown_Text_RivalsHouse::
# 585 "data/maps/PalletTown/scripts.pory"
	.string "{RIVAL}'s house$"

PalletTown_Text_TownSign::
# 589 "data/maps/PalletTown/scripts.pory"
	.string "PALLET TOWN\n"
	.string "Shades of your journey await!$"

PalletTown_Text_OakLetMeSeePokedex::
# 594 "data/maps/PalletTown/scripts.pory"
	.string "OAK: Ah, {PLAYER}!\n"
	.string "You're back, are you?\p"
	.string "How much have you filled in your\n"
	.string "POKéDEX?\p"
	.string "May I see it?\p"
	.string "Let's see…$"

PalletTown_Text_CaughtXPuttingInHonestEffort::
# 603 "data/maps/PalletTown/scripts.pory"
	.string "You've caught {STR_VAR_2}…\p"
	.string "Hm, it looks as if you're putting\n"
	.string "in an honest effort.\p"
	.string "When you manage to fill it some\n"
	.string "more, come show me, please.$"

PalletTown_Text_CaughtXImpressiveFollowMe::
# 611 "data/maps/PalletTown/scripts.pory"
	.string "You've caught… {STR_VAR_2}!?\n"
	.string "Now, this is impressive!\p"
	.string "There's something I wanted to ask\n"
	.string "of you, {PLAYER}.\p"
	.string "Come.\n"
	.string "Follow me.$"

PalletTown_Text_OakYouEnjoyingTraveling::
# 620 "data/maps/PalletTown/scripts.pory"
	.string "OAK: Ah, {PLAYER}!\n"
	.string "You seem to be enjoying traveling.\p"
	.string "Knowing you, {PLAYER}, I can easily\n"
	.string "imagine you going out to even more\l"
	.string "exotic locales.\p"
	.string "Good for you, good for you.\n"
	.string "Hohoho.$"

PalletTown_Text_HmmIsThatRight::
# 632 "data/maps/PalletTown/scripts.pory"
	.string "Hmm…\n"
	.string "Is that right…$"

PalletTown_Text_OhLookLook::
# 637 "data/maps/PalletTown/scripts.pory"
	.string "Oh!\n"
	.string "Look, look!$"

PalletTown_Text_ReadItReadIt::
# 642 "data/maps/PalletTown/scripts.pory"
	.string "Read it, read it!$"

PalletTown_Text_PressStartToOpenMenu::
# 647 "data/maps/PalletTown/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "Press START to open the MENU!$"

PalletTown_Text_SignsAreUsefulArentThey::
# 652 "data/maps/PalletTown/scripts.pory"
	.string "Signs are useful, aren't they?$"

PalletTown_Text_LookCopiedTrainerTipsSign::
# 656 "data/maps/PalletTown/scripts.pory"
	.string "Look, look!\p"
	.string "I copied what it said on one of\n"
	.string "those TRAINER TIPS signs!$"

PalletTown_Text_PressStartToOpenMenuCopy::
# 663 "data/maps/PalletTown/scripts.pory"
	.string "TRAINER TIPS!\p"
	.string "Press START to open the MENU!$"
