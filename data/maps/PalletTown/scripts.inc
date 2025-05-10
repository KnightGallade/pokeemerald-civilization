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
	goto_if_unset FLAG_TEMP_A, PalletTown_EventScript_ReusableReturn
# 21 "data/maps/PalletTown/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, PalletTown_EventScript_ReusableReturn
# 22 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
	return


PalletTown_EventScript_ReusableReturn::
	return


PalletTown_EventScript_SetSignLadyDone::
# 31 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2
	return


PalletTown_EventScript_SetSignLadyPos::
# 36 "data/maps/PalletTown/scripts.pory"
	goto_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_MoveSignLadyToRouteEntrance
# 37 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm 1, 5, 15
# 38 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return


PalletTown_EventScript_MoveSignLadyToRouteEntrance::
# 43 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm 1, 12, 2
# 44 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 45 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_2, TRUE
	return


PalletTown_EventScript_OakRatingScene::
# 51 "data/maps/PalletTown/scripts.pory"
	lockall
# 52 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm 3, 14, 14
# 53 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
# 54 "data/maps/PalletTown/scripts.pory"
	addobject 3
# 55 "data/maps/PalletTown/scripts.pory"
	applymovement 3, PalletTown_Movement_OakWalkToPlayersDoor
# 56 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 59 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_NotBeenToOneIslandYet
# 60 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakLetMeSeePokedex
# 61 "data/maps/PalletTown/scripts.pory"
	setvar VAR_0x8004, 0
# 62 "data/maps/PalletTown/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 63 "data/maps/PalletTown/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 64 "data/maps/PalletTown/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 65 "data/maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 66 "data/maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 67 "data/maps/PalletTown/scripts.pory"
	goto_if_lt VAR_0x8009, 60, PalletTown_EventScript_NotEnoughMonsForNationalDex
# 68 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXImpressiveFollowMe
# 69 "data/maps/PalletTown/scripts.pory"
	closemessage
# 70 "data/maps/PalletTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 71 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabFromHouse
# 72 "data/maps/PalletTown/scripts.pory"
	applymovement 3, PalletTown_Movement_OakWalkToLabFromHouse
# 73 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 74 "data/maps/PalletTown/scripts.pory"
	opendoor 17, 13
# 75 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 76 "data/maps/PalletTown/scripts.pory"
	applymovement 3, PalletTown_Movement_OakEnterLab
# 77 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 78 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 79 "data/maps/PalletTown/scripts.pory"
	closedoor 17, 13
# 80 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 81 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7
# 82 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 83 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 84 "data/maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 85 "data/maps/PalletTown/scripts.pory"
	waitstate
# 86 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_EndOakRatingScene::
# 91 "data/maps/PalletTown/scripts.pory"
	closemessage
# 92 "data/maps/PalletTown/scripts.pory"
	applymovement 3, PalletTown_Movement_OakExit
# 93 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 94 "data/maps/PalletTown/scripts.pory"
	removeobject 3
# 95 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 96 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_NotEnoughMonsForNationalDex::
# 101 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXPuttingInHonestEffort
# 102 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
	end


PalletTown_EventScript_NotBeenToOneIslandYet::
# 107 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakYouEnjoyingTraveling
# 108 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
	end


# 112 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToPlayersDoor:
# 113 "data/maps/PalletTown/scripts.pory"
	walk_left
# 114 "data/maps/PalletTown/scripts.pory"
	walk_left
# 115 "data/maps/PalletTown/scripts.pory"
	walk_left
# 116 "data/maps/PalletTown/scripts.pory"
	walk_up
# 117 "data/maps/PalletTown/scripts.pory"
	walk_up
# 118 "data/maps/PalletTown/scripts.pory"
	walk_up
# 119 "data/maps/PalletTown/scripts.pory"
	walk_up
# 120 "data/maps/PalletTown/scripts.pory"
	walk_up
# 121 "data/maps/PalletTown/scripts.pory"
	walk_left
# 122 "data/maps/PalletTown/scripts.pory"
	walk_left
# 123 "data/maps/PalletTown/scripts.pory"
	walk_left
# 124 "data/maps/PalletTown/scripts.pory"
	walk_left
# 125 "data/maps/PalletTown/scripts.pory"
	walk_left
# 126 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 127 "data/maps/PalletTown/scripts.pory"
	step_end

