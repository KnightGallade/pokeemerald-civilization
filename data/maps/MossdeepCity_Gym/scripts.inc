# 1 "data/maps/MossdeepCity_Gym/scripts.pory"

# 2 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_MapScripts::
# 3 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_Gym_OnTransition
# 4 "data/maps/MossdeepCity_Gym/scripts.pory"
	.byte 0
# 5 "data/maps/MossdeepCity_Gym/scripts.pory"

# 6 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnTransition:
# 7 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower since it can collide with moving statues
# 8 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 9 "data/maps/MossdeepCity_Gym/scripts.pory"

# 10 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLiza::
# 11 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaIntro, MossdeepCity_Gym_Text_TateAndLizaDefeat, MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons, MossdeepCity_Gym_EventScript_TateAndLizaDefeated, NO_MUSIC
# 12 "data/maps/MossdeepCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 13 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MossdeepCity_Gym_EventScript_TateAndLizaRematch
# 14 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_CALM_MIND, MossdeepCity_Gym_EventScript_GiveCalmMind2
# 15 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_DEFAULT
# 16 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 17 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 18 "data/maps/MossdeepCity_Gym/scripts.pory"

# 19 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaDefeated::
# 20 "data/maps/MossdeepCity_Gym/scripts.pory"
	message MossdeepCity_Gym_Text_ReceivedMindBadge
# 21 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmessage
# 22 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 23 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
# 24 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 25 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HOENN_BADGE07_GET
# 26 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
# 27 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
# 28 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_UNKNOWN_0x393
# 29 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 30 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 31 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 32 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 33 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 34 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 35 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
# 36 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 1
# 37 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
# 38 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
# 39 "data/maps/MossdeepCity_Gym/scripts.pory"
	call MossdeepCity_Gym_EventScript_GiveCalmMind
# 40 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 41 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 42 "data/maps/MossdeepCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 43 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
# 44 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitfanfare
# 45 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 46 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 47 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
# 48 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 49 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 50 "data/maps/MossdeepCity_Gym/scripts.pory"

# 51 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind2::
# 52 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_CALM_MIND
# 53 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 54 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 55 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 56 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 57 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 58 "data/maps/MossdeepCity_Gym/scripts.pory"

# 59 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind::
# 60 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_CALM_MIND
# 61 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 62 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 63 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 64 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 65 "data/maps/MossdeepCity_Gym/scripts.pory"

# 66 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaRematch::
# 67 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons
# 68 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
# 69 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 70 "data/maps/MossdeepCity_Gym/scripts.pory"

# 71 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_WarpToEntrance::
# 72 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 73 "data/maps/MossdeepCity_Gym/scripts.pory"
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
# 74 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitstate
# 75 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 76 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 77 "data/maps/MossdeepCity_Gym/scripts.pory"

# 78 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Preston::
# 79 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
# 80 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 81 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 82 "data/maps/MossdeepCity_Gym/scripts.pory"

# 83 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Virgil::
# 84 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
# 85 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 87 "data/maps/MossdeepCity_Gym/scripts.pory"

# 88 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Blake::
# 89 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
# 90 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 92 "data/maps/MossdeepCity_Gym/scripts.pory"

# 93 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Hannah::
# 94 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
# 95 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
# 96 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 97 "data/maps/MossdeepCity_Gym/scripts.pory"

# 98 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Samantha::
# 99 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
# 100 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
# 101 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 102 "data/maps/MossdeepCity_Gym/scripts.pory"

# 103 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Maura::
# 104 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
# 105 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
# 106 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 107 "data/maps/MossdeepCity_Gym/scripts.pory"

# 108 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Sylvia::
# 109 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
# 110 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
# 111 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 112 "data/maps/MossdeepCity_Gym/scripts.pory"

# 113 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nate::
# 114 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
# 115 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 116 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 117 "data/maps/MossdeepCity_Gym/scripts.pory"

# 118 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Macey::
# 119 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
# 120 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
# 121 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 122 "data/maps/MossdeepCity_Gym/scripts.pory"

