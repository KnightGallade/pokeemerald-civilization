Route22_MapScripts::
	.byte 0


Route22_EventScript_EarlyRivalTriggerTop::
# 6 "data/maps/Route22/scripts.pory"
	lockall
# 7 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 0
# 8 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_EarlyRival
	end


Route22_EventScript_EarlyRivalTriggerMid::
# 13 "data/maps/Route22/scripts.pory"
	lockall
# 14 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/Route22/scripts.pory"
	setobjectxyperm 1, 25, 5
# 16 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_EarlyRival
	end


Route22_EventScript_EarlyRivalTriggerBottom::
# 21 "data/maps/Route22/scripts.pory"
	lockall
# 22 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 2
# 23 "data/maps/Route22/scripts.pory"
	setobjectxyperm 1, 25, 5
# 24 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_EarlyRival
	end


Route22_EventScript_EarlyRival::
# 29 "data/maps/Route22/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 30 "data/maps/Route22/scripts.pory"
	addobject 1
# 31 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route22_EventScript_EarlyRivalApproach
# 32 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route22_EventScript_EarlyRivalApproach
# 33 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route22_EventScript_EarlyRivalApproachBottom
# 34 "data/maps/Route22/scripts.pory"
	delay 6
# 35 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_EarlyRivalIntro
# 36 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, Route22_EventScript_EarlyRivalSquirtle
# 37 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, Route22_EventScript_EarlyRivalBulbasaur
# 38 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, Route22_EventScript_EarlyRivalCharmander
# 39 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_EarlyRivalPostBattle
# 40 "data/maps/Route22/scripts.pory"
	closemessage
# 41 "data/maps/Route22/scripts.pory"
	delay 10
# 42 "data/maps/Route22/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 43 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route22_EventScript_EarlyRivalExit
# 44 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route22_EventScript_EarlyRivalExit
# 45 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route22_EventScript_EarlyRivalExitBottom
# 46 "data/maps/Route22/scripts.pory"
	fadedefaultbgm
# 47 "data/maps/Route22/scripts.pory"
	removeobject 1
# 48 "data/maps/Route22/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 2
# 49 "data/maps/Route22/scripts.pory"
	releaseall
	end


Route22_EventScript_EarlyRivalApproach::
# 54 "data/maps/Route22/scripts.pory"
	applymovement 1, Route22_Movement_RivalApproach
# 55 "data/maps/Route22/scripts.pory"
	waitmovement 0
	return


Route22_EventScript_EarlyRivalApproachBottom::
# 60 "data/maps/Route22/scripts.pory"
	applymovement 1, Route22_Movement_RivalApproachBottom
# 61 "data/maps/Route22/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route22_Movement_PlayerFaceRival
# 62 "data/maps/Route22/scripts.pory"
	waitmovement 0
	return


Route22_EventScript_EarlyRivalSquirtle::
# 67 "data/maps/Route22/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_RIVAL_ROUTE22_EARLY_SQUIRTLE, Route22_Text_EarlyRivalDefeat
	return


Route22_EventScript_EarlyRivalBulbasaur::
# 72 "data/maps/Route22/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_RIVAL_ROUTE22_EARLY_BULBASAUR, Route22_Text_EarlyRivalDefeat
	return


Route22_EventScript_EarlyRivalCharmander::
# 77 "data/maps/Route22/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_RIVAL_ROUTE22_EARLY_CHARMANDER, Route22_Text_EarlyRivalDefeat
	return


Route22_EventScript_EarlyRivalExit::
# 82 "data/maps/Route22/scripts.pory"
	applymovement 1, Route22_Movement_EarlyRivalExit
# 83 "data/maps/Route22/scripts.pory"
	waitmovement 0
	return


Route22_EventScript_EarlyRivalExitBottom::
# 88 "data/maps/Route22/scripts.pory"
	applymovement 1, Route22_Movement_EarlyRivalExitBottom
# 89 "data/maps/Route22/scripts.pory"
	waitmovement 0
	return


# 93 "data/maps/Route22/scripts.pory"
Route22_Movement_EarlyRivalExit:
# 94 "data/maps/Route22/scripts.pory"
	walk_down
# 95 "data/maps/Route22/scripts.pory"
	walk_right
# 96 "data/maps/Route22/scripts.pory"
	walk_right
# 97 "data/maps/Route22/scripts.pory"
	walk_right
# 98 "data/maps/Route22/scripts.pory"
	walk_right
# 99 "data/maps/Route22/scripts.pory"
	walk_right
# 100 "data/maps/Route22/scripts.pory"
	walk_down
# 101 "data/maps/Route22/scripts.pory"
	walk_down
# 102 "data/maps/Route22/scripts.pory"
	walk_down
# 103 "data/maps/Route22/scripts.pory"
	walk_down