# 130 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakExit:
# 131 "data/maps/PalletTown/scripts.pory"
	walk_right
# 132 "data/maps/PalletTown/scripts.pory"
	walk_right
# 133 "data/maps/PalletTown/scripts.pory"
	walk_right
# 134 "data/maps/PalletTown/scripts.pory"
	walk_right
# 135 "data/maps/PalletTown/scripts.pory"
	walk_right
# 136 "data/maps/PalletTown/scripts.pory"
	walk_down
# 137 "data/maps/PalletTown/scripts.pory"
	walk_down
# 138 "data/maps/PalletTown/scripts.pory"
	walk_down
# 139 "data/maps/PalletTown/scripts.pory"
	walk_down
# 140 "data/maps/PalletTown/scripts.pory"
	walk_down
# 141 "data/maps/PalletTown/scripts.pory"
	walk_right
# 142 "data/maps/PalletTown/scripts.pory"
	walk_right
# 143 "data/maps/PalletTown/scripts.pory"
	walk_right
# 144 "data/maps/PalletTown/scripts.pory"
	step_end

# 147 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabFromHouse:
# 148 "data/maps/PalletTown/scripts.pory"
	walk_right
# 149 "data/maps/PalletTown/scripts.pory"
	walk_right
# 150 "data/maps/PalletTown/scripts.pory"
	walk_right
# 151 "data/maps/PalletTown/scripts.pory"
	walk_right
# 152 "data/maps/PalletTown/scripts.pory"
	walk_right
# 153 "data/maps/PalletTown/scripts.pory"
	walk_down
# 154 "data/maps/PalletTown/scripts.pory"
	walk_down
# 155 "data/maps/PalletTown/scripts.pory"
	walk_down
# 156 "data/maps/PalletTown/scripts.pory"
	walk_down
# 157 "data/maps/PalletTown/scripts.pory"
	walk_down
# 158 "data/maps/PalletTown/scripts.pory"
	walk_right
# 159 "data/maps/PalletTown/scripts.pory"
	walk_right
# 160 "data/maps/PalletTown/scripts.pory"
	walk_right
# 161 "data/maps/PalletTown/scripts.pory"
	walk_right
# 162 "data/maps/PalletTown/scripts.pory"
	walk_right
# 163 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 164 "data/maps/PalletTown/scripts.pory"
	step_end

# 167 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabFromHouse:
# 168 "data/maps/PalletTown/scripts.pory"
	walk_down
# 169 "data/maps/PalletTown/scripts.pory"
	walk_right
# 170 "data/maps/PalletTown/scripts.pory"
	walk_right
# 171 "data/maps/PalletTown/scripts.pory"
	walk_right
# 172 "data/maps/PalletTown/scripts.pory"
	walk_right
# 173 "data/maps/PalletTown/scripts.pory"
	walk_right
# 174 "data/maps/PalletTown/scripts.pory"
	walk_down
# 175 "data/maps/PalletTown/scripts.pory"
	walk_down
# 176 "data/maps/PalletTown/scripts.pory"
	walk_down
# 177 "data/maps/PalletTown/scripts.pory"
	walk_down
# 178 "data/maps/PalletTown/scripts.pory"
	walk_down
# 179 "data/maps/PalletTown/scripts.pory"
	walk_right
# 180 "data/maps/PalletTown/scripts.pory"
	walk_right
# 181 "data/maps/PalletTown/scripts.pory"
	walk_right
# 182 "data/maps/PalletTown/scripts.pory"
	walk_right
# 183 "data/maps/PalletTown/scripts.pory"
	step_end

PalletTown_EventScript_OakTriggerLeft::
# 187 "data/maps/PalletTown/scripts.pory"
	lockall
# 188 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 0
# 189 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
	end


PalletTown_EventScript_OakTriggerRight::
# 194 "data/maps/PalletTown/scripts.pory"
	lockall
# 195 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 196 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
	end


PalletTown_EventScript_OakTrigger::
# 201 "data/maps/PalletTown/scripts.pory"
	delay 30
# 202 "data/maps/PalletTown/scripts.pory"
	playbgm MUS_RG_OAK, 0
# 203 "data/maps/PalletTown/scripts.pory"
	message PalletTown_Text_OakDontGoOut
# 204 "data/maps/PalletTown/scripts.pory"
	waitmessage
# 205 "data/maps/PalletTown/scripts.pory"
	delay 85