# 123 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Clifford::
# 124 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
# 125 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
# 126 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 127 "data/maps/MossdeepCity_Gym/scripts.pory"

# 128 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nicholas::
# 129 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
# 130 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 132 "data/maps/MossdeepCity_Gym/scripts.pory"

# 133 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Kathleen::
# 134 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
# 135 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 137 "data/maps/MossdeepCity_Gym/scripts.pory"

# 138 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuide::
# 139 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 140 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 141 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
# 142 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 143 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 144 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 145 "data/maps/MossdeepCity_Gym/scripts.pory"

# 146 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuidePostVictory::
# 147 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 148 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 149 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 150 "data/maps/MossdeepCity_Gym/scripts.pory"

# 151 "data/maps/MossdeepCity_Gym/scripts.pory"
@ Leftover from RS, functionally unused
# 152 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Movement_WaitAfterSwitchUse:
# 153 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 154 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 155 "data/maps/MossdeepCity_Gym/scripts.pory"
	step_end
# 156 "data/maps/MossdeepCity_Gym/scripts.pory"

# 157 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_LeftGymStatue::
# 158 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 159 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_HOENN_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 160 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 161 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 162 "data/maps/MossdeepCity_Gym/scripts.pory"

# 163 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RightGymStatue::
# 164 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 165 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_HOENN_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 166 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 167 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 168 "data/maps/MossdeepCity_Gym/scripts.pory"

# 169 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatueCertified::
# 170 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 171 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 172 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 173 "data/maps/MossdeepCity_Gym/scripts.pory"

# 174 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatue::
# 175 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 176 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 177 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 178 "data/maps/MossdeepCity_Gym/scripts.pory"

# 179 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_YellowFloorSwitch::
# 180 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 181 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 182 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 183 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 184 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 0
# 185 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 186 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 187 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 188 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 189 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 190 "data/maps/MossdeepCity_Gym/scripts.pory"

# 191 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlueFloorSwitch::
# 192 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 193 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 194 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 195 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 196 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 1
# 197 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 198 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 199 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 200 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 201 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 202 "data/maps/MossdeepCity_Gym/scripts.pory"

# 203 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GreenFloorSwitch::
# 204 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 205 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 206 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 207 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 208 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 2
# 209 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 210 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 211 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 212 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 213 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 214 "data/maps/MossdeepCity_Gym/scripts.pory"

# 215 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
# 216 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 217 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 218 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 219 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 220 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 3
# 221 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 222 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 223 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 224 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 225 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 226 "data/maps/MossdeepCity_Gym/scripts.pory"

# 227 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RedFloorSwitch::
# 228 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 229 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 230 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 231 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 232 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 4
# 233 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 234 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 235 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 236 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 237 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 238 "data/maps/MossdeepCity_Gym/scripts.pory"

# 239 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuideAdvice:
# 240 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-bound\n"
# 241 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}?\p"
# 242 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The GYM LEADERS here use\n"
# 243 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "PSYCHIC-type POKéMON.\p"
# 244 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you go up against them with\n"
# 245 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "FIGHTING- or POISON-type POKéMON,\l"
# 246 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "they'll inflict horrible damage!\p"
# 247 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Plus, they'll come at you with\n"
# 248 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "outstanding combination attacks.\p"
# 249 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you want to win, you'll need to show\n"
# 250 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "them how tight you are with your\l"
# 251 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "POKéMON. Go for it!$"
# 252 "data/maps/MossdeepCity_Gym/scripts.pory"

# 253 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuidePostVictory:
# 254 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wow, you're astounding!\n"
# 255 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're one great TRAINER!$"
# 256 "data/maps/MossdeepCity_Gym/scripts.pory"

# 257 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonIntro:
# 258 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Battles hinge on the strength of your\n"
# 259 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "spirit! The weak-spirited will never win!$"
# 260 "data/maps/MossdeepCity_Gym/scripts.pory"

# 261 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonDefeat:
# 262 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I lost!\n"
# 263 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I must temper my spirit again!$"
# 264 "data/maps/MossdeepCity_Gym/scripts.pory"

