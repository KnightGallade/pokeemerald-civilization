PewterCity_MapScripts::
# 6 "data/maps/PewterCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_OnTransition
	.byte 0


PewterCity_OnTransition::
# 10 "data/maps/PewterCity/scripts.pory"
	setflag FLAG_VISITED_PEWTER_CITY
# 11 "data/maps/PewterCity/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY_MUSEUM_1F, 0
	end


PewterCity_EventScript_GymGuide::
# 18 "data/maps/PewterCity/scripts.pory"
	lock
# 19 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 20 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_BrocksLookingForChallengersFollowMe
# 21 "data/maps/PewterCity/scripts.pory"
	closemessage
# 22 "data/maps/PewterCity/scripts.pory"
	playbgm MUS_RG_FOLLOW_ME, 0
# 23 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PewterCity_EventScript_WalkToGymEast
# 24 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_GoTakeOnBrock
# 25 "data/maps/PewterCity/scripts.pory"
	closemessage
# 26 "data/maps/PewterCity/scripts.pory"
	applymovement 5, PewterCity_Movement_GymGuideExit
# 27 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 28 "data/maps/PewterCity/scripts.pory"
	fadedefaultbgm
# 29 "data/maps/PewterCity/scripts.pory"
	removeobject 5
# 30 "data/maps/PewterCity/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 31 "data/maps/PewterCity/scripts.pory"
	release
	end


PewterCity_EventScript_WalkToGymEast::
# 36 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWaitForGuideEast
# 37 "data/maps/PewterCity/scripts.pory"
	applymovement 5, PewterCity_Movement_GuideMoveToLeadEast
# 38 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 39 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToGymEast
# 40 "data/maps/PewterCity/scripts.pory"
	applymovement 5, PewterCity_Movement_GuideWalkToGymEast
# 41 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


# 45 "data/maps/PewterCity/scripts.pory"

# 46 "data/maps/PewterCity/scripts.pory"
.macro walk_to_gym
# 47 "data/maps/PewterCity/scripts.pory"
	walk_left
# 48 "data/maps/PewterCity/scripts.pory"
	walk_left
# 49 "data/maps/PewterCity/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity/scripts.pory"
	walk_up
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
	walk_left
# 63 "data/maps/PewterCity/scripts.pory"
	walk_left
# 64 "data/maps/PewterCity/scripts.pory"
	walk_left
# 65 "data/maps/PewterCity/scripts.pory"
	walk_left
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
	walk_up
# 73 "data/maps/PewterCity/scripts.pory"
	walk_up
# 74 "data/maps/PewterCity/scripts.pory"
	walk_up
# 75 "data/maps/PewterCity/scripts.pory"
	walk_up
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
	walk_left
# 89 "data/maps/PewterCity/scripts.pory"
	walk_left
# 90 "data/maps/PewterCity/scripts.pory"
	walk_left
# 91 "data/maps/PewterCity/scripts.pory"
	walk_left
# 92 "data/maps/PewterCity/scripts.pory"
	walk_down
# 93 "data/maps/PewterCity/scripts.pory"
	walk_down
# 94 "data/maps/PewterCity/scripts.pory"
	walk_down
# 95 "data/maps/PewterCity/scripts.pory"
	walk_down
# 96 "data/maps/PewterCity/scripts.pory"
	walk_down
# 97 "data/maps/PewterCity/scripts.pory"
	walk_down
# 98 "data/maps/PewterCity/scripts.pory"
	walk_down
# 99 "data/maps/PewterCity/scripts.pory"
	walk_down
# 100 "data/maps/PewterCity/scripts.pory"
	walk_right
# 101 "data/maps/PewterCity/scripts.pory"
	walk_right
# 102 "data/maps/PewterCity/scripts.pory"
	walk_right
# 103 "data/maps/PewterCity/scripts.pory"
	walk_right
# 104 "data/maps/PewterCity/scripts.pory"
	walk_right
# 105 "data/maps/PewterCity/scripts.pory"
	walk_right
# 106 "data/maps/PewterCity/scripts.pory"
	walk_right
# 107 "data/maps/PewterCity/scripts.pory"
	walk_right
# 108 "data/maps/PewterCity/scripts.pory"
.endm
# 109 "data/maps/PewterCity/scripts.pory"

# 110 "data/maps/PewterCity/scripts.pory"
.macro walk_to_gym_alt
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
	walk_left
# 123 "data/maps/PewterCity/scripts.pory"
	walk_left
# 124 "data/maps/PewterCity/scripts.pory"
	walk_left
# 125 "data/maps/PewterCity/scripts.pory"
	walk_left
# 126 "data/maps/PewterCity/scripts.pory"
	walk_up
# 127 "data/maps/PewterCity/scripts.pory"
	walk_up
# 128 "data/maps/PewterCity/scripts.pory"
	walk_up
# 129 "data/maps/PewterCity/scripts.pory"
	walk_up
# 130 "data/maps/PewterCity/scripts.pory"
	walk_up
# 131 "data/maps/PewterCity/scripts.pory"
	walk_up
# 132 "data/maps/PewterCity/scripts.pory"
	walk_up
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
	walk_left
# 140 "data/maps/PewterCity/scripts.pory"
	walk_left
