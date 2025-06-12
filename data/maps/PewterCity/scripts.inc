PewterCity_MapScripts::
# 2 "data/maps/PewterCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_OnTransition
	.byte 0


PewterCity_OnTransition::
# 6 "data/maps/PewterCity/scripts.pory"
	setflag FLAG_VISITED_PEWTER_CITY
# 7 "data/maps/PewterCity/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY_MUSEUM_1F, 0
	end


PewterCity_EventScript_GymGuide::
# 14 "data/maps/PewterCity/scripts.pory"
	lock
# 15 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 16 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_BrocksLookingForChallengersFollowMe
# 17 "data/maps/PewterCity/scripts.pory"
	closemessage
# 18 "data/maps/PewterCity/scripts.pory"
	playbgm MUS_RG_FOLLOW_ME, 0
# 19 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PewterCity_EventScript_WalkToGymEast
# 20 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_GoTakeOnBrock
# 21 "data/maps/PewterCity/scripts.pory"
	closemessage
# 22 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GymGuideExit
# 23 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 24 "data/maps/PewterCity/scripts.pory"
	fadedefaultbgm
# 25 "data/maps/PewterCity/scripts.pory"
	removeobject LOCALID_PEWTER_GYM_GUIDE
# 26 "data/maps/PewterCity/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 27 "data/maps/PewterCity/scripts.pory"
	release
	end


PewterCity_EventScript_WalkToGymEast::
# 32 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWaitForGuideEast
# 33 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadEast
# 34 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 35 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToGymEast
# 36 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymEast
# 37 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


# 41 "data/maps/PewterCity/scripts.pory"

# 42 "data/maps/PewterCity/scripts.pory"
.macro walk_to_gym
# 43 "data/maps/PewterCity/scripts.pory"
	walk_left
# 44 "data/maps/PewterCity/scripts.pory"
	walk_left
# 45 "data/maps/PewterCity/scripts.pory"
	walk_left
# 46 "data/maps/PewterCity/scripts.pory"
	walk_up
# 47 "data/maps/PewterCity/scripts.pory"
	walk_left
# 48 "data/maps/PewterCity/scripts.pory"
	walk_left
# 49 "data/maps/PewterCity/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity/scripts.pory"
	walk_left
# 51 "data/maps/PewterCity/scripts.pory"
	walk_left
# 52 "data/maps/PewterCity/scripts.pory"
	walk_left
# 53 "data/maps/PewterCity/scripts.pory"
	walk_left
# 54 "data/maps/PewterCity/scripts.pory"
	walk_left
# 55 "data/maps/PewterCity/scripts.pory"
	walk_left
# 56 "data/maps/PewterCity/scripts.pory"
	walk_left
# 57 "data/maps/PewterCity/scripts.pory"
	walk_left
# 58 "data/maps/PewterCity/scripts.pory"
	walk_left
# 59 "data/maps/PewterCity/scripts.pory"
	walk_left
# 60 "data/maps/PewterCity/scripts.pory"
	walk_left
# 61 "data/maps/PewterCity/scripts.pory"
	walk_left
# 62 "data/maps/PewterCity/scripts.pory"
	walk_up
# 63 "data/maps/PewterCity/scripts.pory"
	walk_up
# 64 "data/maps/PewterCity/scripts.pory"
	walk_up
# 65 "data/maps/PewterCity/scripts.pory"
	walk_up
# 66 "data/maps/PewterCity/scripts.pory"
	walk_up
# 67 "data/maps/PewterCity/scripts.pory"
	walk_up
# 68 "data/maps/PewterCity/scripts.pory"
	walk_up
# 69 "data/maps/PewterCity/scripts.pory"
	walk_up
# 70 "data/maps/PewterCity/scripts.pory"
	walk_up
# 71 "data/maps/PewterCity/scripts.pory"
	walk_up
# 72 "data/maps/PewterCity/scripts.pory"
	walk_left
# 73 "data/maps/PewterCity/scripts.pory"
	walk_left
# 74 "data/maps/PewterCity/scripts.pory"
	walk_left
# 75 "data/maps/PewterCity/scripts.pory"
	walk_left
# 76 "data/maps/PewterCity/scripts.pory"
	walk_left
# 77 "data/maps/PewterCity/scripts.pory"
	walk_left
# 78 "data/maps/PewterCity/scripts.pory"
	walk_left
# 79 "data/maps/PewterCity/scripts.pory"
	walk_left
# 80 "data/maps/PewterCity/scripts.pory"
	walk_left
# 81 "data/maps/PewterCity/scripts.pory"
	walk_left
# 82 "data/maps/PewterCity/scripts.pory"
	walk_left
# 83 "data/maps/PewterCity/scripts.pory"
	walk_left
# 84 "data/maps/PewterCity/scripts.pory"
	walk_left
# 85 "data/maps/PewterCity/scripts.pory"
	walk_left
# 86 "data/maps/PewterCity/scripts.pory"
	walk_left
# 87 "data/maps/PewterCity/scripts.pory"
	walk_left
# 88 "data/maps/PewterCity/scripts.pory"
	walk_down
# 89 "data/maps/PewterCity/scripts.pory"
	walk_down
# 90 "data/maps/PewterCity/scripts.pory"
	walk_down
# 91 "data/maps/PewterCity/scripts.pory"
	walk_down
# 92 "data/maps/PewterCity/scripts.pory"
	walk_down
# 93 "data/maps/PewterCity/scripts.pory"
	walk_down
# 94 "data/maps/PewterCity/scripts.pory"
	walk_down
# 95 "data/maps/PewterCity/scripts.pory"
	walk_down
# 96 "data/maps/PewterCity/scripts.pory"
	walk_right
# 97 "data/maps/PewterCity/scripts.pory"
	walk_right
