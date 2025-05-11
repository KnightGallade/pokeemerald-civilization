ViridianCity_Gym_MapScripts::
	.byte 0


ViridianCity_Gym_EventScript_Giovanni::
# 6 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_GIOVANNI, ViridianCity_Gym_Text_GiovanniIntro, ViridianCity_Gym_Text_GiovanniDefeat, ViridianCity_Gym_EventScript_DefeatedGiovanni, NO_MUSIC
# 7 "data/maps/ViridianCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM26_FROM_GIOVANNI, ViridianCity_Gym_EventScript_GiveTM26
# 8 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GiovanniPostBattle
# 9 "data/maps/ViridianCity_Gym/scripts.pory"
	closemessage
# 10 "data/maps/ViridianCity_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 11 "data/maps/ViridianCity_Gym/scripts.pory"
	removeobject 8
# 12 "data/maps/ViridianCity_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 13 "data/maps/ViridianCity_Gym/scripts.pory"
	release
	end


ViridianCity_Gym_EventScript_DefeatedGiovanni::
# 18 "data/maps/ViridianCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MISC_KANTO_ROCKETS
# 19 "data/maps/ViridianCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_LEADER_GIOVANNI
# 20 "data/maps/ViridianCity_Gym/scripts.pory"
	setflag FLAG_KANTO_BADGE08_GET
# 21 "data/maps/ViridianCity_Gym/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 3
# 22 "data/maps/ViridianCity_Gym/scripts.pory"
	setvar VAR_0x8008, 16
# 23 "data/maps/ViridianCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 24 "data/maps/ViridianCity_Gym/scripts.pory"
	goto ViridianCity_Gym_EventScript_GiveTM26
	end


ViridianCity_Gym_EventScript_GiveTM26::
# 29 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_ExplainEarthBadgeTakeThis
# 30 "data/maps/ViridianCity_Gym/scripts.pory"
	checkitemspace ITEM_TM26
# 31 "data/maps/ViridianCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ViridianCity_Gym_EventScript_NoRoomForTM26
# 32 "data/maps/ViridianCity_Gym/scripts.pory"
	giveitem_msg ViridianCity_Gym_Text_ReceivedTM26FromGiovanni, ITEM_TM26
# 33 "data/maps/ViridianCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM26_FROM_GIOVANNI
# 34 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_ExplainTM26
# 35 "data/maps/ViridianCity_Gym/scripts.pory"
	release
	end


ViridianCity_Gym_EventScript_NoRoomForTM26::
# 40 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_YouDoNotHaveSpace
# 41 "data/maps/ViridianCity_Gym/scripts.pory"
	release
	end


ViridianCity_Gym_EventScript_Jason::
# 46 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAMER_JASON, ViridianCity_Gym_Text_JasonIntro, ViridianCity_Gym_Text_JasonDefeat
# 47 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_JasonPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_Cole::
# 52 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAMER_COLE, ViridianCity_Gym_Text_ColeIntro, ViridianCity_Gym_Text_ColeDefeat
# 53 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_ColePostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_Atsushi::
# 58 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_ATSUSHI, ViridianCity_Gym_Text_AtsushiIntro, ViridianCity_Gym_Text_AtsushiDefeat
# 59 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_AtsushiPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_Kiyo::
# 64 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_KIYO, ViridianCity_Gym_Text_KiyoIntro, ViridianCity_Gym_Text_KiyoDefeat
# 65 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_KiyoPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_Takashi::
# 70 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_TAKASHI, ViridianCity_Gym_Text_TakashiIntro, ViridianCity_Gym_Text_TakashiDefeat
# 71 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_Samuel::
# 76 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_SAMUEL, ViridianCity_Gym_Text_SamuelIntro, ViridianCity_Gym_Text_SamuelDefeat
# 77 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_Yuji::
# 82 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_YUJI, ViridianCity_Gym_Text_YujiIntro, ViridianCity_Gym_Text_YujiDefeat
# 83 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_YujiPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_Warren::
# 88 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_WARREN, ViridianCity_Gym_Text_WarrenIntro, ViridianCity_Gym_Text_WarrenDefeat
# 89 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_GymGuy::
# 94 "data/maps/ViridianCity_Gym/scripts.pory"
	lock
