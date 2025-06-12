Route22_MapScripts::
	.byte 0


Route22_EventScript_EarlyRivalTriggerTop::
# 4 "data/maps/Route22/scripts.pory"
	lockall
# 5 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 0
# 6 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_EarlyRival
	end


Route22_EventScript_EarlyRivalTriggerMid::
# 11 "data/maps/Route22/scripts.pory"
	lockall
# 12 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 1
# 13 "data/maps/Route22/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 14 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_EarlyRival
	end


Route22_EventScript_EarlyRivalTriggerBottom::
# 19 "data/maps/Route22/scripts.pory"
	lockall
# 20 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 2
# 21 "data/maps/Route22/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 22 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_EarlyRival
	end


Route22_EventScript_EarlyRival::
# 27 "data/maps/Route22/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 28 "data/maps/Route22/scripts.pory"
	addobject LOCALID_ROUTE22_RIVAL
# 29 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route22_EventScript_EarlyRivalApproach
# 30 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route22_EventScript_EarlyRivalApproach
# 31 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route22_EventScript_EarlyRivalApproachBottom
# 32 "data/maps/Route22/scripts.pory"
	delay 6
# 33 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_EarlyRivalIntro
# 34 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, Route22_EventScript_EarlyRivalSquirtle
# 35 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, Route22_EventScript_EarlyRivalBulbasaur
# 36 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, Route22_EventScript_EarlyRivalCharmander
# 37 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_EarlyRivalPostBattle
# 38 "data/maps/Route22/scripts.pory"
	closemessage
# 39 "data/maps/Route22/scripts.pory"
	delay 10
# 40 "data/maps/Route22/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 41 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route22_EventScript_EarlyRivalExit
# 42 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route22_EventScript_EarlyRivalExit
# 43 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route22_EventScript_EarlyRivalExitBottom
# 44 "data/maps/Route22/scripts.pory"
	fadedefaultbgm
# 45 "data/maps/Route22/scripts.pory"
	removeobject LOCALID_ROUTE22_RIVAL
# 46 "data/maps/Route22/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 2
# 47 "data/maps/Route22/scripts.pory"
	releaseall
	end


Route22_EventScript_EarlyRivalApproach::
# 52 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproach
# 53 "data/maps/Route22/scripts.pory"
	waitmovement 0
	return


Route22_EventScript_EarlyRivalApproachBottom::
# 58 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproachBottom
# 59 "data/maps/Route22/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route22_Movement_PlayerFaceRival
# 60 "data/maps/Route22/scripts.pory"
	waitmovement 0
	return


Route22_EventScript_EarlyRivalSquirtle::
# 65 "data/maps/Route22/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_RIVAL_ROUTE22_EARLY_SQUIRTLE, Route22_Text_EarlyRivalDefeat
	return


Route22_EventScript_EarlyRivalBulbasaur::
# 70 "data/maps/Route22/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_RIVAL_ROUTE22_EARLY_BULBASAUR, Route22_Text_EarlyRivalDefeat
	return


Route22_EventScript_EarlyRivalCharmander::
# 75 "data/maps/Route22/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_RIVAL_ROUTE22_EARLY_CHARMANDER, Route22_Text_EarlyRivalDefeat
	return


Route22_EventScript_EarlyRivalExit::
# 80 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_EarlyRivalExit
# 81 "data/maps/Route22/scripts.pory"
	waitmovement 0
	return


Route22_EventScript_EarlyRivalExitBottom::
# 86 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_EarlyRivalExitBottom
# 87 "data/maps/Route22/scripts.pory"
	waitmovement 0
	return


# 91 "data/maps/Route22/scripts.pory"
Route22_Movement_EarlyRivalExit:
# 92 "data/maps/Route22/scripts.pory"
	walk_down
# 93 "data/maps/Route22/scripts.pory"
	walk_right
# 94 "data/maps/Route22/scripts.pory"
	walk_right
# 95 "data/maps/Route22/scripts.pory"
	walk_right
# 96 "data/maps/Route22/scripts.pory"
	walk_right
# 97 "data/maps/Route22/scripts.pory"
	walk_right
# 98 "data/maps/Route22/scripts.pory"
	walk_down
# 99 "data/maps/Route22/scripts.pory"
	walk_down
# 100 "data/maps/Route22/scripts.pory"
	walk_down
# 101 "data/maps/Route22/scripts.pory"
	walk_down
# 102 "data/maps/Route22/scripts.pory"
	walk_down
# 103 "data/maps/Route22/scripts.pory"
	walk_down
# 104 "data/maps/Route22/scripts.pory"
	step_end

# 107 "data/maps/Route22/scripts.pory"
Route22_Movement_EarlyRivalExitBottom:
# 108 "data/maps/Route22/scripts.pory"
	walk_right
# 109 "data/maps/Route22/scripts.pory"
	walk_right
# 110 "data/maps/Route22/scripts.pory"
	walk_right
# 111 "data/maps/Route22/scripts.pory"
	walk_right
# 112 "data/maps/Route22/scripts.pory"
	walk_down
# 113 "data/maps/Route22/scripts.pory"
	walk_down
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
	step_end

# 122 "data/maps/Route22/scripts.pory"
Route22_Movement_RivalApproach:
# 123 "data/maps/Route22/scripts.pory"
	walk_right