# 98 "data/maps/PewterCity/scripts.pory"
	walk_right
# 99 "data/maps/PewterCity/scripts.pory"
	walk_right
# 100 "data/maps/PewterCity/scripts.pory"
	walk_right
# 101 "data/maps/PewterCity/scripts.pory"
	walk_right
# 102 "data/maps/PewterCity/scripts.pory"
	walk_right
# 103 "data/maps/PewterCity/scripts.pory"
	walk_right
# 104 "data/maps/PewterCity/scripts.pory"
.endm
# 105 "data/maps/PewterCity/scripts.pory"

# 106 "data/maps/PewterCity/scripts.pory"
.macro walk_to_gym_alt
# 107 "data/maps/PewterCity/scripts.pory"
	walk_left
# 108 "data/maps/PewterCity/scripts.pory"
	walk_left
# 109 "data/maps/PewterCity/scripts.pory"
	walk_left
# 110 "data/maps/PewterCity/scripts.pory"
	walk_left
# 111 "data/maps/PewterCity/scripts.pory"
	walk_left
# 112 "data/maps/PewterCity/scripts.pory"
	walk_left
# 113 "data/maps/PewterCity/scripts.pory"
	walk_left
# 114 "data/maps/PewterCity/scripts.pory"
	walk_left
# 115 "data/maps/PewterCity/scripts.pory"
	walk_left
# 116 "data/maps/PewterCity/scripts.pory"
	walk_left
# 117 "data/maps/PewterCity/scripts.pory"
	walk_left
# 118 "data/maps/PewterCity/scripts.pory"
	walk_left
# 119 "data/maps/PewterCity/scripts.pory"
	walk_left
# 120 "data/maps/PewterCity/scripts.pory"
	walk_left
# 121 "data/maps/PewterCity/scripts.pory"
	walk_left
# 122 "data/maps/PewterCity/scripts.pory"
	walk_up
# 123 "data/maps/PewterCity/scripts.pory"
	walk_up
# 124 "data/maps/PewterCity/scripts.pory"
	walk_up
# 125 "data/maps/PewterCity/scripts.pory"
	walk_up
# 126 "data/maps/PewterCity/scripts.pory"
	walk_up
# 127 "data/maps/PewterCity/scripts.pory"
	walk_up
# 128 "data/maps/PewterCity/scripts.pory"
	walk_up
# 129 "data/maps/PewterCity/scripts.pory"
	walk_left
# 130 "data/maps/PewterCity/scripts.pory"
	walk_left
# 131 "data/maps/PewterCity/scripts.pory"
	walk_left
# 132 "data/maps/PewterCity/scripts.pory"
	walk_left
# 133 "data/maps/PewterCity/scripts.pory"
	walk_left
# 134 "data/maps/PewterCity/scripts.pory"
	walk_left
# 135 "data/maps/PewterCity/scripts.pory"
	walk_left
# 136 "data/maps/PewterCity/scripts.pory"
	walk_left
# 137 "data/maps/PewterCity/scripts.pory"
	walk_left
# 138 "data/maps/PewterCity/scripts.pory"
	walk_left
# 139 "data/maps/PewterCity/scripts.pory"
	walk_down
# 140 "data/maps/PewterCity/scripts.pory"
	walk_down
# 141 "data/maps/PewterCity/scripts.pory"
	walk_down
# 142 "data/maps/PewterCity/scripts.pory"
	walk_down
# 143 "data/maps/PewterCity/scripts.pory"
	walk_down
# 144 "data/maps/PewterCity/scripts.pory"
	walk_down
# 145 "data/maps/PewterCity/scripts.pory"
	walk_right
# 146 "data/maps/PewterCity/scripts.pory"
.endm

# 149 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideEast:
# 150 "data/maps/PewterCity/scripts.pory"
	delay_16
# 151 "data/maps/PewterCity/scripts.pory"
	delay_16
# 152 "data/maps/PewterCity/scripts.pory"
	delay_4
# 153 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_down
# 154 "data/maps/PewterCity/scripts.pory"
	step_end

# 157 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymEast:
# 158 "data/maps/PewterCity/scripts.pory"
	walk_down
# 159 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 160 "data/maps/PewterCity/scripts.pory"
	step_end

# 163 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideWest:
# 164 "data/maps/PewterCity/scripts.pory"
	delay_16
# 165 "data/maps/PewterCity/scripts.pory"
	step_end

# 168 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymWest:
# 169 "data/maps/PewterCity/scripts.pory"
	walk_left
# 170 "data/maps/PewterCity/scripts.pory"
	walk_left
# 171 "data/maps/PewterCity/scripts.pory"
	walk_left
# 172 "data/maps/PewterCity/scripts.pory"
	walk_left
# 173 "data/maps/PewterCity/scripts.pory"
	walk_left
# 174 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 175 "data/maps/PewterCity/scripts.pory"
	step_end

# 178 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideNorth:
# 179 "data/maps/PewterCity/scripts.pory"
	delay_16
# 180 "data/maps/PewterCity/scripts.pory"
	step_end

# 183 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymNorth:
# 184 "data/maps/PewterCity/scripts.pory"
	walk_up
# 185 "data/maps/PewterCity/scripts.pory"
	walk_left
# 186 "data/maps/PewterCity/scripts.pory"
	walk_left
# 187 "data/maps/PewterCity/scripts.pory"
	walk_left
# 188 "data/maps/PewterCity/scripts.pory"
	walk_left
# 189 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 190 "data/maps/PewterCity/scripts.pory"
	step_end

# 193 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadEast:
# 194 "data/maps/PewterCity/scripts.pory"
	walk_down
# 195 "data/maps/PewterCity/scripts.pory"
	walk_left
# 196 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 197 "data/maps/PewterCity/scripts.pory"
	walk_in_place_up