# 95 "data/maps/ViridianCity_Gym/scripts.pory"
	faceplayer
# 96 "data/maps/ViridianCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_LEADER_GIOVANNI, ViridianCity_Gym_EventScript_GymGuyPostVictory
# 97 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymGuyAdvice
# 98 "data/maps/ViridianCity_Gym/scripts.pory"
	release
	end


ViridianCity_Gym_EventScript_GymGuyPostVictory::
# 103 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymGuyPostVictory
# 104 "data/maps/ViridianCity_Gym/scripts.pory"
	release
	end


ViridianCity_Gym_EventScript_GymStatue::
# 109 "data/maps/ViridianCity_Gym/scripts.pory"
	lockall
# 110 "data/maps/ViridianCity_Gym/scripts.pory"
	goto_if_set FLAG_KANTO_BADGE08_GET, ViridianCity_Gym_EventScript_GymStatuePostVictory
# 111 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymStatue
# 112 "data/maps/ViridianCity_Gym/scripts.pory"
	releaseall
	end


ViridianCity_Gym_EventScript_GymStatuePostVictory::
# 117 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymStatuePlayerWon
# 118 "data/maps/ViridianCity_Gym/scripts.pory"
	releaseall
	end


ViridianCity_Gym_Text_GiovanniIntro::
# 122 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "Fwahahaha!\n"
	.string "Welcome to my hideout!\p"
	.string "It shall be so until I can restore\n"
	.string "TEAM ROCKET to its former glory.\p"
	.string "But, you have found me again.\n"
	.string "So be it.\l"
	.string "This time, I'm not holding back!\p"
	.string "Once more, you shall face\n"
	.string "GIOVANNI, the greatest TRAINER!{PLAY_BGM}{MUS_RG_ENCOUNTER_ROCKET}$"

ViridianCity_Gym_Text_GiovanniDefeat::
# 134 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "Ha!\n"
	.string "That was a truly intense fight.\l"
	.string "You have won!\p"
	.string "As proof, here is the EARTHBADGE!\n"
	.string "{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}$"

ViridianCity_Gym_Text_GiovanniPostBattle::
# 142 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "Having lost in this fashion, \n"
	.string "I can't face my followers.\l"
	.string "I have betrayed their trust.\p"
	.string "As of today, TEAM ROCKET is\n"
	.string "finished forever!\p"
	.string "As for myself, I shall dedicate\n"
	.string "my life to training again.\p"
	.string "Let us meet again someday!\n"
	.string "Farewell!$"

ViridianCity_Gym_Text_ExplainEarthBadgeTakeThis::
# 154 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "The EARTHBADGE makes POKéMON of\n"
	.string "any level obey without question.\p"
	.string "It is evidence of your mastery as\n"
	.string "a POKéMON TRAINER.\p"
	.string "With it, you can challenge the\n"
	.string "POKéMON LEAGUE.\p"
	.string "Also, take this TM.\p"
	.string "Consider it a gift for your POKéMON\n"
	.string "LEAGUE challenge.$"

ViridianCity_Gym_Text_ReceivedTM26FromGiovanni::
# 166 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "{PLAYER} received TM26\n"
	.string "from GIOVANNI.$"

ViridianCity_Gym_Text_ExplainTM26::
# 171 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "TM26 contains EARTHQUAKE.\p"
	.string "It is a powerful attack that causes\n"
	.string "a massive tremor.\p"
	.string "I made it when I ran the GYM here,\n"
	.string "far too long ago… $"

ViridianCity_Gym_Text_YouDoNotHaveSpace::
# 179 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "You do not have space for this!$"

ViridianCity_Gym_Text_YujiIntro::
# 183 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "Heh!\n"
	.string "You must be running out of steam\l"
	.string "by now!$"

