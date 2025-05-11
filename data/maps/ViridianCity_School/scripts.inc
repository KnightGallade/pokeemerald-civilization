ViridianCity_School_MapScripts::
	.byte 0


ViridianCity_School_EventScript_Lass::
# 7 "data/maps/ViridianCity_School/scripts.pory"
	lock
# 8 "data/maps/ViridianCity_School/scripts.pory"
	faceplayer
# 9 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_TryingToMemorizeNotes
# 10 "data/maps/ViridianCity_School/scripts.pory"
	closemessage
# 11 "data/maps/ViridianCity_School/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 12 "data/maps/ViridianCity_School/scripts.pory"
	waitmovement 0
# 13 "data/maps/ViridianCity_School/scripts.pory"
	release
	end


ViridianCity_School_EventScript_Woman::
# 18 "data/maps/ViridianCity_School/scripts.pory"
	lock
# 19 "data/maps/ViridianCity_School/scripts.pory"
	faceplayer
# 20 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ReadBlackboardCarefully
# 21 "data/maps/ViridianCity_School/scripts.pory"
	closemessage
# 22 "data/maps/ViridianCity_School/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 23 "data/maps/ViridianCity_School/scripts.pory"
	waitmovement 0
# 24 "data/maps/ViridianCity_School/scripts.pory"
	release
	end


ViridianCity_School_EventScript_Notebook::
# 29 "data/maps/ViridianCity_School/scripts.pory"
	lockall
# 30 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookFirstPage
# 31 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 32 "data/maps/ViridianCity_School/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
# 33 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookSecondPage
# 34 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 35 "data/maps/ViridianCity_School/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
# 36 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookThirdPage
# 37 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 38 "data/maps/ViridianCity_School/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
# 39 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookFourthPage
# 40 "data/maps/ViridianCity_School/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 41 "data/maps/ViridianCity_School/scripts.pory"
	waitmovement 0
# 42 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_HeyDontLookAtMyNotes
# 43 "data/maps/ViridianCity_School/scripts.pory"
	releaseall
	end


ViridianCity_School_EventScript_StopReadingNotebook::
# 48 "data/maps/ViridianCity_School/scripts.pory"
	releaseall
	end


ViridianCity_School_EventScript_Blackboard::
# 53 "data/maps/ViridianCity_School/scripts.pory"
	lockall
# 54 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_BlackboardListsStatusProblems
# 55 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end


ViridianCity_School_EventScript_ChooseBlackboardTopic::
# 60 "data/maps/ViridianCity_School/scripts.pory"
	message ViridianCity_School_Text_ReadWhichTopic
# 61 "data/maps/ViridianCity_School/scripts.pory"
	waitmessage
# 62 "data/maps/ViridianCity_School/scripts.pory"
	dynmultichoice 10, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, ViridianCity_School_EventScript_ChooseBlackboardTopic_Text_0, ViridianCity_School_EventScript_ChooseBlackboardTopic_Text_1, ViridianCity_School_EventScript_ChooseBlackboardTopic_Text_2, ViridianCity_School_EventScript_ChooseBlackboardTopic_Text_3, ViridianCity_School_EventScript_ChooseBlackboardTopic_Text_4, ViridianCity_School_EventScript_ChooseBlackboardTopic_Text_5
# 63 "data/maps/ViridianCity_School/scripts.pory"
	switch VAR_RESULT
# 64 "data/maps/ViridianCity_School/scripts.pory"
	case 0, ViridianCity_School_EventScript_ChooseBlackboardTopic_3
# 65 "data/maps/ViridianCity_School/scripts.pory"
	case 1, ViridianCity_School_EventScript_ChooseBlackboardTopic_4
# 66 "data/maps/ViridianCity_School/scripts.pory"
	case 2, ViridianCity_School_EventScript_ChooseBlackboardTopic_5
# 67 "data/maps/ViridianCity_School/scripts.pory"
	case 3, ViridianCity_School_EventScript_ChooseBlackboardTopic_6
# 68 "data/maps/ViridianCity_School/scripts.pory"
	case 4, ViridianCity_School_EventScript_ChooseBlackboardTopic_7
# 69 "data/maps/ViridianCity_School/scripts.pory"
	case 5, ViridianCity_School_EventScript_ChooseBlackboardTopic_8