# 198 "data/maps/PewterCity/scripts.pory"
	step_end

# 201 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymEast:
# 202 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 203 "data/maps/PewterCity/scripts.pory"
	walk_right
# 204 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 205 "data/maps/PewterCity/scripts.pory"
	step_end

# 208 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadWest:
# 209 "data/maps/PewterCity/scripts.pory"
	walk_in_place_right
# 210 "data/maps/PewterCity/scripts.pory"
	step_end

# 213 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymWest:
# 214 "data/maps/PewterCity/scripts.pory"
	walk_left
# 215 "data/maps/PewterCity/scripts.pory"
	walk_left
# 216 "data/maps/PewterCity/scripts.pory"
	walk_left
# 217 "data/maps/PewterCity/scripts.pory"
	walk_left
# 218 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 219 "data/maps/PewterCity/scripts.pory"
	walk_right
# 220 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 221 "data/maps/PewterCity/scripts.pory"
	step_end

# 224 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadNorth:
# 225 "data/maps/PewterCity/scripts.pory"
	walk_in_place_down
# 226 "data/maps/PewterCity/scripts.pory"
	step_end

# 229 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymNorth:
# 230 "data/maps/PewterCity/scripts.pory"
	walk_left
# 231 "data/maps/PewterCity/scripts.pory"
	walk_left
# 232 "data/maps/PewterCity/scripts.pory"
	walk_left
# 233 "data/maps/PewterCity/scripts.pory"
	walk_left
# 234 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 235 "data/maps/PewterCity/scripts.pory"
	walk_right
# 236 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 237 "data/maps/PewterCity/scripts.pory"
	step_end

# 240 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GymGuideExit:
# 241 "data/maps/PewterCity/scripts.pory"
	walk_down
# 242 "data/maps/PewterCity/scripts.pory"
	walk_left
# 243 "data/maps/PewterCity/scripts.pory"
	walk_left
# 244 "data/maps/PewterCity/scripts.pory"
	walk_left
# 245 "data/maps/PewterCity/scripts.pory"
	walk_left
# 246 "data/maps/PewterCity/scripts.pory"
	walk_left
# 247 "data/maps/PewterCity/scripts.pory"
	walk_left
# 248 "data/maps/PewterCity/scripts.pory"
	walk_left
# 249 "data/maps/PewterCity/scripts.pory"
	walk_left
# 250 "data/maps/PewterCity/scripts.pory"
	walk_left
# 251 "data/maps/PewterCity/scripts.pory"
	step_end

PewterCity_EventScript_GymGuideTriggerTop::
# 255 "data/maps/PewterCity/scripts.pory"
	lockall
# 256 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 257 "data/maps/PewterCity/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
	end


PewterCity_EventScript_GymGuideTriggerMid::
# 262 "data/maps/PewterCity/scripts.pory"
	lockall
# 263 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 264 "data/maps/PewterCity/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
	end


PewterCity_EventScript_GymGuideTriggerBottom::
# 269 "data/maps/PewterCity/scripts.pory"
	lockall
# 270 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 271 "data/maps/PewterCity/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
	end


PewterCity_EventScript_GymGuideTrigger::
# 276 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_BrocksLookingForChallengersFollowMe
# 277 "data/maps/PewterCity/scripts.pory"
	closemessage
# 278 "data/maps/PewterCity/scripts.pory"
	playbgm MUS_RG_FOLLOW_ME, 0
# 279 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_EventScript_WalkToGymTop
# 280 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_WalkToGymMid
# 281 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_WalkToGymBottom
# 282 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_GoTakeOnBrock
# 283 "data/maps/PewterCity/scripts.pory"
	closemessage
# 284 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GymGuideExit
# 285 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 286 "data/maps/PewterCity/scripts.pory"
	fadedefaultbgm
# 287 "data/maps/PewterCity/scripts.pory"
	removeobject LOCALID_PEWTER_GYM_GUIDE
# 288 "data/maps/PewterCity/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 289 "data/maps/PewterCity/scripts.pory"
	releaseall
	end


PewterCity_EventScript_WalkToGymTop::
# 294 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadTop
# 295 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 296 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToGymTop
# 297 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymTop
# 298 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_WalkToGymMid::
# 303 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadMid
# 304 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 305 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToGymMid
# 306 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymMid
# 307 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_WalkToGymBottom::
# 312 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadBottom
# 313 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 314 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToGymBottom
# 315 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymBottom
# 316 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


# 320 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymTop:
# 321 "data/maps/PewterCity/scripts.pory"
	walk_left
# 322 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 323 "data/maps/PewterCity/scripts.pory"
	step_end

# 326 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymMid:
# 327 "data/maps/PewterCity/scripts.pory"
	walk_up
# 328 "data/maps/PewterCity/scripts.pory"
	walk_left
# 329 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 330 "data/maps/PewterCity/scripts.pory"
	step_end

# 333 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymBottom:
# 334 "data/maps/PewterCity/scripts.pory"
	walk_up
# 335 "data/maps/PewterCity/scripts.pory"
	walk_up
# 336 "data/maps/PewterCity/scripts.pory"
	walk_left
# 337 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 338 "data/maps/PewterCity/scripts.pory"
	step_end

# 341 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymRight:
# 342 "data/maps/PewterCity/scripts.pory"
	walk_left
# 343 "data/maps/PewterCity/scripts.pory"
	walk_left
# 344 "data/maps/PewterCity/scripts.pory"
	walk_left
# 345 "data/maps/PewterCity/scripts.pory"
	walk_left
# 346 "data/maps/PewterCity/scripts.pory"
	walk_up
# 347 "data/maps/PewterCity/scripts.pory"
	walk_left
# 348 "data/maps/PewterCity/scripts.pory"
	walk_left
