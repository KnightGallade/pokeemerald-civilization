PewterCity_Gym_MapScripts::
	.byte 0


PewterCity_Gym_EventScript_Brock::
# 4 "data/maps/PewterCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BROCK, PewterCity_Gym_Text_BrockIntro, PewterCity_Gym_Text_BrockDefeat, PewterCity_Gym_EventScript_DefeatedBrock, NO_MUSIC
# 5 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM39_FROM_BROCK, PewterCity_Gym_EventScript_GiveTM39
# 6 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_BrockPostBattle
# 7 "data/maps/PewterCity_Gym/scripts.pory"
	release
	end


PewterCity_Gym_EventScript_DefeatedBrock::
# 12 "data/maps/PewterCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_BROCK
# 13 "data/maps/PewterCity_Gym/scripts.pory"
	setflag FLAG_KANTO_BADGE01_GET
# 14 "data/maps/PewterCity_Gym/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY, 1
# 15 "data/maps/PewterCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 16 "data/maps/PewterCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_RUNNING_SHOES_GUY
# 17 "data/maps/PewterCity_Gym/scripts.pory"
	setvar VAR_0x8008, 9
# 18 "data/maps/PewterCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 19 "data/maps/PewterCity_Gym/scripts.pory"
	goto PewterCity_Gym_EventScript_GiveTM39
	end


PewterCity_Gym_EventScript_GiveTM39::
# 24 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_TakeThisWithYou
# 25 "data/maps/PewterCity_Gym/scripts.pory"
	checkitemspace ITEM_TM39
# 26 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Gym_EventScript_NoRoomForTM39
# 27 "data/maps/PewterCity_Gym/scripts.pory"
	giveitem_msg PewterCity_Gym_Text_ReceivedTM39FromBrock, ITEM_TM39
# 28 "data/maps/PewterCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM39_FROM_BROCK
# 29 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_ExplainTM39
# 30 "data/maps/PewterCity_Gym/scripts.pory"
	release
	end


PewterCity_Gym_EventScript_NoRoomForTM39::
# 35 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_DontHaveRoomForThis
# 36 "data/maps/PewterCity_Gym/scripts.pory"
	release
	end


PewterCity_Gym_EventScript_Liam::
# 41 "data/maps/PewterCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CAMPER_LIAM, PewterCity_Gym_Text_LiamIntro, PewterCity_Gym_Text_LiamDefeat
# 42 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_LiamPostBattle, MSGBOX_AUTOCLOSE
	end


PewterCity_Gym_EventScript_GymGuy::
# 47 "data/maps/PewterCity_Gym/scripts.pory"
	lock
# 48 "data/maps/PewterCity_Gym/scripts.pory"
	faceplayer
# 49 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BROCK, PewterCity_Gym_EventScript_GymGuyPostVictory
# 50 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_LetMeTakeYouToTheTop, MSGBOX_YESNO
# 51 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_Gym_EventScript_GymGuyTakeMeToTop
# 52 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop
	end


PewterCity_Gym_EventScript_GymGuyPostVictory::
# 57 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_YoureChampMaterial
# 58 "data/maps/PewterCity_Gym/scripts.pory"
	release
	end


PewterCity_Gym_EventScript_GymGuyTakeMeToTop::
# 63 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_LetsGetHappening
# 64 "data/maps/PewterCity_Gym/scripts.pory"
	goto PewterCity_Gym_EventScript_GymGuyAdvice
	end


PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop::
# 69 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_ItsFreeLetsGetHappening
# 70 "data/maps/PewterCity_Gym/scripts.pory"
	goto PewterCity_Gym_EventScript_GymGuyAdvice
	end


PewterCity_Gym_EventScript_GymGuyAdvice::
# 75 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_TryDifferentPartyOrders
# 76 "data/maps/PewterCity_Gym/scripts.pory"
	release
	end


PewterCity_Gym_EventScript_GymStatue::
# 81 "data/maps/PewterCity_Gym/scripts.pory"
	lockall
# 82 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_set FLAG_KANTO_BADGE01_GET, PewterCity_Gym_EventScript_GymStatuePostVictory
# 83 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_GymStatue
# 84 "data/maps/PewterCity_Gym/scripts.pory"
	releaseall
	end


PewterCity_Gym_EventScript_GymStatuePostVictory::
# 89 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_GymStatuePlayerWon
# 90 "data/maps/PewterCity_Gym/scripts.pory"
	releaseall
	end


PewterCity_Gym_Text_BrockIntro::
# 94 "data/maps/PewterCity_Gym/scripts.pory"
	.string "So, you're here. I'm BROCK.\n"
	.string "I'm PEWTER's GYM LEADER.\p"
	.string "My rock-hard willpower is evident\n"
	.string "even in my POKéMON.\p"
	.string "My POKéMON are all rock hard, and\n"
	.string "have true-grit determination.\p"
	.string "That's right - my POKéMON are all\n"
	.string "the ROCK type!\p"
	.string "Fuhaha! You're going to challenge\n"
	.string "me knowing that you'll lose?\p"
	.string "That's the TRAINER's honor that\n"
	.string "compels you to challenge me.\p"
	.string "Fine, then!\n"
	.string "Show me your best!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PewterCity_Gym_Text_BrockDefeat::