# 104 "data/maps/Route22/scripts.pory"
	walk_down
# 105 "data/maps/Route22/scripts.pory"
	walk_down
# 106 "data/maps/Route22/scripts.pory"
	step_end

# 109 "data/maps/Route22/scripts.pory"
Route22_Movement_EarlyRivalExitBottom:
# 110 "data/maps/Route22/scripts.pory"
	walk_right
# 111 "data/maps/Route22/scripts.pory"
	walk_right
# 112 "data/maps/Route22/scripts.pory"
	walk_right
# 113 "data/maps/Route22/scripts.pory"
	walk_right
# 114 "data/maps/Route22/scripts.pory"
	walk_down
# 115 "data/maps/Route22/scripts.pory"
	walk_down
# 116 "data/maps/Route22/scripts.pory"
	walk_down
# 117 "data/maps/Route22/scripts.pory"
	walk_down
# 118 "data/maps/Route22/scripts.pory"
	walk_down
# 119 "data/maps/Route22/scripts.pory"
	walk_down
# 120 "data/maps/Route22/scripts.pory"
	walk_down
# 121 "data/maps/Route22/scripts.pory"
	step_end

# 124 "data/maps/Route22/scripts.pory"
Route22_Movement_RivalApproach:
# 125 "data/maps/Route22/scripts.pory"
	walk_right
# 126 "data/maps/Route22/scripts.pory"
	walk_right
# 127 "data/maps/Route22/scripts.pory"
	walk_right
# 128 "data/maps/Route22/scripts.pory"
	walk_right
# 129 "data/maps/Route22/scripts.pory"
	walk_right
# 130 "data/maps/Route22/scripts.pory"
	walk_right
# 131 "data/maps/Route22/scripts.pory"
	walk_right
# 132 "data/maps/Route22/scripts.pory"
	step_end

# 135 "data/maps/Route22/scripts.pory"
Route22_Movement_RivalApproachBottom:
# 136 "data/maps/Route22/scripts.pory"
	walk_right
# 137 "data/maps/Route22/scripts.pory"
	walk_right
# 138 "data/maps/Route22/scripts.pory"
	walk_right
# 139 "data/maps/Route22/scripts.pory"
	walk_right
# 140 "data/maps/Route22/scripts.pory"
	walk_right
# 141 "data/maps/Route22/scripts.pory"
	walk_right
# 142 "data/maps/Route22/scripts.pory"
	walk_right
# 143 "data/maps/Route22/scripts.pory"
	walk_right
# 144 "data/maps/Route22/scripts.pory"
	walk_in_place_faster_down
# 145 "data/maps/Route22/scripts.pory"
	step_end

# 148 "data/maps/Route22/scripts.pory"
Route22_Movement_PlayerFaceRival:
# 149 "data/maps/Route22/scripts.pory"
	delay_16
# 150 "data/maps/Route22/scripts.pory"
	delay_16
# 151 "data/maps/Route22/scripts.pory"
	delay_16
# 152 "data/maps/Route22/scripts.pory"
	delay_16
# 153 "data/maps/Route22/scripts.pory"
	delay_16
# 154 "data/maps/Route22/scripts.pory"
	delay_16
# 155 "data/maps/Route22/scripts.pory"
	delay_16
# 156 "data/maps/Route22/scripts.pory"
	delay_8
# 157 "data/maps/Route22/scripts.pory"
	walk_in_place_faster_up
# 158 "data/maps/Route22/scripts.pory"
	step_end

Route22_EventScript_LateRivalTriggerTop::
# 162 "data/maps/Route22/scripts.pory"
	lockall
# 163 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 0
# 164 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_LateRival
	end


Route22_EventScript_LateRivalTriggerMid::
# 169 "data/maps/Route22/scripts.pory"
	lockall
# 170 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 1
# 171 "data/maps/Route22/scripts.pory"
	setobjectxyperm 1, 25, 5
# 172 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_LateRival
	end


Route22_EventScript_LateRivalTriggerBottom::
# 177 "data/maps/Route22/scripts.pory"
	lockall
# 178 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 2
# 179 "data/maps/Route22/scripts.pory"
	setobjectxyperm 1, 25, 5
# 180 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_LateRival
	end


Route22_EventScript_LateRival::
# 185 "data/maps/Route22/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 186 "data/maps/Route22/scripts.pory"
	addobject 1
# 187 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route22_EventScript_LateRivalApproach
# 188 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route22_EventScript_LateRivalApproach
# 189 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route22_EventScript_LateRivalApproachBottom
# 190 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_LateRivalIntro
# 191 "data/maps/Route22/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 192 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, Route22_EventScript_LateRivalSquirtle
# 193 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, Route22_EventScript_LateRivalBulbasaur
# 194 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, Route22_EventScript_LateRivalCharmander
# 195 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_LateRivalPostBattle
# 196 "data/maps/Route22/scripts.pory"
	closemessage