# 70 "data/maps/ViridianCity_School/scripts.pory"
	case 127, ViridianCity_School_EventScript_ChooseBlackboardTopic_9
ViridianCity_School_EventScript_ChooseBlackboardTopic_1:
	end

ViridianCity_School_EventScript_ChooseBlackboardTopic_3:
# 64 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ReadSleep
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic_1

ViridianCity_School_EventScript_ChooseBlackboardTopic_4:
# 65 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ReadPoison
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic_1

ViridianCity_School_EventScript_ChooseBlackboardTopic_5:
# 66 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ReadParalysis
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic_1

ViridianCity_School_EventScript_ChooseBlackboardTopic_6:
# 67 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ReadBurn
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic_1

ViridianCity_School_EventScript_ChooseBlackboardTopic_7:
# 68 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ReadFreeze
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic_1

ViridianCity_School_EventScript_ChooseBlackboardTopic_8:
# 69 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ExitBlackboard
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic_1

ViridianCity_School_EventScript_ChooseBlackboardTopic_9:
# 70 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ExitBlackboard
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic_1


ViridianCity_School_EventScript_ReadSleep::
# 76 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainSleep
# 77 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end


ViridianCity_School_EventScript_ReadBurn::
# 82 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainBurn
# 83 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end


ViridianCity_School_EventScript_ReadPoison::
# 88 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainPoison
# 89 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end


ViridianCity_School_EventScript_ReadFreeze::
# 94 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainFreeze
# 95 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end


ViridianCity_School_EventScript_ReadParalysis::
# 100 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainParalysis
# 101 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end


ViridianCity_School_EventScript_ExitBlackboard::
# 106 "data/maps/ViridianCity_School/scripts.pory"
	releaseall
	end


ViridianCity_School_EventScript_PokemonJournal::
# 111 "data/maps/ViridianCity_School/scripts.pory"
	lock
# 112 "data/maps/ViridianCity_School/scripts.pory"
	faceplayer
# 113 "data/maps/ViridianCity_School/scripts.pory"
	msgbox PokemonJournal_Text_SpecialFeatureProfOak
# 114 "data/maps/ViridianCity_School/scripts.pory"
	release
	end


ViridianCity_School_EventScript_ChooseBlackboardTopic_Text_0:
# 62 "data/maps/ViridianCity_School/scripts.pory"
	.string "Sleep$"

ViridianCity_School_EventScript_ChooseBlackboardTopic_Text_1:
# 62 "data/maps/ViridianCity_School/scripts.pory"
	.string "Poison$"

ViridianCity_School_EventScript_ChooseBlackboardTopic_Text_2:
# 62 "data/maps/ViridianCity_School/scripts.pory"
	.string "Paralysis$"

ViridianCity_School_EventScript_ChooseBlackboardTopic_Text_3:
# 62 "data/maps/ViridianCity_School/scripts.pory"
	.string "Burn$"

ViridianCity_School_EventScript_ChooseBlackboardTopic_Text_4:
# 62 "data/maps/ViridianCity_School/scripts.pory"
	.string "Freeze$"

ViridianCity_School_EventScript_ChooseBlackboardTopic_Text_5:
# 62 "data/maps/ViridianCity_School/scripts.pory"
	.string "Exit$"

ViridianCity_School_Text_TryingToMemorizeNotes::
# 118 "data/maps/ViridianCity_School/scripts.pory"
	.string "Whew! I'm trying to memorize all my\n"
	.string "notes.$"

ViridianCity_School_Text_ReadBlackboardCarefully::
# 123 "data/maps/ViridianCity_School/scripts.pory"
	.string "Okay!\p"
	.string "Be sure to read what's on the\n"
	.string "blackboard carefully!$"

ViridianCity_School_Text_NotebookFirstPage::
# 129 "data/maps/ViridianCity_School/scripts.pory"
	.string "Let's check out the notebook.\p"
	.string "First page…\p"
	.string "POKé BALLS are used to catch\n"
	.string "POKéMON.\p"
	.string "Up to six POKéMON can be carried\n"
	.string "in your party.\p"
	.string "People who raise and battle\n"
	.string "with POKéMON are called TRAINERS.$"