# 114 "data/maps/PewterCity_Gym/scripts.pory"
	.string "I took you for granted, and so\n"
	.string "I lost.\p"
	.string "As proof of your victory, I confer\n"
	.string "on you this…the official POKéMON\l"
	.string "LEAGUE BOULDERBADGE.\p"
	.string "{PLAYER} received the BOULDERBADGE\n"
	.string "from BROCK!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p"
	.string "Just having the BOULDERBADGE makes\n"
	.string "your POKéMON more powerful.\p"
	.string "It also enables the use of the\n"
	.string "move FLASH outside of battle.\p"
	.string "Of course, a POKéMON must know the\n"
	.string "move FLASH to use it.$"

PewterCity_Gym_Text_TakeThisWithYou::
# 130 "data/maps/PewterCity_Gym/scripts.pory"
	.string "Wait!\n"
	.string "Take this with you.$"

PewterCity_Gym_Text_ReceivedTM39FromBrock::
# 135 "data/maps/PewterCity_Gym/scripts.pory"
	.string "{PLAYER} received TM39\n"
	.string "from BROCK.$"

PewterCity_Gym_Text_ExplainTM39::
# 140 "data/maps/PewterCity_Gym/scripts.pory"
	.string "A TM, Technical Machine, contains a\n"
	.string "technique for POKéMON.\p"
	.string "Using a TM teaches the move it\n"
	.string "contains to a POKéMON.\p"
	.string "A TM is good for only one use.\p"
	.string "So, when you use one, pick the\n"
	.string "POKéMON carefully.\p"
	.string "Anyways…\n"
	.string "TM39 contains ROCK TOMB.\p"
	.string "It hurls boulders at the foe and\n"
	.string "lowers its SPEED.$"

PewterCity_Gym_Text_BrockPostBattle::
# 154 "data/maps/PewterCity_Gym/scripts.pory"
	.string "There are all kinds of TRAINERS in\n"
	.string "this huge world of ours.\p"
	.string "You appear to be very gifted as a\n"
	.string "POKéMON TRAINER.\p"
	.string "So let me make a suggestion.\p"
	.string "Go to the GYM in CERULEAN and test\n"
	.string "your abilities.$"

PewterCity_Gym_Text_DontHaveRoomForThis::
# 164 "data/maps/PewterCity_Gym/scripts.pory"
	.string "You don't have room for this.$"

PewterCity_Gym_Text_LiamIntro::
# 168 "data/maps/PewterCity_Gym/scripts.pory"
	.string "Stop right there, kid!\p"
	.string "You're ten thousand light-years \n"
	.string "from facing BROCK!$"

PewterCity_Gym_Text_LiamDefeat::
# 174 "data/maps/PewterCity_Gym/scripts.pory"
	.string "Darn!\p"
	.string "Light-years isn't time…\n"
	.string "It measures distance!$"

PewterCity_Gym_Text_LiamPostBattle::
# 180 "data/maps/PewterCity_Gym/scripts.pory"
	.string "You're pretty hot.\n"
	.string "…But not as hot as BROCK!$"

PewterCity_Gym_Text_LetMeTakeYouToTheTop::
# 185 "data/maps/PewterCity_Gym/scripts.pory"
	.string "Hiya!\n"
	.string "Do you want to dream big?\p"
	.string "Do you dare to dream of becoming\n"
	.string "the POKéMON champ?\p"
	.string "I'm no TRAINER, but I can advise\n"
	.string "you on how to win.\p"
	.string "Let me take you to the top!$"

PewterCity_Gym_Text_LetsGetHappening::
# 195 "data/maps/PewterCity_Gym/scripts.pory"
	.string "All right!\n"
	.string "Let's get happening!$"

PewterCity_Gym_Text_TryDifferentPartyOrders::
# 200 "data/maps/PewterCity_Gym/scripts.pory"
	.string "The first POKéMON out in a match is\n"
	.string "at the left of the POKéMON LIST.\p"
	.string "By changing the order of POKéMON,\n"
	.string "you may gain an advantage.\p"
	.string "Try different orders to suit your\n"
	.string "opponent's party.$"

PewterCity_Gym_Text_ItsFreeLetsGetHappening::
# 209 "data/maps/PewterCity_Gym/scripts.pory"
	.string "It's a free service!\n"
	.string "Let's get happening!$"

PewterCity_Gym_Text_YoureChampMaterial::
# 214 "data/maps/PewterCity_Gym/scripts.pory"
	.string "Just as I thought!\n"
	.string "You're POKéMON champ material!$"

PewterCity_Gym_Text_GymStatue::
# 219 "data/maps/PewterCity_Gym/scripts.pory"
	.string "PEWTER POKéMON GYM\n"
	.string "LEADER: BROCK\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

PewterCity_Gym_Text_GymStatuePlayerWon::
# 226 "data/maps/PewterCity_Gym/scripts.pory"
	.string "PEWTER POKéMON GYM\n"
	.string "LEADER: BROCK\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"