# 206 "data/maps/PalletTown/scripts.pory"
	closemessage
# 207 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 208 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 209 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 210 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 211 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 212 "data/maps/PalletTown/scripts.pory"
	delay 30
# 213 "data/maps/PalletTown/scripts.pory"
	addobject 3
# 214 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakEnterLeft
# 215 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakEnterRight
# 216 "data/maps/PalletTown/scripts.pory"
	delay 30
# 217 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakGrassUnsafeNeedMon
# 218 "data/maps/PalletTown/scripts.pory"
	closemessage
# 219 "data/maps/PalletTown/scripts.pory"
	delay 30
# 220 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakLeadPlayerToLabLeft
# 221 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakLeadPlayerToLabRight
# 222 "data/maps/PalletTown/scripts.pory"
	opendoor 17, 13
# 223 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 224 "data/maps/PalletTown/scripts.pory"
	applymovement 3, PalletTown_Movement_OakEnterLab
# 225 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 226 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 227 "data/maps/PalletTown/scripts.pory"
	closedoor 17, 13
# 228 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 229 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
# 230 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 231 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1
# 232 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 233 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 234 "data/maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 235 "data/maps/PalletTown/scripts.pory"
	waitstate
# 236 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_OakEnterLeft::
# 241 "data/maps/PalletTown/scripts.pory"
	applymovement 3, PalletTown_Movement_OakEnterLeft
# 242 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_OakEnterRight::
# 247 "data/maps/PalletTown/scripts.pory"
	applymovement 3, PalletTown_Movement_OakEnterRight
# 248 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_OakLeadPlayerToLabLeft::
# 253 "data/maps/PalletTown/scripts.pory"
	applymovement 3, PalletTown_Movement_OakWalkToLabLeft
# 254 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabLeft
# 255 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_OakLeadPlayerToLabRight::
# 260 "data/maps/PalletTown/scripts.pory"
	applymovement 3, PalletTown_Movement_OakWalkToLabRight
# 261 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabRight
# 262 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


# 265 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLeft:
# 266 "data/maps/PalletTown/scripts.pory"
	walk_up
# 267 "data/maps/PalletTown/scripts.pory"
	walk_up
# 268 "data/maps/PalletTown/scripts.pory"
	walk_right
# 269 "data/maps/PalletTown/scripts.pory"
	walk_up
# 270 "data/maps/PalletTown/scripts.pory"
	walk_up
# 271 "data/maps/PalletTown/scripts.pory"
	walk_right
# 272 "data/maps/PalletTown/scripts.pory"
	walk_up
# 273 "data/maps/PalletTown/scripts.pory"
	walk_up
# 274 "data/maps/PalletTown/scripts.pory"
	step_end

# 277 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterRight:
# 278 "data/maps/PalletTown/scripts.pory"
	walk_right
# 279 "data/maps/PalletTown/scripts.pory"
	walk_up
# 280 "data/maps/PalletTown/scripts.pory"
	walk_up
# 281 "data/maps/PalletTown/scripts.pory"
	walk_right
# 282 "data/maps/PalletTown/scripts.pory"
	walk_up
# 283 "data/maps/PalletTown/scripts.pory"
	walk_up
# 284 "data/maps/PalletTown/scripts.pory"
	walk_right
# 285 "data/maps/PalletTown/scripts.pory"
	walk_up
# 286 "data/maps/PalletTown/scripts.pory"
	walk_up
# 287 "data/maps/PalletTown/scripts.pory"
	step_end

# 290 "data/maps/PalletTown/scripts.pory"

# 291 "data/maps/PalletTown/scripts.pory"
	.macro walk_to_lab
# 292 "data/maps/PalletTown/scripts.pory"
	walk_left
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
	walk_down
# 301 "data/maps/PalletTown/scripts.pory"
	walk_down
# 302 "data/maps/PalletTown/scripts.pory"
	walk_down
# 303 "data/maps/PalletTown/scripts.pory"
	walk_down
# 304 "data/maps/PalletTown/scripts.pory"
	walk_right
# 305 "data/maps/PalletTown/scripts.pory"
	walk_right
# 306 "data/maps/PalletTown/scripts.pory"
	walk_right
# 307 "data/maps/PalletTown/scripts.pory"
	walk_right
# 308 "data/maps/PalletTown/scripts.pory"
	walk_right
# 309 "data/maps/PalletTown/scripts.pory"
	.endm