# 141 "data/maps/PewterCity/scripts.pory"
	walk_left
# 142 "data/maps/PewterCity/scripts.pory"
	walk_left
# 143 "data/maps/PewterCity/scripts.pory"
	walk_down
# 144 "data/maps/PewterCity/scripts.pory"
	walk_down
# 145 "data/maps/PewterCity/scripts.pory"
	walk_down
# 146 "data/maps/PewterCity/scripts.pory"
	walk_down
# 147 "data/maps/PewterCity/scripts.pory"
	walk_down
# 148 "data/maps/PewterCity/scripts.pory"
	walk_down
# 149 "data/maps/PewterCity/scripts.pory"
	walk_right
# 150 "data/maps/PewterCity/scripts.pory"
.endm

# 153 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideEast:
# 154 "data/maps/PewterCity/scripts.pory"
	delay_16
# 155 "data/maps/PewterCity/scripts.pory"
	delay_16
# 156 "data/maps/PewterCity/scripts.pory"
	delay_4
# 157 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_down
# 158 "data/maps/PewterCity/scripts.pory"
	step_end

# 161 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymEast:
# 162 "data/maps/PewterCity/scripts.pory"
	walk_down
# 163 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 164 "data/maps/PewterCity/scripts.pory"
	step_end

# 167 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideWest:
# 168 "data/maps/PewterCity/scripts.pory"
	delay_16
# 169 "data/maps/PewterCity/scripts.pory"
	step_end

# 172 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymWest:
# 173 "data/maps/PewterCity/scripts.pory"
	walk_left
# 174 "data/maps/PewterCity/scripts.pory"
	walk_left
# 175 "data/maps/PewterCity/scripts.pory"
	walk_left
# 176 "data/maps/PewterCity/scripts.pory"
	walk_left
# 177 "data/maps/PewterCity/scripts.pory"
	walk_left
# 178 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 179 "data/maps/PewterCity/scripts.pory"
	step_end

# 182 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideNorth:
# 183 "data/maps/PewterCity/scripts.pory"
	delay_16
# 184 "data/maps/PewterCity/scripts.pory"
	step_end

# 187 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymNorth:
# 188 "data/maps/PewterCity/scripts.pory"
	walk_up
# 189 "data/maps/PewterCity/scripts.pory"
	walk_left
# 190 "data/maps/PewterCity/scripts.pory"
	walk_left
# 191 "data/maps/PewterCity/scripts.pory"
	walk_left
# 192 "data/maps/PewterCity/scripts.pory"
	walk_left
# 193 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 194 "data/maps/PewterCity/scripts.pory"
	step_end

# 197 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadEast:
# 198 "data/maps/PewterCity/scripts.pory"
	walk_down
# 199 "data/maps/PewterCity/scripts.pory"
	walk_left
# 200 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 201 "data/maps/PewterCity/scripts.pory"
	walk_in_place_up
# 202 "data/maps/PewterCity/scripts.pory"
	step_end

# 205 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymEast:
# 206 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 207 "data/maps/PewterCity/scripts.pory"
	walk_right
# 208 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 209 "data/maps/PewterCity/scripts.pory"
	step_end

# 212 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadWest:
# 213 "data/maps/PewterCity/scripts.pory"
	walk_in_place_right
# 214 "data/maps/PewterCity/scripts.pory"
	step_end

# 217 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymWest:
# 218 "data/maps/PewterCity/scripts.pory"
	walk_left
# 219 "data/maps/PewterCity/scripts.pory"
	walk_left
# 220 "data/maps/PewterCity/scripts.pory"
	walk_left
# 221 "data/maps/PewterCity/scripts.pory"
	walk_left
# 222 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 223 "data/maps/PewterCity/scripts.pory"
	walk_right
# 224 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 225 "data/maps/PewterCity/scripts.pory"
	step_end

# 228 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadNorth:
# 229 "data/maps/PewterCity/scripts.pory"
	walk_in_place_down
# 230 "data/maps/PewterCity/scripts.pory"
	step_end

# 233 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymNorth:
# 234 "data/maps/PewterCity/scripts.pory"
	walk_left
# 235 "data/maps/PewterCity/scripts.pory"
	walk_left
# 236 "data/maps/PewterCity/scripts.pory"
	walk_left
# 237 "data/maps/PewterCity/scripts.pory"
	walk_left
# 238 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 239 "data/maps/PewterCity/scripts.pory"
	walk_right
# 240 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 241 "data/maps/PewterCity/scripts.pory"
	step_end

# 244 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GymGuideExit:
# 245 "data/maps/PewterCity/scripts.pory"
	walk_down
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
	walk_left
# 252 "data/maps/PewterCity/scripts.pory"
	walk_left
# 253 "data/maps/PewterCity/scripts.pory"
	walk_left
# 254 "data/maps/PewterCity/scripts.pory"
	walk_left
# 255 "data/maps/PewterCity/scripts.pory"
	step_end

PewterCity_EventScript_GymGuideTriggerTop::
# 259 "data/maps/PewterCity/scripts.pory"
	lockall
# 260 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 261 "data/maps/PewterCity/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
	end