ViridianCity_School_Text_NotebookSecondPage::
# 140 "data/maps/ViridianCity_School/scripts.pory"
	.string "Second page…\p"
	.string "A healthy POKéMON may be hard to\n"
	.string "catch, so weaken it first.\p"
	.string "Poison, burn, or cause another\n"
	.string "status problem to weaken it.$"

ViridianCity_School_Text_NotebookThirdPage::
# 148 "data/maps/ViridianCity_School/scripts.pory"
	.string "Third page…\p"
	.string "POKéMON TRAINERS seek others to\n"
	.string "engage in POKéMON battles.\p"
	.string "To TRAINERS, the taste of victory\n"
	.string "is sweet, indeed.\p"
	.string "Battles are constantly waged at\n"
	.string "POKéMON GYMS everywhere.$"

ViridianCity_School_Text_NotebookFourthPage::
# 158 "data/maps/ViridianCity_School/scripts.pory"
	.string "Fourth page…\p"
	.string "The ultimate goal for all POKéMON\n"
	.string "TRAINERS is simple.\p"
	.string "It is to defeat the top eight\n"
	.string "POKéMON GYM LEADERS.\p"
	.string "Do so to earn the right to face…\p"
	.string "The ELITE FOUR of the POKéMON\n"
	.string "LEAGUE!$"

ViridianCity_School_Text_TurnThePage::
# 169 "data/maps/ViridianCity_School/scripts.pory"
	.string "Turn the page?$"

ViridianCity_School_Text_HeyDontLookAtMyNotes::
# 173 "data/maps/ViridianCity_School/scripts.pory"
	.string "GIRL: Hey!\n"
	.string "Don't look at my notes!$"

ViridianCity_School_Text_BlackboardListsStatusProblems::
# 178 "data/maps/ViridianCity_School/scripts.pory"
	.string "The blackboard lists POKéMON\n"
	.string "STATUS problems during battles.$"

ViridianCity_School_Text_ReadWhichTopic::
# 183 "data/maps/ViridianCity_School/scripts.pory"
	.string "Which topic do you want to read?$"

ViridianCity_School_Text_ExplainSleep::
# 187 "data/maps/ViridianCity_School/scripts.pory"
	.string "A POKéMON can't attack if it's\n"
	.string "asleep.\p"
	.string "POKéMON will stay asleep even\n"
	.string "after battles.\p"
	.string "Use AWAKENING to awaken one\n"
	.string "from sleep.$"

ViridianCity_School_Text_ExplainBurn::
# 196 "data/maps/ViridianCity_School/scripts.pory"
	.string "A burn reduces ATTACK power.\n"
	.string "It also causes ongoing HP loss.\p"
	.string "A burn remains after a battle.\n"
	.string "Use BURN HEAL to cure a burn.$"

ViridianCity_School_Text_ExplainPoison::
# 203 "data/maps/ViridianCity_School/scripts.pory"
	.string "When poisoned, a POKéMON's health\n"
	.string "steadily drops.\p"
	.string "Poison lingers after battles.\n"
	.string "Use an ANTIDOTE to cure poison!$"

ViridianCity_School_Text_ExplainFreeze::
# 210 "data/maps/ViridianCity_School/scripts.pory"
	.string "A frozen POKéMON becomes\n"
	.string "helplessly immobile.\p"
	.string "It stays frozen even after the\n"
	.string "battle ends.\p"
	.string "Use ICE HEAL to thaw out the\n"
	.string "suffering POKéMON.$"

ViridianCity_School_Text_ExplainParalysis::
# 219 "data/maps/ViridianCity_School/scripts.pory"
	.string "Paralysis reduces SPEED and may\n"
	.string "prevent the POKéMON from moving.\p"
	.string "Paralysis remains after battles.\n"
	.string "Use PARLYZ HEAL for treatment.$"

PokemonJournal_Text_SpecialFeatureProfOak::
# 226 "data/maps/ViridianCity_School/scripts.pory"
	.string "POKéMON JOURNAL\p"
	.string "Special Feature: PROF. OAK,\n"
	.string "the POKéMON Researcher!\p"
	.string "PROF. OAK reportedly lives with his\n"
	.string "grandchildren DAISY and {RIVAL}.$"