# 124 "data/maps/Route22/scripts.pory"
	walk_right
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
	step_end

# 133 "data/maps/Route22/scripts.pory"
Route22_Movement_RivalApproachBottom:
# 134 "data/maps/Route22/scripts.pory"
	walk_right
# 135 "data/maps/Route22/scripts.pory"
	walk_right
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
	walk_in_place_faster_down
# 143 "data/maps/Route22/scripts.pory"
	step_end

# 146 "data/maps/Route22/scripts.pory"
Route22_Movement_PlayerFaceRival:
# 147 "data/maps/Route22/scripts.pory"
	delay_16
# 148 "data/maps/Route22/scripts.pory"
	delay_16
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
	delay_8
# 155 "data/maps/Route22/scripts.pory"
	walk_in_place_faster_up
# 156 "data/maps/Route22/scripts.pory"
	step_end

Route22_EventScript_LateRivalTriggerTop::
# 160 "data/maps/Route22/scripts.pory"
	lockall
# 161 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 0
# 162 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_LateRival
	end


Route22_EventScript_LateRivalTriggerMid::
# 167 "data/maps/Route22/scripts.pory"
	lockall
# 168 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 1
# 169 "data/maps/Route22/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 170 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_LateRival
	end


Route22_EventScript_LateRivalTriggerBottom::
# 175 "data/maps/Route22/scripts.pory"
	lockall
# 176 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 2
# 177 "data/maps/Route22/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 178 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_LateRival
	end


Route22_EventScript_LateRival::
# 183 "data/maps/Route22/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 184 "data/maps/Route22/scripts.pory"
	addobject LOCALID_ROUTE22_RIVAL
# 185 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route22_EventScript_LateRivalApproach
# 186 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route22_EventScript_LateRivalApproach
# 187 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route22_EventScript_LateRivalApproachBottom
# 188 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_LateRivalIntro
# 189 "data/maps/Route22/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ROUTE22_RIVAL
# 190 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, Route22_EventScript_LateRivalSquirtle
# 191 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, Route22_EventScript_LateRivalBulbasaur
# 192 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, Route22_EventScript_LateRivalCharmander
# 193 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_LateRivalPostBattle
# 194 "data/maps/Route22/scripts.pory"
	closemessage
# 195 "data/maps/Route22/scripts.pory"
	delay 10
# 196 "data/maps/Route22/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 197 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_LateRivalExit
# 198 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 199 "data/maps/Route22/scripts.pory"
	fadedefaultbgm
# 200 "data/maps/Route22/scripts.pory"
	removeobject LOCALID_ROUTE22_RIVAL
# 201 "data/maps/Route22/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 4
# 202 "data/maps/Route22/scripts.pory"
	releaseall
	end


Route22_EventScript_LateRivalApproach::
# 207 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproach
# 208 "data/maps/Route22/scripts.pory"
	waitmovement 0
	return


Route22_EventScript_LateRivalApproachBottom::
# 213 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproachBottom
# 214 "data/maps/Route22/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route22_Movement_PlayerFaceRival
# 215 "data/maps/Route22/scripts.pory"
	waitmovement 0
	return


Route22_EventScript_LateRivalSquirtle::
# 220 "data/maps/Route22/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_SQUIRTLE, Route22_Text_LateRivalDefeat
	return


Route22_EventScript_LateRivalBulbasaur::
# 225 "data/maps/Route22/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_BULBASAUR, Route22_Text_LateRivalDefeat
	return


Route22_EventScript_LateRivalCharmander::
# 230 "data/maps/Route22/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_CHARMANDER, Route22_Text_LateRivalDefeat
	return


# 234 "data/maps/Route22/scripts.pory"
Route22_Movement_LateRivalExit:
# 235 "data/maps/Route22/scripts.pory"
	walk_left
# 236 "data/maps/Route22/scripts.pory"
	walk_left
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
	step_end

Route22_EventScript_LeagueGateSign::
# 246 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_LeagueGateSign, MSGBOX_SIGN
	end


Route22_Text_EarlyRivalIntro::
# 250 "data/maps/Route22/scripts.pory"
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
# 262 "data/maps/Route22/scripts.pory"
	.string "Awww!\n"
	.string "You just lucked out!$"

Route22_Text_EarlyRivalPostBattle::
# 267 "data/maps/Route22/scripts.pory"
	.string "I heard the POKéMON LEAGUE is\n"
	.string "crawling with tough TRAINERS.\p"
	.string "I have to figure out how to get\n"
	.string "past them.\p"
	.string "You should quit dawdling and get a\n"
	.string "move on!$"

Route22_Text_LateRivalIntro::
# 276 "data/maps/Route22/scripts.pory"
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
# 288 "data/maps/Route22/scripts.pory"
	.string "What!?\p"
	.string "I was just careless, you!$"

Route22_Text_LateRivalPostBattle::
# 293 "data/maps/Route22/scripts.pory"
	.string "That loosened me up.\n"
	.string "I'm ready for the POKéMON LEAGUE!\p"
	.string "{PLAYER}, you need more practice.\p"
	.string "But hey, you know that!\n"
	.string "I'm out of here. Smell ya!$"

Route22_Text_LeagueGateSign::
# 301 "data/maps/Route22/scripts.pory"
	.string "POKéMON LEAGUE\n"
	.string "Front Gate$"