PewterCity_EventScript_GymGuideTriggerMid::
# 266 "data/maps/PewterCity/scripts.pory"
	lockall
# 267 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 268 "data/maps/PewterCity/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
	end


PewterCity_EventScript_GymGuideTriggerBottom::
# 273 "data/maps/PewterCity/scripts.pory"
	lockall
# 274 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 275 "data/maps/PewterCity/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
	end


PewterCity_EventScript_GymGuideTrigger::
# 280 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_BrocksLookingForChallengersFollowMe
# 281 "data/maps/PewterCity/scripts.pory"
	closemessage
# 282 "data/maps/PewterCity/scripts.pory"
	playbgm MUS_RG_FOLLOW_ME, 0
# 283 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_EventScript_WalkToGymTop
# 284 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_WalkToGymMid
# 285 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_WalkToGymBottom
# 286 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_GoTakeOnBrock
# 287 "data/maps/PewterCity/scripts.pory"
	closemessage
# 288 "data/maps/PewterCity/scripts.pory"
	applymovement 5, PewterCity_Movement_GymGuideExit
# 289 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 290 "data/maps/PewterCity/scripts.pory"
	fadedefaultbgm
# 291 "data/maps/PewterCity/scripts.pory"
	removeobject 5
# 292 "data/maps/PewterCity/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 293 "data/maps/PewterCity/scripts.pory"
	releaseall
	end


PewterCity_EventScript_WalkToGymTop::
# 298 "data/maps/PewterCity/scripts.pory"
	applymovement 5, PewterCity_Movement_GuideMoveToLeadTop
# 299 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 300 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToGymTop
# 301 "data/maps/PewterCity/scripts.pory"
	applymovement 5, PewterCity_Movement_GuideWalkToGymTop
# 302 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_WalkToGymMid::
# 307 "data/maps/PewterCity/scripts.pory"
	applymovement 5, PewterCity_Movement_GuideMoveToLeadMid
# 308 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 309 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToGymMid
# 310 "data/maps/PewterCity/scripts.pory"
	applymovement 5, PewterCity_Movement_GuideWalkToGymMid
# 311 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_WalkToGymBottom::
# 316 "data/maps/PewterCity/scripts.pory"
	applymovement 5, PewterCity_Movement_GuideMoveToLeadBottom
# 317 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 318 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToGymBottom
# 319 "data/maps/PewterCity/scripts.pory"
	applymovement 5, PewterCity_Movement_GuideWalkToGymBottom
# 320 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


# 324 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymTop:
# 325 "data/maps/PewterCity/scripts.pory"
	walk_left
# 326 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 327 "data/maps/PewterCity/scripts.pory"
	step_end

# 330 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymMid:
# 331 "data/maps/PewterCity/scripts.pory"
	walk_up
# 332 "data/maps/PewterCity/scripts.pory"
	walk_left
# 333 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 334 "data/maps/PewterCity/scripts.pory"
	step_end

# 337 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymBottom:
# 338 "data/maps/PewterCity/scripts.pory"
	walk_up
# 339 "data/maps/PewterCity/scripts.pory"
	walk_up
# 340 "data/maps/PewterCity/scripts.pory"
	walk_left
# 341 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 342 "data/maps/PewterCity/scripts.pory"
	step_end

# 345 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymRight:
# 346 "data/maps/PewterCity/scripts.pory"
	walk_left
# 347 "data/maps/PewterCity/scripts.pory"
	walk_left
# 348 "data/maps/PewterCity/scripts.pory"
	walk_left
# 349 "data/maps/PewterCity/scripts.pory"
	walk_left
# 350 "data/maps/PewterCity/scripts.pory"
	walk_up
# 351 "data/maps/PewterCity/scripts.pory"
	walk_left
# 352 "data/maps/PewterCity/scripts.pory"
	walk_left
# 353 "data/maps/PewterCity/scripts.pory"
	walk_left
# 354 "data/maps/PewterCity/scripts.pory"
	walk_up
# 355 "data/maps/PewterCity/scripts.pory"
	walk_up
# 356 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 357 "data/maps/PewterCity/scripts.pory"
	step_end

# 360 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadTop:
# 361 "data/maps/PewterCity/scripts.pory"
	walk_left
# 362 "data/maps/PewterCity/scripts.pory"
	walk_down
# 363 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_right
# 364 "data/maps/PewterCity/scripts.pory"
	walk_in_place_right
# 365 "data/maps/PewterCity/scripts.pory"
	step_end

# 368 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadMid:
# 369 "data/maps/PewterCity/scripts.pory"
	walk_down
# 370 "data/maps/PewterCity/scripts.pory"
	walk_in_place_down
# 371 "data/maps/PewterCity/scripts.pory"
	step_end

# 374 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadBottom:
# 375 "data/maps/PewterCity/scripts.pory"
	walk_down
# 376 "data/maps/PewterCity/scripts.pory"
	walk_down
# 377 "data/maps/PewterCity/scripts.pory"
	walk_in_place_down
# 378 "data/maps/PewterCity/scripts.pory"
	step_end

# 381 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideApproachPlayerRight:
# 382 "data/maps/PewterCity/scripts.pory"
	walk_down
# 383 "data/maps/PewterCity/scripts.pory"
	walk_down