# 312 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabLeft:
# 313 "data/maps/PalletTown/scripts.pory"
	walk_down
# 314 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 315 "data/maps/PalletTown/scripts.pory"
	walk_right
# 316 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 317 "data/maps/PalletTown/scripts.pory"
	step_end

# 320 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabRight:
# 321 "data/maps/PalletTown/scripts.pory"
	walk_down
# 322 "data/maps/PalletTown/scripts.pory"
	walk_left
# 323 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 324 "data/maps/PalletTown/scripts.pory"
	walk_right
# 325 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 326 "data/maps/PalletTown/scripts.pory"
	step_end

# 329 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLab:
# 330 "data/maps/PalletTown/scripts.pory"
	walk_up
# 331 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 332 "data/maps/PalletTown/scripts.pory"
	step_end

# 335 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabLeft:
# 336 "data/maps/PalletTown/scripts.pory"
	walk_down
# 337 "data/maps/PalletTown/scripts.pory"
	walk_down
# 338 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 339 "data/maps/PalletTown/scripts.pory"
	step_end

# 342 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabRight:
# 343 "data/maps/PalletTown/scripts.pory"
	walk_down
# 344 "data/maps/PalletTown/scripts.pory"
	walk_down
# 345 "data/maps/PalletTown/scripts.pory"
	walk_left
# 346 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 347 "data/maps/PalletTown/scripts.pory"
	step_end

# 350 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerEnterLab:
# 351 "data/maps/PalletTown/scripts.pory"
	walk_right
# 352 "data/maps/PalletTown/scripts.pory"
	walk_up
# 353 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 354 "data/maps/PalletTown/scripts.pory"
	step_end

PalletTown_EventScript_SignLady::
# 358 "data/maps/PalletTown/scripts.pory"
	lock
# 359 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2, PalletTown_EventScript_SignLadyDone
# 360 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, PalletTown_EventScript_SignLadyJustShowedSign
# 361 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_TEMP_2, TRUE, PalletTown_EventScript_SignLadyStartShowSign
# 362 "data/maps/PalletTown/scripts.pory"
	goto_if_set FLAG_TEMP_2, PalletTown_EventScript_SignLadyGoReadSign
# 363 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_HmmIsThatRight
# 364 "data/maps/PalletTown/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 365 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 366 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 367 "data/maps/PalletTown/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 368 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 369 "data/maps/PalletTown/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 370 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 371 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OhLookLook
# 372 "data/maps/PalletTown/scripts.pory"
	closemessage
# 373 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayRight
# 374 "data/maps/PalletTown/scripts.pory"
	call_if_ne VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayLeft
# 375 "data/maps/PalletTown/scripts.pory"
	copyobjectxytoperm 1
# 376 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_TEMP_2
# 377 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_SignLadyMoveOutOfWayRight::
# 382 "data/maps/PalletTown/scripts.pory"
	applymovement 1, PalletTown_Movement_SignLadyMoveOutOfWayRight
# 383 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_SignLadyMoveOutOfWayLeft::
# 388 "data/maps/PalletTown/scripts.pory"
	applymovement 1, PalletTown_Movement_SignLadyMoveOutOfWayLeft
# 389 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_SignLadyDone::
# 394 "data/maps/PalletTown/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 395 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 396 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RaisingMonsToo
# 397 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_SignLadyGoReadSign::
# 402 "data/maps/PalletTown/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 403 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 404 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_ReadItReadIt
# 405 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_SignLadyJustShowedSign::
# 410 "data/maps/PalletTown/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 411 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 412 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_SignsAreUsefulArentThey
# 413 "data/maps/PalletTown/scripts.pory"
	release
	end


# 417 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayRight:
# 418 "data/maps/PalletTown/scripts.pory"
	walk_right
# 419 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_left
# 420 "data/maps/PalletTown/scripts.pory"
	step_end

# 423 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayLeft:
# 424 "data/maps/PalletTown/scripts.pory"
	walk_left
# 425 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_right
# 426 "data/maps/PalletTown/scripts.pory"
	step_end

PalletTown_EventScript_FatMan::
# 430 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CanStoreItemsAndMonsInPC, MSGBOX_NPC
	end


PalletTown_EventScript_OaksLabSign::
# 435 "data/maps/PalletTown/scripts.pory"
	lockall