# 265 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonPostBattle:
# 266 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The indecisive lose.\n"
# 267 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "That's my warning to you.$"
# 268 "data/maps/MossdeepCity_Gym/scripts.pory"

# 269 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilIntro:
# 270 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me see your talent!$"
# 271 "data/maps/MossdeepCity_Gym/scripts.pory"

# 272 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilDefeat:
# 273 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You possess spectacular talent!$"
# 274 "data/maps/MossdeepCity_Gym/scripts.pory"

# 275 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilPostBattle:
# 276 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If there are prodigies in the world,\n"
# 277 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "then our GYM LEADERS are them!\p"
# 278 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "However, you may be even more talented\n"
# 279 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "than them…$"
# 280 "data/maps/MossdeepCity_Gym/scripts.pory"

# 281 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeIntro:
# 282 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Fufufufu… Watch me levitate a POKé\n"
# 283 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "BALL telekinetically!\p"
# 284 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wrooooooooaaaar!\n"
# 285 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … … …\p"
# 286 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Sometimes, I'm out of sync…$"
# 287 "data/maps/MossdeepCity_Gym/scripts.pory"

# 288 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeDefeat:
# 289 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "My POKéMON battling skills are out\n"
# 290 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of sync, too!$"
# 291 "data/maps/MossdeepCity_Gym/scripts.pory"

# 292 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakePostBattle:
# 293 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A POKé BALL was too heavy to lift\n"
# 294 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "psychically. But this dust bunny…\p"
# 295 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Whoooooooooooooooh!\n"
# 296 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …\p"
# 297 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "No, I'm not cheating!\n"
# 298 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I didn't blow on it! Honestly!$"
# 299 "data/maps/MossdeepCity_Gym/scripts.pory"

# 300 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahIntro:
# 301 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "When you lose to me, don't be too hard\n"
# 302 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "on yourself.\p"
# 303 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It's not that you're weak--I'm just\n"
# 304 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "too strong!$"
# 305 "data/maps/MossdeepCity_Gym/scripts.pory"

# 306 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahDefeat:
# 307 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're just too strong!$"
# 308 "data/maps/MossdeepCity_Gym/scripts.pory"

# 309 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahPostBattle:
# 310 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I'm not going to get down on myself for\n"
# 311 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "losing. I just need to train harder.\p"
# 312 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Positive thinking--that's my strong\n"
# 313 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "point!$"
# 314 "data/maps/MossdeepCity_Gym/scripts.pory"

# 315 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaIntro:
# 316 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see it…\n"
# 317 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see your future…\p"
# 318 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you can beat me, I will tell you\n"
# 319 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your future!$"
# 320 "data/maps/MossdeepCity_Gym/scripts.pory"

# 321 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaDefeat:
# 322 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I surrender!$"
# 323 "data/maps/MossdeepCity_Gym/scripts.pory"

# 324 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaPostBattle:
# 325 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You will wage a terrifically intense\n"
# 326 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "battle with our GYM LEADERS…\p"
# 327 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The result…\n"
# 328 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You won't hear it from me!$"
# 329 "data/maps/MossdeepCity_Gym/scripts.pory"

# 330 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraIntro:
# 331 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The roads you have traveled…\n"
# 332 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you have experienced…\p"
# 333 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Come at me with everything you've\n"
# 334 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "learned!$"
# 335 "data/maps/MossdeepCity_Gym/scripts.pory"

# 336 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraDefeat:
# 337 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You've traveled a path of greatness!$"
# 338 "data/maps/MossdeepCity_Gym/scripts.pory"

# 339 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraPostBattle:
# 340 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A bright future awaits those who have\n"
# 341 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "worked diligently.\p"
# 342 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "For those who lazed idly, there is\n"
# 343 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "only despair at the end.\p"
# 344 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What goes around comes around…$"
# 345 "data/maps/MossdeepCity_Gym/scripts.pory"

# 346 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaIntro:
# 347 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Even at the risk of life, I will win\n"
# 348 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "this battle!$"
# 349 "data/maps/MossdeepCity_Gym/scripts.pory"