# 384 "data/maps/PewterCity/scripts.pory"
	walk_right
# 385 "data/maps/PewterCity/scripts.pory"
	walk_down
# 386 "data/maps/PewterCity/scripts.pory"
	walk_right
# 387 "data/maps/PewterCity/scripts.pory"
	walk_in_place_right
# 388 "data/maps/PewterCity/scripts.pory"
	step_end

# 391 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymTop:
# 392 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 393 "data/maps/PewterCity/scripts.pory"
	walk_right
# 394 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 395 "data/maps/PewterCity/scripts.pory"
	step_end

# 398 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymMid:
# 399 "data/maps/PewterCity/scripts.pory"
	walk_left
# 400 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 401 "data/maps/PewterCity/scripts.pory"
	walk_right
# 402 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 403 "data/maps/PewterCity/scripts.pory"
	step_end

# 406 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymBottom:
# 407 "data/maps/PewterCity/scripts.pory"
	walk_up
# 408 "data/maps/PewterCity/scripts.pory"
	walk_left
# 409 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 410 "data/maps/PewterCity/scripts.pory"
	walk_right
# 411 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 412 "data/maps/PewterCity/scripts.pory"
	step_end

# 415 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymRight:
# 416 "data/maps/PewterCity/scripts.pory"
	walk_left
# 417 "data/maps/PewterCity/scripts.pory"
	walk_left
# 418 "data/maps/PewterCity/scripts.pory"
	walk_left
# 419 "data/maps/PewterCity/scripts.pory"
	walk_up
# 420 "data/maps/PewterCity/scripts.pory"
	walk_left
# 421 "data/maps/PewterCity/scripts.pory"
	walk_left
# 422 "data/maps/PewterCity/scripts.pory"
	walk_left
# 423 "data/maps/PewterCity/scripts.pory"
	walk_up
# 424 "data/maps/PewterCity/scripts.pory"
	walk_up
# 425 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 426 "data/maps/PewterCity/scripts.pory"
	walk_right
# 427 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 428 "data/maps/PewterCity/scripts.pory"
	step_end

PewterCity_EventScript_Lass::
# 432 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ClefairyCameFromMoon, MSGBOX_NPC
	end


PewterCity_EventScript_MuseumGuide::
# 437 "data/maps/PewterCity/scripts.pory"
	lock
# 438 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 439 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_DidYouCheckOutMuseum, MSGBOX_YESNO
# 440 "data/maps/PewterCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_EventScript_CheckedOutMuseum
# 441 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ReallyYouHaveToGo
# 442 "data/maps/PewterCity/scripts.pory"
	closemessage
# 443 "data/maps/PewterCity/scripts.pory"
	delay 10
# 444 "data/maps/PewterCity/scripts.pory"
	playbgm MUS_RG_FOLLOW_ME, 0
# 445 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PewterCity_EventScript_LeadToMuseumNorth
# 446 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PewterCity_EventScript_LeadToMuseumSouth
# 447 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PewterCity_EventScript_LeadToMuseumWest
# 448 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PewterCity_EventScript_LeadToMuseumEast
# 449 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ThisIsTheMuseum
# 450 "data/maps/PewterCity/scripts.pory"
	closemessage
# 451 "data/maps/PewterCity/scripts.pory"
	delay 10
# 452 "data/maps/PewterCity/scripts.pory"
	applymovement 2, PewterCity_Movement_MuseumGuideExit
# 453 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 454 "data/maps/PewterCity/scripts.pory"
	fadedefaultbgm
# 455 "data/maps/PewterCity/scripts.pory"
	removeobject 2
# 456 "data/maps/PewterCity/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_MUSEUM_GUIDE
# 457 "data/maps/PewterCity/scripts.pory"
	release
	end


PewterCity_EventScript_LeadToMuseumNorth::
# 462 "data/maps/PewterCity/scripts.pory"
	applymovement 2, PewterCity_Movement_GuideWalkToMuseumNorth
# 463 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumNorth
# 464 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_LeadToMuseumSouth::
# 469 "data/maps/PewterCity/scripts.pory"
	applymovement 2, PewterCity_Movement_GuideWalkToMuseumSouth
# 470 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumSouth
# 471 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_LeadToMuseumWest::
# 476 "data/maps/PewterCity/scripts.pory"
	applymovement 2, PewterCity_Movement_GuideWalkToMuseumWest
# 477 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumWest
# 478 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_LeadToMuseumEast::
# 483 "data/maps/PewterCity/scripts.pory"
	applymovement 2, PewterCity_Movement_GuideWalkToMuseumEast
# 484 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumEast
# 485 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_CheckedOutMuseum::
# 490 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_WerentThoseFossilsAmazing
# 491 "data/maps/PewterCity/scripts.pory"
	release
	end


# 495 "data/maps/PewterCity/scripts.pory"

# 496 "data/maps/PewterCity/scripts.pory"
.macro walk_to_museum
# 497 "data/maps/PewterCity/scripts.pory"
	walk_up
# 498 "data/maps/PewterCity/scripts.pory"
	walk_up
# 499 "data/maps/PewterCity/scripts.pory"
	walk_up
# 500 "data/maps/PewterCity/scripts.pory"
	walk_up
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
	walk_left