# 436 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakPokemonResearchLab
# 437 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_PlayersHouseSign::
# 442 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PlayersHouse, MSGBOX_SIGN
	end


PalletTown_EventScript_RivalsHouseSign::
# 447 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RivalsHouse, MSGBOX_SIGN
	end


PalletTown_EventScript_TownSign::
# 452 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_TownSign, MSGBOX_SIGN
	end


PalletTown_EventScript_TrainerTips::
# 457 "data/maps/PalletTown/scripts.pory"
	lockall
# 458 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenu
# 459 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 460 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_SignLadyTrigger::
# 465 "data/maps/PalletTown/scripts.pory"
	lockall
# 466 "data/maps/PalletTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
# 467 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 468 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 469 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 470 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_SignLadyShowSign::
# 475 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_LookCopiedTrainerTipsSign
# 476 "data/maps/PalletTown/scripts.pory"
	closemessage
# 477 "data/maps/PalletTown/scripts.pory"
	delay 20
# 478 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_TEMP_A
# 479 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 480 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_2, FALSE
# 484 "data/maps/PalletTown/scripts.pory"
	signmsg
# 485 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenuCopy
# 486 "data/maps/PalletTown/scripts.pory"
	normalmsg
	return


PalletTown_EventScript_SignLadyStartShowSign::
# 491 "data/maps/PalletTown/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 492 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 493 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 494 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_Talk_To_Celebi::
# 499 "data/maps/PalletTown/scripts.pory"
	lockall
# 500 "data/maps/PalletTown/scripts.pory"
	applymovement 4, PalletTown_EventScript_Talk_To_Celebi_Movement_0
# 501 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_EventScript_Ask_Celebi, MSGBOX_YESNO
# 502 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_EventScript_Celebi_Back_In_Time
# 503 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_EventScript_Refuse_Celebi, MSGBOX_NPC
# 504 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_Celebi_Back_In_Time::
# 509 "data/maps/PalletTown/scripts.pory"
	fadenewbgm MUS_CAVE_OF_ORIGIN
# 510 "data/maps/PalletTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Accepted_Celebi, MSGBOX_NPC
# 511 "data/maps/PalletTown/scripts.pory"
	setvar VAR_RESULT, 2
# 512 "data/maps/PalletTown/scripts.pory"
	special DoOrbEffect
# 513 "data/maps/PalletTown/scripts.pory"
	lockall
# 514 "data/maps/PalletTown/scripts.pory"
	delay 150
# 515 "data/maps/PalletTown/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
# 516 "data/maps/PalletTown/scripts.pory"
	special FadeOutOrbEffect
# 517 "data/maps/PalletTown/scripts.pory"
	lockall
# 518 "data/maps/PalletTown/scripts.pory"
	delay 30
# 519 "data/maps/PalletTown/scripts.pory"
	waitmoncry
# 520 "data/maps/PalletTown/scripts.pory"
	playse SE_SHINY
# 521 "data/maps/PalletTown/scripts.pory"
	checkplayergender
# 522 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, PalletTown_EventScript_Celebi_Male
# 523 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, PalletTown_EventScript_Celebi_Female
	return


PalletTown_EventScript_Celebi_Male::
# 527 "data/maps/PalletTown/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 528 "data/maps/PalletTown/scripts.pory"
	warpteleport MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 1, 4
# 529 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_Celebi_Female::
# 534 "data/maps/PalletTown/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
# 535 "data/maps/PalletTown/scripts.pory"
	warpteleport MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 7, 4
# 536 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


# 500 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_Talk_To_Celebi_Movement_0:
# 500 "data/maps/PalletTown/scripts.pory"
	face_player
# 500 "data/maps/PalletTown/scripts.pory"
	emote_exclamation_mark
	step_end

PalletTown_EventScript_Ask_Celebi::
# 540 "data/maps/PalletTown/scripts.pory"
	.string "It appears Celebi wants you to \n"
	.string "follow it...\l"
	.string "Do you wish to go with Celebi?$"

PalletTown_EventScript_Refuse_Celebi::
# 546 "data/maps/PalletTown/scripts.pory"
	.string "Yeah, FireRed is pretty cool.$"

PalletTown_EventScript_Accepted_Celebi::
# 550 "data/maps/PalletTown/scripts.pory"
	.string "You enter a different reality...$"

PalletTown_Text_OakDontGoOut::
# 555 "data/maps/PalletTown/scripts.pory"
	.string "OAK: Hey! Wait!\n"
	.string "Don't go out!$"