# 349 "data/maps/PewterCity/scripts.pory"
	walk_left
# 350 "data/maps/PewterCity/scripts.pory"
	walk_up
# 351 "data/maps/PewterCity/scripts.pory"
	walk_up
# 352 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 353 "data/maps/PewterCity/scripts.pory"
	step_end

# 356 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadTop:
# 357 "data/maps/PewterCity/scripts.pory"
	walk_left
# 358 "data/maps/PewterCity/scripts.pory"
	walk_down
# 359 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_right
# 360 "data/maps/PewterCity/scripts.pory"
	walk_in_place_right
# 361 "data/maps/PewterCity/scripts.pory"
	step_end

# 364 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadMid:
# 365 "data/maps/PewterCity/scripts.pory"
	walk_down
# 366 "data/maps/PewterCity/scripts.pory"
	walk_in_place_down
# 367 "data/maps/PewterCity/scripts.pory"
	step_end

# 370 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadBottom:
# 371 "data/maps/PewterCity/scripts.pory"
	walk_down
# 372 "data/maps/PewterCity/scripts.pory"
	walk_down
# 373 "data/maps/PewterCity/scripts.pory"
	walk_in_place_down
# 374 "data/maps/PewterCity/scripts.pory"
	step_end

# 377 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideApproachPlayerRight:
# 378 "data/maps/PewterCity/scripts.pory"
	walk_down
# 379 "data/maps/PewterCity/scripts.pory"
	walk_down
# 380 "data/maps/PewterCity/scripts.pory"
	walk_right
# 381 "data/maps/PewterCity/scripts.pory"
	walk_down
# 382 "data/maps/PewterCity/scripts.pory"
	walk_right
# 383 "data/maps/PewterCity/scripts.pory"
	walk_in_place_right
# 384 "data/maps/PewterCity/scripts.pory"
	step_end

# 387 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymTop:
# 388 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 389 "data/maps/PewterCity/scripts.pory"
	walk_right
# 390 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 391 "data/maps/PewterCity/scripts.pory"
	step_end

# 394 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymMid:
# 395 "data/maps/PewterCity/scripts.pory"
	walk_left
# 396 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 397 "data/maps/PewterCity/scripts.pory"
	walk_right
# 398 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 399 "data/maps/PewterCity/scripts.pory"
	step_end

# 402 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymBottom:
# 403 "data/maps/PewterCity/scripts.pory"
	walk_up
# 404 "data/maps/PewterCity/scripts.pory"
	walk_left
# 405 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 406 "data/maps/PewterCity/scripts.pory"
	walk_right
# 407 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 408 "data/maps/PewterCity/scripts.pory"
	step_end

# 411 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymRight:
# 412 "data/maps/PewterCity/scripts.pory"
	walk_left
# 413 "data/maps/PewterCity/scripts.pory"
	walk_left
# 414 "data/maps/PewterCity/scripts.pory"
	walk_left
# 415 "data/maps/PewterCity/scripts.pory"
	walk_up
# 416 "data/maps/PewterCity/scripts.pory"
	walk_left
# 417 "data/maps/PewterCity/scripts.pory"
	walk_left
# 418 "data/maps/PewterCity/scripts.pory"
	walk_left
# 419 "data/maps/PewterCity/scripts.pory"
	walk_up
# 420 "data/maps/PewterCity/scripts.pory"
	walk_up
# 421 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 422 "data/maps/PewterCity/scripts.pory"
	walk_right
# 423 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 424 "data/maps/PewterCity/scripts.pory"
	step_end

PewterCity_EventScript_Lass::
# 428 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ClefairyCameFromMoon, MSGBOX_NPC
	end


PewterCity_EventScript_MuseumGuide::
# 433 "data/maps/PewterCity/scripts.pory"
	lock
# 434 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 435 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_DidYouCheckOutMuseum, MSGBOX_YESNO
# 436 "data/maps/PewterCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_EventScript_CheckedOutMuseum
# 437 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ReallyYouHaveToGo
# 438 "data/maps/PewterCity/scripts.pory"
	closemessage
# 439 "data/maps/PewterCity/scripts.pory"
	delay 10
# 440 "data/maps/PewterCity/scripts.pory"
	playbgm MUS_RG_FOLLOW_ME, 0
# 441 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PewterCity_EventScript_LeadToMuseumNorth
# 442 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PewterCity_EventScript_LeadToMuseumSouth
# 443 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PewterCity_EventScript_LeadToMuseumWest
# 444 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PewterCity_EventScript_LeadToMuseumEast
# 445 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ThisIsTheMuseum
# 446 "data/maps/PewterCity/scripts.pory"
	closemessage
# 447 "data/maps/PewterCity/scripts.pory"
	delay 10
# 448 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_MuseumGuideExit
# 449 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 450 "data/maps/PewterCity/scripts.pory"
	fadedefaultbgm
# 451 "data/maps/PewterCity/scripts.pory"
	removeobject LOCALID_PEWTER_MUSEUM_GUIDE
# 452 "data/maps/PewterCity/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_MUSEUM_GUIDE
# 453 "data/maps/PewterCity/scripts.pory"
	release
	end


PewterCity_EventScript_LeadToMuseumNorth::
# 458 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumNorth
# 459 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumNorth
# 460 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_LeadToMuseumSouth::
# 465 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumSouth
# 466 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumSouth
# 467 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_LeadToMuseumWest::
# 472 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumWest
# 473 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumWest
# 474 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_LeadToMuseumEast::
# 479 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumEast
# 480 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumEast
# 481 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_CheckedOutMuseum::
# 486 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_WerentThoseFossilsAmazing
# 487 "data/maps/PewterCity/scripts.pory"
	release
	end


# 491 "data/maps/PewterCity/scripts.pory"