# 508 "data/maps/PewterCity/scripts.pory"
	walk_left
# 509 "data/maps/PewterCity/scripts.pory"
	walk_left
# 510 "data/maps/PewterCity/scripts.pory"
	walk_left
# 511 "data/maps/PewterCity/scripts.pory"
	walk_up
# 512 "data/maps/PewterCity/scripts.pory"
	walk_up
# 513 "data/maps/PewterCity/scripts.pory"
	walk_up
# 514 "data/maps/PewterCity/scripts.pory"
	walk_up
# 515 "data/maps/PewterCity/scripts.pory"
	walk_left
# 516 "data/maps/PewterCity/scripts.pory"
	walk_left
# 517 "data/maps/PewterCity/scripts.pory"
	walk_left
# 518 "data/maps/PewterCity/scripts.pory"
	walk_left
# 519 "data/maps/PewterCity/scripts.pory"
	walk_left
# 520 "data/maps/PewterCity/scripts.pory"
	walk_left
# 521 "data/maps/PewterCity/scripts.pory"
.endm
# 522 "data/maps/PewterCity/scripts.pory"

# 523 "data/maps/PewterCity/scripts.pory"
.macro walk_to_museum_south
# 524 "data/maps/PewterCity/scripts.pory"
	walk_up
# 525 "data/maps/PewterCity/scripts.pory"
	walk_up
# 526 "data/maps/PewterCity/scripts.pory"
	walk_up
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
	walk_left
# 533 "data/maps/PewterCity/scripts.pory"
	walk_left
# 534 "data/maps/PewterCity/scripts.pory"
	walk_left
# 535 "data/maps/PewterCity/scripts.pory"
	walk_left
# 536 "data/maps/PewterCity/scripts.pory"
	walk_up
# 537 "data/maps/PewterCity/scripts.pory"
	walk_up
# 538 "data/maps/PewterCity/scripts.pory"
	walk_up
# 539 "data/maps/PewterCity/scripts.pory"
	walk_up
# 540 "data/maps/PewterCity/scripts.pory"
	walk_left
# 541 "data/maps/PewterCity/scripts.pory"
	walk_left
# 542 "data/maps/PewterCity/scripts.pory"
	walk_left
# 543 "data/maps/PewterCity/scripts.pory"
	walk_left
# 544 "data/maps/PewterCity/scripts.pory"
	walk_left
# 545 "data/maps/PewterCity/scripts.pory"
	walk_left
# 546 "data/maps/PewterCity/scripts.pory"
.endm

# 549 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumNorth:
# 550 "data/maps/PewterCity/scripts.pory"
	walk_up
# 551 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 552 "data/maps/PewterCity/scripts.pory"
	delay_8
# 553 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 554 "data/maps/PewterCity/scripts.pory"
	step_end

# 557 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumNorth:
# 558 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 559 "data/maps/PewterCity/scripts.pory"
	walk_left
# 560 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 561 "data/maps/PewterCity/scripts.pory"
	step_end

# 564 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumSouth:
# 565 "data/maps/PewterCity/scripts.pory"
	delay_16
# 566 "data/maps/PewterCity/scripts.pory"
	delay_16
# 567 "data/maps/PewterCity/scripts.pory"
	walk_left
# 568 "data/maps/PewterCity/scripts.pory"
	walk_to_museum_south
# 569 "data/maps/PewterCity/scripts.pory"
	delay_8
# 570 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 571 "data/maps/PewterCity/scripts.pory"
	step_end

# 574 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumSouth:
# 575 "data/maps/PewterCity/scripts.pory"
	walk_left
# 576 "data/maps/PewterCity/scripts.pory"
	walk_up
# 577 "data/maps/PewterCity/scripts.pory"
	walk_to_museum_south
# 578 "data/maps/PewterCity/scripts.pory"
	walk_left
# 579 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 580 "data/maps/PewterCity/scripts.pory"
	step_end

# 583 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumWest:
# 584 "data/maps/PewterCity/scripts.pory"
	walk_left
# 585 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 586 "data/maps/PewterCity/scripts.pory"
	delay_8
# 587 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 588 "data/maps/PewterCity/scripts.pory"
	step_end

# 591 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumWest:
# 592 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 593 "data/maps/PewterCity/scripts.pory"
	walk_left
# 594 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 595 "data/maps/PewterCity/scripts.pory"
	step_end

# 598 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumEast:
# 599 "data/maps/PewterCity/scripts.pory"
	walk_right
# 600 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 601 "data/maps/PewterCity/scripts.pory"
	delay_8
# 602 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 603 "data/maps/PewterCity/scripts.pory"
	step_end

# 606 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumEast:
# 607 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 608 "data/maps/PewterCity/scripts.pory"
	walk_left
# 609 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 610 "data/maps/PewterCity/scripts.pory"
	step_end

# 613 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_MuseumGuideExit:
# 614 "data/maps/PewterCity/scripts.pory"
	walk_down
# 615 "data/maps/PewterCity/scripts.pory"
	walk_right
# 616 "data/maps/PewterCity/scripts.pory"
	walk_right
# 617 "data/maps/PewterCity/scripts.pory"
	walk_right
# 618 "data/maps/PewterCity/scripts.pory"
	walk_right