# 197 "data/maps/Route22/scripts.pory"
	delay 10
# 198 "data/maps/Route22/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 199 "data/maps/Route22/scripts.pory"
	applymovement 1, Route22_Movement_LateRivalExit
# 200 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 201 "data/maps/Route22/scripts.pory"
	fadedefaultbgm
# 202 "data/maps/Route22/scripts.pory"
	removeobject 1
# 203 "data/maps/Route22/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 4
# 204 "data/maps/Route22/scripts.pory"
	releaseall
	end


Route22_EventScript_LateRivalApproach::
# 209 "data/maps/Route22/scripts.pory"
	applymovement 1, Route22_Movement_RivalApproach
# 210 "data/maps/Route22/scripts.pory"
	waitmovement 0
	return


Route22_EventScript_LateRivalApproachBottom::
# 215 "data/maps/Route22/scripts.pory"
	applymovement 1, Route22_Movement_RivalApproachBottom
# 216 "data/maps/Route22/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route22_Movement_PlayerFaceRival
# 217 "data/maps/Route22/scripts.pory"
	waitmovement 0
	return


Route22_EventScript_LateRivalSquirtle::
# 222 "data/maps/Route22/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_SQUIRTLE, Route22_Text_LateRivalDefeat
	return


Route22_EventScript_LateRivalBulbasaur::
# 227 "data/maps/Route22/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_BULBASAUR, Route22_Text_LateRivalDefeat
	return


Route22_EventScript_LateRivalCharmander::
# 232 "data/maps/Route22/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_CHARMANDER, Route22_Text_LateRivalDefeat
	return


# 236 "data/maps/Route22/scripts.pory"
Route22_Movement_LateRivalExit:
# 237 "data/maps/Route22/scripts.pory"
	walk_left
# 238 "data/maps/Route22/scripts.pory"
	walk_left
# 239 "data/maps/Route22/scripts.pory"
	walk_left
# 240 "data/maps/Route22/scripts.pory"
	walk_left
# 241 "data/maps/Route22/scripts.pory"
	walk_left
# 242 "data/maps/Route22/scripts.pory"
	walk_left
# 243 "data/maps/Route22/scripts.pory"
	walk_left
# 244 "data/maps/Route22/scripts.pory"
	step_end

Route22_EventScript_LeagueGateSign::
# 248 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_LeagueGateSign, MSGBOX_SIGN
	end


Route22_Text_EarlyRivalIntro::
# 252 "data/maps/Route22/scripts.pory"
	.string "{RIVAL}: Hey! {PLAYER}!\p"
	.string "You're off to the POKéMON LEAGUE?\n"
	.string "Forget about it!\p"
	.string "You probably don't have any\n"
	.string "BADGES, do you?\p"
	.string "The guard won't let you through\n"
	.string "without them.\p"
	.string "By the way, did your POKéMON get\n"
	.string "any stronger?$"

Route22_Text_EarlyRivalDefeat::
# 264 "data/maps/Route22/scripts.pory"
	.string "Awww!\n"
	.string "You just lucked out!$"

Route22_Text_EarlyRivalPostBattle::
# 269 "data/maps/Route22/scripts.pory"
	.string "I heard the POKéMON LEAGUE is\n"
	.string "crawling with tough TRAINERS.\p"
	.string "I have to figure out how to get\n"
	.string "past them.\p"
	.string "You should quit dawdling and get a\n"
	.string "move on!$"

Route22_Text_LateRivalIntro::
# 278 "data/maps/Route22/scripts.pory"
	.string "{RIVAL}: What? {PLAYER}!\n"
	.string "What a surprise to see you here!\p"
	.string "So you're going to the POKéMON\n"
	.string "LEAGUE?\p"
	.string "You collected all the BADGES, too?\n"
	.string "That's cool!\p"
	.string "Then I'll whip you, {PLAYER}, as a\n"
	.string "warm-up for the POKéMON LEAGUE!\p"
	.string "Come on!$"

Route22_Text_LateRivalDefeat::
# 290 "data/maps/Route22/scripts.pory"
	.string "What!?\p"
	.string "I was just careless, you!$"

Route22_Text_LateRivalPostBattle::
# 295 "data/maps/Route22/scripts.pory"
	.string "That loosened me up.\n"
	.string "I'm ready for the POKéMON LEAGUE!\p"
	.string "{PLAYER}, you need more practice.\p"
	.string "But hey, you know that!\n"
	.string "I'm out of here. Smell ya!$"

Route22_Text_LeagueGateSign::
# 303 "data/maps/Route22/scripts.pory"
	.string "POKéMON LEAGUE\n"
	.string "Front Gate$"