# 492 "data/maps/PewterCity/scripts.pory"
.macro walk_to_museum
# 493 "data/maps/PewterCity/scripts.pory"
	walk_up
# 494 "data/maps/PewterCity/scripts.pory"
	walk_up
# 495 "data/maps/PewterCity/scripts.pory"
	walk_up
# 496 "data/maps/PewterCity/scripts.pory"
	walk_up
# 497 "data/maps/PewterCity/scripts.pory"
	walk_left
# 498 "data/maps/PewterCity/scripts.pory"
	walk_left
# 499 "data/maps/PewterCity/scripts.pory"
	walk_left
# 500 "data/maps/PewterCity/scripts.pory"
	walk_left
# 501 "data/maps/PewterCity/scripts.pory"
	walk_left
# 502 "data/maps/PewterCity/scripts.pory"
	walk_left
# 503 "data/maps/PewterCity/scripts.pory"
	walk_left
# 504 "data/maps/PewterCity/scripts.pory"
	walk_left
# 505 "data/maps/PewterCity/scripts.pory"
	walk_left
# 506 "data/maps/PewterCity/scripts.pory"
	walk_left
# 507 "data/maps/PewterCity/scripts.pory"
	walk_up
# 508 "data/maps/PewterCity/scripts.pory"
	walk_up
# 509 "data/maps/PewterCity/scripts.pory"
	walk_up
# 510 "data/maps/PewterCity/scripts.pory"
	walk_up
# 511 "data/maps/PewterCity/scripts.pory"
	walk_left
# 512 "data/maps/PewterCity/scripts.pory"
	walk_left
# 513 "data/maps/PewterCity/scripts.pory"
	walk_left
# 514 "data/maps/PewterCity/scripts.pory"
	walk_left
# 515 "data/maps/PewterCity/scripts.pory"
	walk_left
# 516 "data/maps/PewterCity/scripts.pory"
	walk_left
# 517 "data/maps/PewterCity/scripts.pory"
.endm
# 518 "data/maps/PewterCity/scripts.pory"

# 519 "data/maps/PewterCity/scripts.pory"
.macro walk_to_museum_south
# 520 "data/maps/PewterCity/scripts.pory"
	walk_up
# 521 "data/maps/PewterCity/scripts.pory"
	walk_up
# 522 "data/maps/PewterCity/scripts.pory"
	walk_up
# 523 "data/maps/PewterCity/scripts.pory"
	walk_left
# 524 "data/maps/PewterCity/scripts.pory"
	walk_left
# 525 "data/maps/PewterCity/scripts.pory"
	walk_left
# 526 "data/maps/PewterCity/scripts.pory"
	walk_left
# 527 "data/maps/PewterCity/scripts.pory"
	walk_left
# 528 "data/maps/PewterCity/scripts.pory"
	walk_left
# 529 "data/maps/PewterCity/scripts.pory"
	walk_left
# 530 "data/maps/PewterCity/scripts.pory"
	walk_left
# 531 "data/maps/PewterCity/scripts.pory"
	walk_left
# 532 "data/maps/PewterCity/scripts.pory"
	walk_up
# 533 "data/maps/PewterCity/scripts.pory"
	walk_up
# 534 "data/maps/PewterCity/scripts.pory"
	walk_up
# 535 "data/maps/PewterCity/scripts.pory"
	walk_up
# 536 "data/maps/PewterCity/scripts.pory"
	walk_left
# 537 "data/maps/PewterCity/scripts.pory"
	walk_left
# 538 "data/maps/PewterCity/scripts.pory"
	walk_left
# 539 "data/maps/PewterCity/scripts.pory"
	walk_left
# 540 "data/maps/PewterCity/scripts.pory"
	walk_left
# 541 "data/maps/PewterCity/scripts.pory"
	walk_left
# 542 "data/maps/PewterCity/scripts.pory"
.endm

# 545 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumNorth:
# 546 "data/maps/PewterCity/scripts.pory"
	walk_up
# 547 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 548 "data/maps/PewterCity/scripts.pory"
	delay_8
# 549 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 550 "data/maps/PewterCity/scripts.pory"
	step_end

# 553 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumNorth:
# 554 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 555 "data/maps/PewterCity/scripts.pory"
	walk_left
# 556 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 557 "data/maps/PewterCity/scripts.pory"
	step_end

# 560 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumSouth:
# 561 "data/maps/PewterCity/scripts.pory"
	delay_16
# 562 "data/maps/PewterCity/scripts.pory"
	delay_16
# 563 "data/maps/PewterCity/scripts.pory"
	walk_left
# 564 "data/maps/PewterCity/scripts.pory"
	walk_to_museum_south
# 565 "data/maps/PewterCity/scripts.pory"
	delay_8
# 566 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 567 "data/maps/PewterCity/scripts.pory"
	step_end

# 570 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumSouth:
# 571 "data/maps/PewterCity/scripts.pory"
	walk_left
# 572 "data/maps/PewterCity/scripts.pory"
	walk_up
# 573 "data/maps/PewterCity/scripts.pory"
	walk_to_museum_south
# 574 "data/maps/PewterCity/scripts.pory"
	walk_left
# 575 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 576 "data/maps/PewterCity/scripts.pory"
	step_end

# 579 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumWest:
# 580 "data/maps/PewterCity/scripts.pory"
	walk_left
# 581 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 582 "data/maps/PewterCity/scripts.pory"
	delay_8
# 583 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 584 "data/maps/PewterCity/scripts.pory"
	step_end

# 587 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumWest:
# 588 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 589 "data/maps/PewterCity/scripts.pory"
	walk_left
# 590 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 591 "data/maps/PewterCity/scripts.pory"
	step_end

# 594 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumEast:
# 595 "data/maps/PewterCity/scripts.pory"
	walk_right
# 596 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 597 "data/maps/PewterCity/scripts.pory"
	delay_8