# 619 "data/maps/PewterCity/scripts.pory"
	walk_right
# 620 "data/maps/PewterCity/scripts.pory"
	walk_right
# 621 "data/maps/PewterCity/scripts.pory"
	walk_right
# 622 "data/maps/PewterCity/scripts.pory"
	walk_down
# 623 "data/maps/PewterCity/scripts.pory"
	walk_down
# 624 "data/maps/PewterCity/scripts.pory"
	walk_down
# 625 "data/maps/PewterCity/scripts.pory"
	walk_right
# 626 "data/maps/PewterCity/scripts.pory"
	walk_right
# 627 "data/maps/PewterCity/scripts.pory"
	walk_right
# 628 "data/maps/PewterCity/scripts.pory"
	step_end

PewterCity_EventScript_FatMan::
# 632 "data/maps/PewterCity/scripts.pory"
	lock
# 633 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 634 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_BrockOnlySeriousTrainerHere
# 635 "data/maps/PewterCity/scripts.pory"
	release
	end


PewterCity_EventScript_BugCatcher::
# 640 "data/maps/PewterCity/scripts.pory"
	lock
# 641 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 642 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_DoYouKnowWhatImDoing, MSGBOX_YESNO
# 643 "data/maps/PewterCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_EventScript_KnowWhatTheyreDoing
# 644 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_SprayingRepelToKeepWildMonsOut
# 645 "data/maps/PewterCity/scripts.pory"
	release
	end


PewterCity_EventScript_KnowWhatTheyreDoing::
# 650 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ThatsRightItsHardWork
# 651 "data/maps/PewterCity/scripts.pory"
	release
	end


PewterCity_EventScript_TrainerTips::
# 656 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_TrainerTipsEarningEXP, MSGBOX_SIGN
	end


PewterCity_EventScript_PoliceNotice::
# 661 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_CallPoliceIfInfoOnThieves, MSGBOX_SIGN
	end


PewterCity_EventScript_MuseumSign::
# 666 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_MuseumOfScience, MSGBOX_SIGN
	end


PewterCity_EventScript_GymSign::
# 671 "data/maps/PewterCity/scripts.pory"
	lockall
# 672 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_GymSign
# 673 "data/maps/PewterCity/scripts.pory"
	releaseall
	end


PewterCity_EventScript_CitySign::
# 678 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_CitySign, MSGBOX_SIGN
	end


PewterCity_EventScript_RunningShoesAide::
# 684 "data/maps/PewterCity/scripts.pory"
	lock
# 685 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 686 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 687 "data/maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 688 "data/maps/PewterCity/scripts.pory"
	release
	end


PewterCity_EventScript_RunningShoesAideTriggerTop::
# 693 "data/maps/PewterCity/scripts.pory"
	lockall
# 694 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 695 "data/maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 696 "data/maps/PewterCity/scripts.pory"
	releaseall
	end


PewterCity_EventScript_RunningShoesAideTriggerMid::
# 701 "data/maps/PewterCity/scripts.pory"
	lockall
# 702 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 703 "data/maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 704 "data/maps/PewterCity/scripts.pory"
	releaseall
	end


PewterCity_EventScript_RunningShoesAideTriggerBottom::
# 709 "data/maps/PewterCity/scripts.pory"
	lockall
# 710 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 711 "data/maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 712 "data/maps/PewterCity/scripts.pory"
	releaseall
	end


PewterCity_EventScript_AideGiveRunningShoes::
# 717 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_AideNoticePlayer
# 718 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_AideNoticePlayer
# 719 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, PewterCity_EventScript_AideNoticePlayer
# 720 "data/maps/PewterCity/scripts.pory"
	waitse
# 721 "data/maps/PewterCity/scripts.pory"
	playse SE_PIN
# 722 "data/maps/PewterCity/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 723 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 724 "data/maps/PewterCity/scripts.pory"
	applymovement 7, Common_Movement_Delay48
# 725 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 726 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_OhPlayer
# 727 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_EventScript_AideApproachPlayer0
# 728 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_AideApproachPlayer1
# 729 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_AideApproachPlayer2
# 730 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, PewterCity_EventScript_AideApproachPlayer3
# 731 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_AskedToDeliverThis
# 732 "data/maps/PewterCity/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 733 "data/maps/PewterCity/scripts.pory"
	message PewterCity_Text_ReceivedRunningShoesFromAide
# 734 "data/maps/PewterCity/scripts.pory"
	waitmessage
# 735 "data/maps/PewterCity/scripts.pory"
	waitfanfare
# 736 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_SwitchedShoesWithRunningShoes
# 740 "data/maps/PewterCity/scripts.pory"
	signmsg
# 741 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ExplainRunningShoes
# 742 "data/maps/PewterCity/scripts.pory"
	normalmsg
# 743 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_MustBeGoingBackToLab
# 744 "data/maps/PewterCity/scripts.pory"
	closemessage
# 745 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_EventScript_AideExit0
# 746 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_AideExit1
# 747 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_AideExit2
# 748 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, PewterCity_EventScript_AideExit3
# 749 "data/maps/PewterCity/scripts.pory"
	delay 30