# 350 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaDefeat:
# 351 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you do…\n"
# 352 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It horrifies me…$"
# 353 "data/maps/MossdeepCity_Gym/scripts.pory"

# 354 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaPostBattle:
# 355 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How dare you beat me…\p"
# 356 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It won't be my fault if something\n"
# 357 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrible befalls you…$"
# 358 "data/maps/MossdeepCity_Gym/scripts.pory"

# 359 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateIntro:
# 360 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Hohoho.\p"
# 361 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You need me to show you how tenacious\n"
# 362 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the PSYCHIC type can be.$"
# 363 "data/maps/MossdeepCity_Gym/scripts.pory"

# 364 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateDefeat:
# 365 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh! My, my!\n"
# 366 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your battle style is fantastic!$"
# 367 "data/maps/MossdeepCity_Gym/scripts.pory"

# 368 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NatePostBattle:
# 369 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I… I don't let defeat rattle m-me,\n"
# 370 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "however b-badly.$"
# 371 "data/maps/MossdeepCity_Gym/scripts.pory"

# 372 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenIntro:
# 373 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me show you a perfectly awful,\n"
# 374 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrifying time!$"
# 375 "data/maps/MossdeepCity_Gym/scripts.pory"

# 376 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenDefeat:
# 377 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "N-nooooo!$"
# 378 "data/maps/MossdeepCity_Gym/scripts.pory"

# 379 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenPostBattle:
# 380 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your vitality is contagious!\n"
# 381 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Get away from me quickly!$"
# 382 "data/maps/MossdeepCity_Gym/scripts.pory"

# 383 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordIntro:
# 384 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I may be past my prime, but I suggest\n"
# 385 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "you not patronize me.$"
# 386 "data/maps/MossdeepCity_Gym/scripts.pory"

# 387 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordDefeat:
# 388 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ah, you overflow with the power\n"
# 389 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of youth!$"
# 390 "data/maps/MossdeepCity_Gym/scripts.pory"

# 391 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordPostBattle:
# 392 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It seems that I could not overcome\n"
# 393 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your youthful energy.$"
# 394 "data/maps/MossdeepCity_Gym/scripts.pory"

# 395 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyIntro:
# 396 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're not getting through to the end!\n"
# 397 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Not if I can help it!$"
# 398 "data/maps/MossdeepCity_Gym/scripts.pory"

# 399 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyDefeat:
# 400 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How could you be so ludicrously\n"
# 401 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "strong?$"
# 402 "data/maps/MossdeepCity_Gym/scripts.pory"

# 403 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyPostBattle:
# 404 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Humph! You may be strong, but you're\n"
# 405 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "not suitable for the PSYCHIC type!\p"
# 406 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The way you battle is somehow brutal!$"
# 407 "data/maps/MossdeepCity_Gym/scripts.pory"

# 408 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasIntro:
# 409 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wroooar! Have a taste of my super\n"
# 410 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "POKéMON hard-battling power!$"
# 411 "data/maps/MossdeepCity_Gym/scripts.pory"

# 412 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasDefeat:
# 413 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh!\n"
# 414 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Done in!$"
# 415 "data/maps/MossdeepCity_Gym/scripts.pory"

# 416 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasPostBattle:
# 417 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "All right! I think I'll develop a special\n"
# 418 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "invincible POKéMON power next.$"
# 419 "data/maps/MossdeepCity_Gym/scripts.pory"

# 420 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaIntro:
# 421 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Hehehe… Were you surprised?\p"
# 422 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Fufufu… Were you surprised?\p"
# 423 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: That there are two GYM LEADERS?\n"
# 424 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: That there are two GYM LEADERS?\p"
# 425 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We're twins!\n"
# 426 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We're twins!\p"
# 427 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We don't need to talk because…\n"
# 428 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We can each determine what…\p"
# 429 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The other is thinking…\n"
# 430 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: All in our minds!\p"
# 431 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: This combination of ours…\n"
# 432 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Can you beat it?$"
# 433 "data/maps/MossdeepCity_Gym/scripts.pory"