# 598 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 599 "data/maps/PewterCity/scripts.pory"
	step_end

# 602 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumEast:
# 603 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 604 "data/maps/PewterCity/scripts.pory"
	walk_left
# 605 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 606 "data/maps/PewterCity/scripts.pory"
	step_end

# 609 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_MuseumGuideExit:
# 610 "data/maps/PewterCity/scripts.pory"
	walk_down
# 611 "data/maps/PewterCity/scripts.pory"
	walk_right
# 612 "data/maps/PewterCity/scripts.pory"
	walk_right
# 613 "data/maps/PewterCity/scripts.pory"
	walk_right
# 614 "data/maps/PewterCity/scripts.pory"
	walk_right
# 615 "data/maps/PewterCity/scripts.pory"
	walk_right
# 616 "data/maps/PewterCity/scripts.pory"
	walk_right
# 617 "data/maps/PewterCity/scripts.pory"
	walk_right
# 618 "data/maps/PewterCity/scripts.pory"
	walk_down
# 619 "data/maps/PewterCity/scripts.pory"
	walk_down
# 620 "data/maps/PewterCity/scripts.pory"
	walk_down
# 621 "data/maps/PewterCity/scripts.pory"
	walk_right
# 622 "data/maps/PewterCity/scripts.pory"
	walk_right
# 623 "data/maps/PewterCity/scripts.pory"
	walk_right
# 624 "data/maps/PewterCity/scripts.pory"
	step_end

PewterCity_EventScript_FatMan::
# 628 "data/maps/PewterCity/scripts.pory"
	lock
# 629 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 630 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_BrockOnlySeriousTrainerHere
# 631 "data/maps/PewterCity/scripts.pory"
	release
	end


PewterCity_EventScript_BugCatcher::
# 636 "data/maps/PewterCity/scripts.pory"
	lock
# 637 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 638 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_DoYouKnowWhatImDoing, MSGBOX_YESNO
# 639 "data/maps/PewterCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_EventScript_KnowWhatTheyreDoing
# 640 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_SprayingRepelToKeepWildMonsOut
# 641 "data/maps/PewterCity/scripts.pory"
	release
	end


PewterCity_EventScript_KnowWhatTheyreDoing::
# 646 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ThatsRightItsHardWork
# 647 "data/maps/PewterCity/scripts.pory"
	release
	end


PewterCity_EventScript_TrainerTips::
# 652 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_TrainerTipsEarningEXP, MSGBOX_SIGN
	end


PewterCity_EventScript_PoliceNotice::
# 657 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_CallPoliceIfInfoOnThieves, MSGBOX_SIGN
	end


PewterCity_EventScript_MuseumSign::
# 662 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_MuseumOfScience, MSGBOX_SIGN
	end


PewterCity_EventScript_GymSign::
# 667 "data/maps/PewterCity/scripts.pory"
	lockall
# 668 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_GymSign
# 669 "data/maps/PewterCity/scripts.pory"
	releaseall
	end


PewterCity_EventScript_CitySign::
# 674 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_CitySign, MSGBOX_SIGN
	end


PewterCity_EventScript_RunningShoesAide::
# 680 "data/maps/PewterCity/scripts.pory"
	lock
# 681 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 682 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 683 "data/maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 684 "data/maps/PewterCity/scripts.pory"
	release
	end


PewterCity_EventScript_RunningShoesAideTriggerTop::
# 689 "data/maps/PewterCity/scripts.pory"
	lockall
# 690 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 691 "data/maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 692 "data/maps/PewterCity/scripts.pory"
	releaseall
	end


PewterCity_EventScript_RunningShoesAideTriggerMid::
# 697 "data/maps/PewterCity/scripts.pory"
	lockall
# 698 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 699 "data/maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 700 "data/maps/PewterCity/scripts.pory"
	releaseall
	end


PewterCity_EventScript_RunningShoesAideTriggerBottom::
# 705 "data/maps/PewterCity/scripts.pory"
	lockall
# 706 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 707 "data/maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 708 "data/maps/PewterCity/scripts.pory"
	releaseall
	end


PewterCity_EventScript_AideGiveRunningShoes::
# 713 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_AideNoticePlayer
# 714 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_AideNoticePlayer
# 715 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, PewterCity_EventScript_AideNoticePlayer
# 716 "data/maps/PewterCity/scripts.pory"
	waitse
# 717 "data/maps/PewterCity/scripts.pory"
	playse SE_PIN
# 718 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_ExclamationMark
# 719 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 720 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_Delay48
# 721 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 722 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_OhPlayer
# 723 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_EventScript_AideApproachPlayer0
# 724 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_AideApproachPlayer1
# 725 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_AideApproachPlayer2
# 726 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, PewterCity_EventScript_AideApproachPlayer3
# 727 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_AskedToDeliverThis
# 728 "data/maps/PewterCity/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 729 "data/maps/PewterCity/scripts.pory"
	message PewterCity_Text_ReceivedRunningShoesFromAide
# 730 "data/maps/PewterCity/scripts.pory"
	waitmessage
# 731 "data/maps/PewterCity/scripts.pory"
	waitfanfare
# 732 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_SwitchedShoesWithRunningShoes
# 736 "data/maps/PewterCity/scripts.pory"
	signmsg
# 737 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ExplainRunningShoes
# 738 "data/maps/PewterCity/scripts.pory"
	normalmsg
# 739 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_MustBeGoingBackToLab
# 740 "data/maps/PewterCity/scripts.pory"
	closemessage
# 741 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_EventScript_AideExit0
# 742 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_AideExit1
# 743 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_AideExit2
# 744 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, PewterCity_EventScript_AideExit3
# 745 "data/maps/PewterCity/scripts.pory"
	delay 30