# 750 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_RunningShoesLetterFromMom
# 751 "data/maps/PewterCity/scripts.pory"
	closemessage
# 752 "data/maps/PewterCity/scripts.pory"
	removeobject 7
# 753 "data/maps/PewterCity/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 754 "data/maps/PewterCity/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY, 2
	return


PewterCity_EventScript_AideNoticePlayer::
# 759 "data/maps/PewterCity/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 760 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideApproachPlayer0::
# 766 "data/maps/PewterCity/scripts.pory"
	closemessage
# 767 "data/maps/PewterCity/scripts.pory"
	delay 20
	return


PewterCity_EventScript_AideApproachPlayer1::
# 772 "data/maps/PewterCity/scripts.pory"
	closemessage
# 773 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 774 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideApproachPlayer2::
# 779 "data/maps/PewterCity/scripts.pory"
	closemessage
# 780 "data/maps/PewterCity/scripts.pory"
	applymovement 7, PewterCity_Movement_AideApproachPlayerMid
# 781 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 782 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 783 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideApproachPlayer3::
# 788 "data/maps/PewterCity/scripts.pory"
	closemessage
# 789 "data/maps/PewterCity/scripts.pory"
	applymovement 7, PewterCity_Movement_AideApproachPlayerBottom
# 790 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 791 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 792 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideExit0::
# 797 "data/maps/PewterCity/scripts.pory"
	applymovement 7, PewterCity_Movement_AideExit0
# 798 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideExit1::
# 803 "data/maps/PewterCity/scripts.pory"
	applymovement 7, PewterCity_Movement_AideExit1
# 804 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideExit2::
# 809 "data/maps/PewterCity/scripts.pory"
	applymovement 7, PewterCity_Movement_AideExit2
# 810 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_AideExit3::
# 815 "data/maps/PewterCity/scripts.pory"
	applymovement 7, PewterCity_Movement_AideExit3
# 816 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
	return


# 820 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideApproachPlayerMid:
# 821 "data/maps/PewterCity/scripts.pory"
	delay_4
# 822 "data/maps/PewterCity/scripts.pory"
	walk_down
# 823 "data/maps/PewterCity/scripts.pory"
	step_end

# 826 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideApproachPlayerBottom:
# 827 "data/maps/PewterCity/scripts.pory"
	delay_4
# 828 "data/maps/PewterCity/scripts.pory"
	walk_down
# 829 "data/maps/PewterCity/scripts.pory"
	walk_down
# 830 "data/maps/PewterCity/scripts.pory"
	step_end

# 833 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit0:
# 834 "data/maps/PewterCity/scripts.pory"
	walk_down
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
	walk_left
# 841 "data/maps/PewterCity/scripts.pory"
	walk_left
# 842 "data/maps/PewterCity/scripts.pory"
	walk_left
# 843 "data/maps/PewterCity/scripts.pory"
	walk_left
# 844 "data/maps/PewterCity/scripts.pory"
	step_end

# 847 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit1:
# 848 "data/maps/PewterCity/scripts.pory"
	walk_left
# 849 "data/maps/PewterCity/scripts.pory"
	walk_down
# 850 "data/maps/PewterCity/scripts.pory"
	walk_left
# 851 "data/maps/PewterCity/scripts.pory"
	walk_left
# 852 "data/maps/PewterCity/scripts.pory"
	walk_left
# 853 "data/maps/PewterCity/scripts.pory"
	walk_left
# 854 "data/maps/PewterCity/scripts.pory"
	walk_left
# 855 "data/maps/PewterCity/scripts.pory"
	walk_left
# 856 "data/maps/PewterCity/scripts.pory"
	walk_left
# 857 "data/maps/PewterCity/scripts.pory"
	walk_left
# 858 "data/maps/PewterCity/scripts.pory"
	step_end

# 861 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit2:
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
	walk_left
# 868 "data/maps/PewterCity/scripts.pory"
	walk_left
# 869 "data/maps/PewterCity/scripts.pory"
	walk_left
# 870 "data/maps/PewterCity/scripts.pory"
	walk_left
# 871 "data/maps/PewterCity/scripts.pory"
	step_end

# 874 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit3:
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
	walk_left
# 881 "data/maps/PewterCity/scripts.pory"
	walk_left
# 882 "data/maps/PewterCity/scripts.pory"
	walk_left
# 883 "data/maps/PewterCity/scripts.pory"
	walk_left
# 884 "data/maps/PewterCity/scripts.pory"
	step_end

Text_DreamEaterTeach::
# 887 "data/maps/PewterCity/scripts.pory"
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
# 899 "data/maps/PewterCity/scripts.pory"
	.string "…Snore…$"

Text_DreamEaterWhichMon::
# 903 "data/maps/PewterCity/scripts.pory"
	.string "Which POKéMON wants to learn\n"
	.string "DREAM EATER?$"

Text_DreamEaterTaught::
# 908 "data/maps/PewterCity/scripts.pory"
	.string "…ZZZ…\n"
	.string "I…can't eat…anymore…$"

PewterCity_Text_ClefairyCameFromMoon::
# 913 "data/maps/PewterCity/scripts.pory"
	.string "CLEFAIRY came from the moon.\n"
	.string "That's what the rumor is.\p"
	.string "They appeared after MOON STONES\n"
	.string "fell on MT. MOON.$"