PalletTown_Text_OakGrassUnsafeNeedMon::
# 560 "data/maps/PalletTown/scripts.pory"
	.string "OAK: It's unsafe!\n"
	.string "Wild POKéMON live in tall grass!\p"
	.string "You need your own POKéMON for\n"
	.string "your protection.\p"
	.string "I know!\n"
	.string "Here, come with me!$"

PalletTown_Text_RaisingMonsToo::
# 569 "data/maps/PalletTown/scripts.pory"
	.string "I'm raising POKéMON, too.\p"
	.string "When they get strong, they can\n"
	.string "protect me.$"

PalletTown_Text_CanStoreItemsAndMonsInPC::
# 575 "data/maps/PalletTown/scripts.pory"
	.string "Technology is incredible!\p"
	.string "You can now store and recall items\n"
	.string "and POKéMON as data via PC.$"

PalletTown_Text_OakPokemonResearchLab::
# 581 "data/maps/PalletTown/scripts.pory"
	.string "OAK POKéMON RESEARCH LAB$"

PalletTown_Text_PlayersHouse::
# 585 "data/maps/PalletTown/scripts.pory"
	.string "{PLAYER}'s house$"

PalletTown_Text_RivalsHouse::
# 589 "data/maps/PalletTown/scripts.pory"
	.string "{RIVAL}'s house$"

PalletTown_Text_TownSign::
# 593 "data/maps/PalletTown/scripts.pory"
	.string "PALLET TOWN\n"
	.string "Shades of your journey await!$"

PalletTown_Text_OakLetMeSeePokedex::
# 598 "data/maps/PalletTown/scripts.pory"
	.string "OAK: Ah, {PLAYER}!\n"
	.string "You're back, are you?\p"
	.string "How much have you filled in your\n"
	.string "POKéDEX?\p"
	.string "May I see it?\p"
	.string "Let's see…$"

PalletTown_Text_CaughtXPuttingInHonestEffort::
# 607 "data/maps/PalletTown/scripts.pory"
	.string "You've caught {STR_VAR_2}…\p"
	.string "Hm, it looks as if you're putting\n"
	.string "in an honest effort.\p"
	.string "When you manage to fill it some\n"
	.string "more, come show me, please.$"

PalletTown_Text_CaughtXImpressiveFollowMe::
# 615 "data/maps/PalletTown/scripts.pory"
	.string "You've caught… {STR_VAR_2}!?\n"
	.string "Now, this is impressive!\p"
	.string "There's something I wanted to ask\n"
	.string "of you, {PLAYER}.\p"
	.string "Come.\n"
	.string "Follow me.$"

PalletTown_Text_OakYouEnjoyingTraveling::
# 624 "data/maps/PalletTown/scripts.pory"
	.string "OAK: Ah, {PLAYER}!\n"
	.string "You seem to be enjoying traveling.\p"
	.string "Knowing you, {PLAYER}, I can easily\n"
	.string "imagine you going out to even more\l"
	.string "exotic locales.\p"
	.string "Good for you, good for you.\n"
	.string "Hohoho.$"

PalletTown_Text_HmmIsThatRight::
# 636 "data/maps/PalletTown/scripts.pory"
	.string "Hmm…\n"
	.string "Is that right…$"

PalletTown_Text_OhLookLook::
# 641 "data/maps/PalletTown/scripts.pory"
	.string "Oh!\n"
	.string "Look, look!$"

PalletTown_Text_ReadItReadIt::
# 646 "data/maps/PalletTown/scripts.pory"
	.string "Read it, read it!$"

PalletTown_Text_PressStartToOpenMenu::
# 651 "data/maps/PalletTown/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "Press START to open the MENU!$"

PalletTown_Text_SignsAreUsefulArentThey::
# 656 "data/maps/PalletTown/scripts.pory"
	.string "Signs are useful, aren't they?$"

PalletTown_Text_LookCopiedTrainerTipsSign::
# 660 "data/maps/PalletTown/scripts.pory"
	.string "Look, look!\p"
	.string "I copied what it said on one of\n"
	.string "those TRAINER TIPS signs!$"

PalletTown_Text_PressStartToOpenMenuCopy::
# 667 "data/maps/PalletTown/scripts.pory"
	.string "TRAINER TIPS!\p"
	.string "Press START to open the MENU!$"