# 746 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_RunningShoesLetterFromMom
# 747 "data/maps/PewterCity/scripts.pory"
	closemessage
# 748 "data/maps/PewterCity/scripts.pory"
	removeobject LOCALID_PEWTER_AIDE
# 749 "data/maps/PewterCity/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 750 "data/maps/PewterCity/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY, 2
	return


PewterCity_EventScript_AideNoticePlayer::
# 755 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_WalkInPlaceFasterDown
# 756 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideApproachPlayer0::
# 762 "data/maps/PewterCity/scripts.pory"
	closemessage
# 763 "data/maps/PewterCity/scripts.pory"
	delay 20
	return


PewterCity_EventScript_AideApproachPlayer1::
# 768 "data/maps/PewterCity/scripts.pory"
	closemessage
# 769 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 770 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideApproachPlayer2::
# 775 "data/maps/PewterCity/scripts.pory"
	closemessage
# 776 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideApproachPlayerMid
# 777 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 778 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 779 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideApproachPlayer3::
# 784 "data/maps/PewterCity/scripts.pory"
	closemessage
# 785 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideApproachPlayerBottom
# 786 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 787 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 788 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideExit0::
# 793 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit0
# 794 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideExit1::
# 799 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit1
# 800 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideExit2::
# 805 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit2
# 806 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideExit3::
# 811 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit3
# 812 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


# 816 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideApproachPlayerMid:
# 817 "data/maps/PewterCity/scripts.pory"
	delay_4
# 818 "data/maps/PewterCity/scripts.pory"
	walk_down
# 819 "data/maps/PewterCity/scripts.pory"
	step_end

# 822 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideApproachPlayerBottom:
# 823 "data/maps/PewterCity/scripts.pory"
	delay_4
# 824 "data/maps/PewterCity/scripts.pory"
	walk_down
# 825 "data/maps/PewterCity/scripts.pory"
	walk_down
# 826 "data/maps/PewterCity/scripts.pory"
	step_end

# 829 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit0:
# 830 "data/maps/PewterCity/scripts.pory"
	walk_down
# 831 "data/maps/PewterCity/scripts.pory"
	walk_left
# 832 "data/maps/PewterCity/scripts.pory"
	walk_left
# 833 "data/maps/PewterCity/scripts.pory"
	walk_left
# 834 "data/maps/PewterCity/scripts.pory"
	walk_left
# 835 "data/maps/PewterCity/scripts.pory"
	walk_left
# 836 "data/maps/PewterCity/scripts.pory"
	walk_left
# 837 "data/maps/PewterCity/scripts.pory"
	walk_left
# 838 "data/maps/PewterCity/scripts.pory"
	walk_left
# 839 "data/maps/PewterCity/scripts.pory"
	walk_left
# 840 "data/maps/PewterCity/scripts.pory"
	step_end

# 843 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit1:
# 844 "data/maps/PewterCity/scripts.pory"
	walk_left
# 845 "data/maps/PewterCity/scripts.pory"
	walk_down
# 846 "data/maps/PewterCity/scripts.pory"
	walk_left
# 847 "data/maps/PewterCity/scripts.pory"
	walk_left
# 848 "data/maps/PewterCity/scripts.pory"
	walk_left
# 849 "data/maps/PewterCity/scripts.pory"
	walk_left
# 850 "data/maps/PewterCity/scripts.pory"
	walk_left
# 851 "data/maps/PewterCity/scripts.pory"
	walk_left
# 852 "data/maps/PewterCity/scripts.pory"
	walk_left
# 853 "data/maps/PewterCity/scripts.pory"
	walk_left
# 854 "data/maps/PewterCity/scripts.pory"
	step_end

# 857 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit2:
# 858 "data/maps/PewterCity/scripts.pory"
	walk_left
# 859 "data/maps/PewterCity/scripts.pory"
	walk_left
# 860 "data/maps/PewterCity/scripts.pory"
	walk_left
# 861 "data/maps/PewterCity/scripts.pory"
	walk_left
# 862 "data/maps/PewterCity/scripts.pory"
	walk_left
# 863 "data/maps/PewterCity/scripts.pory"
	walk_left
# 864 "data/maps/PewterCity/scripts.pory"
	walk_left
# 865 "data/maps/PewterCity/scripts.pory"
	walk_left
# 866 "data/maps/PewterCity/scripts.pory"
	walk_left
# 867 "data/maps/PewterCity/scripts.pory"
	step_end

# 870 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit3:
# 871 "data/maps/PewterCity/scripts.pory"
	walk_left
# 872 "data/maps/PewterCity/scripts.pory"
	walk_left
# 873 "data/maps/PewterCity/scripts.pory"
	walk_left
# 874 "data/maps/PewterCity/scripts.pory"
	walk_left
# 875 "data/maps/PewterCity/scripts.pory"
	walk_left
# 876 "data/maps/PewterCity/scripts.pory"
	walk_left
# 877 "data/maps/PewterCity/scripts.pory"
	walk_left
# 878 "data/maps/PewterCity/scripts.pory"
	walk_left
# 879 "data/maps/PewterCity/scripts.pory"
	walk_left
# 880 "data/maps/PewterCity/scripts.pory"
	step_end

Text_DreamEaterTeach::
# 883 "data/maps/PewterCity/scripts.pory"
	.string "Yawn!\n"
	.string "I must have dozed off in the sun.\p"
	.string "I had this weird dream about\n"
	.string "a DROWZEE eating my dream.\p"
	.string "And…\n"
	.string "I learned how to eat dreams…\p"
	.string "Oogh, this is too spooky!\p"
	.string "Let me teach it to a POKéMON so\n"
	.string "I can forget about it!$"

Text_DreamEaterDeclined::
# 895 "data/maps/PewterCity/scripts.pory"
	.string "…Snore…$"