ViridianCity_Gym_Text_YujiDefeat::
# 189 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "I ran out of gas!$"

ViridianCity_Gym_Text_YujiPostBattle::
# 193 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "You'll need power to keep up with\n"
	.string "our GYM LEADER.$"

ViridianCity_Gym_Text_AtsushiIntro::
# 198 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "Rrrroar!\n"
	.string "I'm working myself into a rage!$"

ViridianCity_Gym_Text_AtsushiDefeat::
# 203 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "Wargh!$"

ViridianCity_Gym_Text_AtsushiPostBattle::
# 207 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "I'm still not worthy!$"

ViridianCity_Gym_Text_JasonIntro::
# 211 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "POKéMON and I, we make wonderful\n"
	.string "music together!$"

ViridianCity_Gym_Text_JasonDefeat::
# 216 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "You are in perfect harmony!$"

ViridianCity_Gym_Text_JasonPostBattle::
# 220 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "Do you know the identity of our\n"
	.string "GYM LEADER?$"

ViridianCity_Gym_Text_KiyoIntro::
# 225 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "Karate is the ultimate form of\n"
	.string "martial arts!$"

ViridianCity_Gym_Text_KiyoDefeat::
# 230 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "Aiyah!$"

ViridianCity_Gym_Text_KiyoPostBattle::
# 234 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "If my POKéMON were as good at\n"
	.string "karate as I…$"

ViridianCity_Gym_Text_WarrenIntro::
# 239 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "The truly talented win with style.$"

ViridianCity_Gym_Text_WarrenDefeat::
# 243 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "I lost my grip!$"

ViridianCity_Gym_Text_WarrenPostBattle::
# 247 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "The LEADER will scold me for\n"
	.string "losing this way…$"

ViridianCity_Gym_Text_TakashiIntro::
# 252 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "I'm the KARATE KING!\n"
	.string "Your fate rests with me!$"

ViridianCity_Gym_Text_TakashiDefeat::
# 257 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "Ayah!$"

ViridianCity_Gym_Text_TakashiPostBattle::
# 261 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "The POKéMON LEAGUE?\n"
	.string "You? Don't get cocky!$"

ViridianCity_Gym_Text_ColeIntro::
# 266 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "Your POKéMON will cower at the\n"
	.string "crack of my whip!$"

ViridianCity_Gym_Text_ColeDefeat::
# 271 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "Yowch!\n"
	.string "Whiplash!$"

ViridianCity_Gym_Text_ColePostBattle::
# 276 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "Wait!\n"
	.string "I was just careless!$"

ViridianCity_Gym_Text_SamuelIntro::
# 281 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "VIRIDIAN GYM was closed for a\n"
	.string "long time.\p"
	.string "But now, our LEADER is back!$"

ViridianCity_Gym_Text_SamuelDefeat::
# 287 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "I was beaten?$"

ViridianCity_Gym_Text_SamuelPostBattle::
# 291 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "You can go on to the POKéMON\n"
	.string "LEAGUE only by defeating our GYM\l"
	.string "LEADER!$"

ViridianCity_Gym_Text_GymGuyAdvice::
# 297 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "Yo!\n"
	.string "Champ in the making!\p"
	.string "Even I don't know the VIRIDIAN\n"
	.string "LEADER's identity.\p"
	.string "But one thing's certain.\n"
	.string "This will be the toughest of all\l"
	.string "the GYM LEADERS.\p"
	.string "Also, I heard that the TRAINERS\n"
	.string "here like GROUND-type POKéMON.$"

ViridianCity_Gym_Text_GymGuyPostVictory::
# 309 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "Blow me away! GIOVANNI was the\n"
	.string "GYM LEADER of VIRIDIAN?$"

ViridianCity_Gym_Text_GymStatue::
# 314 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "VIRIDIAN POKéMON GYM\n"
	.string "LEADER: ?\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

ViridianCity_Gym_Text_GymStatuePlayerWon::
# 321 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "VIRIDIAN POKéMON GYM\n"
	.string "LEADER: GIOVANNI\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"