# 434 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaDefeat:
# 435 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: What?! Our combination…\n"
# 436 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Was shattered!\p"
# 437 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It can't be helped. You've won…\n"
# 438 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: So, in recognition, take this.$"
# 439 "data/maps/MossdeepCity_Gym/scripts.pory"

# 440 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ReceivedMindBadge:
# 441 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER} received the MIND BADGE\n"
# 442 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "from TATE and LIZA.$"
# 443 "data/maps/MossdeepCity_Gym/scripts.pory"

# 444 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis:
# 445 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The MIND BADGE enhances the\n"
# 446 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "SP. ATK and SP. DEF of POKéMON.\p"
# 447 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It also lets you use the HM move\n"
# 448 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "DIVE outside of battle.\p"
# 449 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You should also take this, too.$"
# 450 "data/maps/MossdeepCity_Gym/scripts.pory"

# 451 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainCalmMind:
# 452 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: That TM04 contains…\n"
# 453 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: CALM MIND!\p"
# 454 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It raises SP. ATK and…\n"
# 455 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It raises SP. DEF!\p"
# 456 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It's a move that's perfect…\n"
# 457 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: For PSYCHIC POKéMON!\p"
# 458 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 459 "data/maps/MossdeepCity_Gym/scripts.pory"

# 460 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_RegisteredTateAndLiza:
# 461 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Registered GYM LEADERS TATE & LIZA\n"
# 462 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 463 "data/maps/MossdeepCity_Gym/scripts.pory"

# 464 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostBattle:
# 465 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Looks like the bond between you\n"
# 466 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "and your POKéMON is far stronger than\l"
# 467 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the bond that we share as twins.\p"
# 468 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You will become even stronger!\n"
# 469 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "We've battled you, so we know.$"
# 470 "data/maps/MossdeepCity_Gym/scripts.pory"

# 471 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons:
# 472 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Hehehe… Were you surprised?\p"
# 473 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: That there are two GYM LEADERS?\p"
# 474 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Oops, you have only one…\n"
# 475 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: POKéMON that can battle.\p"
# 476 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We can't battle that way!\p"
# 477 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: If you want to challenge us,\n"
# 478 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "bring some more POKéMON.$"
# 479 "data/maps/MossdeepCity_Gym/scripts.pory"

# 480 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatue:
# 481 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM$"
# 482 "data/maps/MossdeepCity_Gym/scripts.pory"

# 483 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatueCertified:
# 484 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\p"
# 485 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA AND TATE'S CERTIFIED TRAINERS:\n"
# 486 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 487 "data/maps/MossdeepCity_Gym/scripts.pory"

# 488 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPreRematch:
# 489 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: POKéMON…\n"
# 490 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: POKéMON…\p"
# 491 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: By changing the party's mix…\n"
# 492 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: The battle style changes.\p"
# 493 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: But me…\n"
# 494 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: But me…\p"
# 495 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: I'll always be with LIZA!\n"
# 496 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: I'll always be with TATE!\p"
# 497 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Our combination…\n"
# 498 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We'll show you again and again!$"
# 499 "data/maps/MossdeepCity_Gym/scripts.pory"

# 500 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchDefeat:
# 501 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You and your POKéMON…\n"
# 502 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It's as if you were siblings!$"
# 503 "data/maps/MossdeepCity_Gym/scripts.pory"

# 504 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostRematch:
# 505 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You can knock us down,\n"
# 506 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "but we'll never stay down!\p"
# 507 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Because the two of us,\n"
# 508 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "we always support each other!$"
# 509 "data/maps/MossdeepCity_Gym/scripts.pory"

# 510 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons:
# 511 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You're back again…\n"
# 512 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You're back again…\p"
# 513 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: To give us a rematch.\n"
# 514 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: To give us a rematch.\p"
# 515 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: But…\n"
# 516 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: For our match…\p"
# 517 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You brought just one POKéMON!\n"
# 518 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You brought just one POKéMON!\p"
# 519 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We need you to bring at least…\n"
# 520 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Two POKéMON when you come back.$"