Text_DreamEaterWhichMon::
# 899 "data/maps/PewterCity/scripts.pory"
	.string "Which POKéMON wants to learn\n"
	.string "DREAM EATER?$"

Text_DreamEaterTaught::
# 904 "data/maps/PewterCity/scripts.pory"
	.string "…ZZZ…\n"
	.string "I…can't eat…anymore…$"

PewterCity_Text_ClefairyCameFromMoon::
# 909 "data/maps/PewterCity/scripts.pory"
	.string "CLEFAIRY came from the moon.\n"
	.string "That's what the rumor is.\p"
	.string "They appeared after MOON STONES\n"
	.string "fell on MT. MOON.$"

PewterCity_Text_BrockOnlySeriousTrainerHere::
# 916 "data/maps/PewterCity/scripts.pory"
	.string "There aren't many serious POKéMON\n"
	.string "TRAINERS here.\p"
	.string "They're all like BUG CATCHERS,\n"
	.string "you know, just hobbyists.\p"
	.string "But PEWTER GYM's BROCK isn't like\n"
	.string "that, not one bit.$"

PewterCity_Text_DidYouCheckOutMuseum::
# 925 "data/maps/PewterCity/scripts.pory"
	.string "Did you check out the MUSEUM?$"

PewterCity_Text_WerentThoseFossilsAmazing::
# 929 "data/maps/PewterCity/scripts.pory"
	.string "Weren't those fossils from MT. MOON\n"
	.string "amazing?$"

PewterCity_Text_ReallyYouHaveToGo::
# 934 "data/maps/PewterCity/scripts.pory"
	.string "Really?\n"
	.string "You absolutely have to go!$"

PewterCity_Text_ThisIsTheMuseum::
# 939 "data/maps/PewterCity/scripts.pory"
	.string "This is it, the MUSEUM.\p"
	.string "You have to pay to get in, but it's\n"
	.string "worth it. See you around!$"

PewterCity_Text_DoYouKnowWhatImDoing::
# 945 "data/maps/PewterCity/scripts.pory"
	.string "Psssst!\n"
	.string "Do you know what I'm doing?$"

PewterCity_Text_ThatsRightItsHardWork::
# 950 "data/maps/PewterCity/scripts.pory"
	.string "That's right!\n"
	.string "It's hard work!$"

PewterCity_Text_SprayingRepelToKeepWildMonsOut::
# 955 "data/maps/PewterCity/scripts.pory"
	.string "I'm spraying REPEL to keep wild\n"
	.string "POKéMON out of my garden!$"

PewterCity_Text_BrocksLookingForChallengersFollowMe::
# 960 "data/maps/PewterCity/scripts.pory"
	.string "You're a TRAINER, right?\p"
	.string "BROCK's looking for new\n"
	.string "challengers. Follow me!$"

PewterCity_Text_GoTakeOnBrock::
# 966 "data/maps/PewterCity/scripts.pory"
	.string "If you have the right stuff,\n"
	.string "go take on BROCK!$"

PewterCity_Text_TrainerTipsEarningEXP::
# 971 "data/maps/PewterCity/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "All POKéMON that appear in battle,\n"
	.string "however briefly, earn EXP Points.$"

PewterCity_Text_CallPoliceIfInfoOnThieves::
# 977 "data/maps/PewterCity/scripts.pory"
	.string "NOTICE!\p"
	.string "Thieves have been stealing POKéMON\n"
	.string "fossils from MT. MOON.\p"
	.string "Please call(the PEWTER POLICE if\n"
	.string "you have any information.$"

PewterCity_Text_MuseumOfScience::
# 985 "data/maps/PewterCity/scripts.pory"
	.string "PEWTER MUSEUM OF SCIENCE$"

PewterCity_Text_GymSign::
# 989 "data/maps/PewterCity/scripts.pory"
	.string "PEWTER CITY POKéMON GYM\n"
	.string "LEADER: BROCK\l"
	.string "The Rock-Solid POKéMON TRAINER!$"

PewterCity_Text_CitySign::
# 995 "data/maps/PewterCity/scripts.pory"
	.string "PEWTER CITY\n"
	.string "A Stone Gray City$"

PewterCity_Text_OhPlayer::
# 1000 "data/maps/PewterCity/scripts.pory"
	.string "Oh, {PLAYER}{KUN}!$"

PewterCity_Text_AskedToDeliverThis::
# 1004 "data/maps/PewterCity/scripts.pory"
	.string "I'm glad I caught up to you.\n"
	.string "I'm PROF. OAK's AIDE.\p"
	.string "I've been asked to deliver this,\n"
	.string "so here you go.$"

PewterCity_Text_ReceivedRunningShoesFromAide::
# 1011 "data/maps/PewterCity/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "RUNNING SHOES from the AIDE.$"

PewterCity_Text_SwitchedShoesWithRunningShoes::
# 1016 "data/maps/PewterCity/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
	.string "RUNNING SHOES.$"

PewterCity_Text_ExplainRunningShoes::
# 1021 "data/maps/PewterCity/scripts.pory"
	.string "Press the B Button to run.\n"
	.string "But only where there's room to run!$"

PewterCity_Text_MustBeGoingBackToLab::
# 1026 "data/maps/PewterCity/scripts.pory"
	.string "Well, I must be going back to\n"
	.string "the LAB.\p"
	.string "Bye-bye!$"

PewterCity_Text_RunningShoesLetterFromMom::
# 1032 "data/maps/PewterCity/scripts.pory"
	.string "There's a letter attached…\p"
	.string "Dear {PLAYER},\p"
	.string "Here is a pair of RUNNING SHOES\n"
	.string "for my beloved challenger.\p"
	.string "Remember, I'll always cheer for\n"
	.string "you! Don't ever give up!\p"
	.string "From Mom$"