PewterCity_Text_BrockOnlySeriousTrainerHere::
# 920 "data/maps/PewterCity/scripts.pory"
	.string "There aren't many serious POKéMON\n"
	.string "TRAINERS here.\p"
	.string "They're all like BUG CATCHERS,\n"
	.string "you know, just hobbyists.\p"
	.string "But PEWTER GYM's BROCK isn't like\n"
	.string "that, not one bit.$"

PewterCity_Text_DidYouCheckOutMuseum::
# 929 "data/maps/PewterCity/scripts.pory"
	.string "Did you check out the MUSEUM?$"

PewterCity_Text_WerentThoseFossilsAmazing::
# 933 "data/maps/PewterCity/scripts.pory"
	.string "Weren't those fossils from MT. MOON\n"
	.string "amazing?$"

PewterCity_Text_ReallyYouHaveToGo::
# 938 "data/maps/PewterCity/scripts.pory"
	.string "Really?\n"
	.string "You absolutely have to go!$"

PewterCity_Text_ThisIsTheMuseum::
# 943 "data/maps/PewterCity/scripts.pory"
	.string "This is it, the MUSEUM.\p"
	.string "You have to pay to get in, but it's\n"
	.string "worth it. See you around!$"

PewterCity_Text_DoYouKnowWhatImDoing::
# 949 "data/maps/PewterCity/scripts.pory"
	.string "Psssst!\n"
	.string "Do you know what I'm doing?$"

PewterCity_Text_ThatsRightItsHardWork::
# 954 "data/maps/PewterCity/scripts.pory"
	.string "That's right!\n"
	.string "It's hard work!$"

PewterCity_Text_SprayingRepelToKeepWildMonsOut::
# 959 "data/maps/PewterCity/scripts.pory"
	.string "I'm spraying REPEL to keep wild\n"
	.string "POKéMON out of my garden!$"

PewterCity_Text_BrocksLookingForChallengersFollowMe::
# 964 "data/maps/PewterCity/scripts.pory"
	.string "You're a TRAINER, right?\p"
	.string "BROCK's looking for new\n"
	.string "challengers. Follow me!$"

PewterCity_Text_GoTakeOnBrock::
# 970 "data/maps/PewterCity/scripts.pory"
	.string "If you have the right stuff,\n"
	.string "go take on BROCK!$"

PewterCity_Text_TrainerTipsEarningEXP::
# 975 "data/maps/PewterCity/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "All POKéMON that appear in battle,\n"
	.string "however briefly, earn EXP Points.$"

PewterCity_Text_CallPoliceIfInfoOnThieves::
# 981 "data/maps/PewterCity/scripts.pory"
	.string "NOTICE!\p"
	.string "Thieves have been stealing POKéMON\n"
	.string "fossils from MT. MOON.\p"
	.string "Please call(the PEWTER POLICE if\n"
	.string "you have any information.$"

PewterCity_Text_MuseumOfScience::
# 989 "data/maps/PewterCity/scripts.pory"
	.string "PEWTER MUSEUM OF SCIENCE$"

PewterCity_Text_GymSign::
# 993 "data/maps/PewterCity/scripts.pory"
	.string "PEWTER CITY POKéMON GYM\n"
	.string "LEADER: BROCK\l"
	.string "The Rock-Solid POKéMON TRAINER!$"

PewterCity_Text_CitySign::
# 999 "data/maps/PewterCity/scripts.pory"
	.string "PEWTER CITY\n"
	.string "A Stone Gray City$"

PewterCity_Text_OhPlayer::
# 1004 "data/maps/PewterCity/scripts.pory"
	.string "Oh, {PLAYER}{KUN}!$"

PewterCity_Text_AskedToDeliverThis::
# 1008 "data/maps/PewterCity/scripts.pory"
	.string "I'm glad I caught up to you.\n"
	.string "I'm PROF. OAK's AIDE.\p"
	.string "I've been asked to deliver this,\n"
	.string "so here you go.$"

PewterCity_Text_ReceivedRunningShoesFromAide::
# 1015 "data/maps/PewterCity/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "RUNNING SHOES from the AIDE.$"

PewterCity_Text_SwitchedShoesWithRunningShoes::
# 1020 "data/maps/PewterCity/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
	.string "RUNNING SHOES.$"

PewterCity_Text_ExplainRunningShoes::
# 1025 "data/maps/PewterCity/scripts.pory"
	.string "Press the B Button to run.\n"
	.string "But only where there's room to run!$"

PewterCity_Text_MustBeGoingBackToLab::
# 1030 "data/maps/PewterCity/scripts.pory"
	.string "Well, I must be going back to\n"
	.string "the LAB.\p"
	.string "Bye-bye!$"

PewterCity_Text_RunningShoesLetterFromMom::
# 1036 "data/maps/PewterCity/scripts.pory"
	.string "There's a letter attached…\p"
	.string "Dear {PLAYER},\p"
	.string "Here is a pair of RUNNING SHOES\n"
	.string "for my beloved challenger.\p"
	.string "Remember, I'll always cheer for\n"
	.string "you! Don't ever give up!\p"
	.string "From Mom$"
