Route3_MapScripts::
	.byte 0


Route3_EventScript_Youngster::
# 4 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_TunnelFromCeruleanTiring, MSGBOX_NPC
	end


Route3_EventScript_RouteSign::
# 9 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RouteSign, MSGBOX_SIGN
	end


Route3_EventScript_Ben::
# 14 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_BEN, Route3_Text_BenIntro, Route3_Text_Bendefeat
# 15 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_BenPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_Calvin::
# 20 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_CALVIN, Route3_Text_CalvinIntro, Route3_Text_CalvinDefeat
# 21 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_CalvinPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_Colton::
# 26 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_COLTON, Route3_Text_ColtonIntro, Route3_Text_ColtonDefeat
# 27 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_ColtonPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_Greg::
# 32 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_GREG, Route3_Text_GregIntro, Route3_Text_GregDefeat
# 33 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_GregPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_James::
# 38 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_JAMES, Route3_Text_JamesIntro, Route3_Text_JamesDefeat
# 39 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_JamesPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_Janice::
# 44 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_LASS_JANICE, Route3_Text_JaniceIntro, Route3_Text_JaniceDefeat
# 45 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_Sally::
# 50 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_LASS_SALLY, Route3_Text_SallyIntro, Route3_Text_SallyDefeat
# 51 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_SallyPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_Robin::
# 56 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_LASS_ROBIN, Route3_Text_RobinIntro, Route3_Text_RobinDefeat
# 57 "data/maps/Route3/scripts.pory"
	msgbox Route3_Text_RobinPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_Text_TunnelFromCeruleanTiring::
# 61 "data/maps/Route3/scripts.pory"
	.string "Whew… I better take a rest…\n"
	.string "Groan…\p"
	.string "That tunnel from CERULEAN takes a\n"
	.string "lot out of you!$"

Route3_Text_ColtonIntro::
# 68 "data/maps/Route3/scripts.pory"
	.string "Hey!\n"
	.string "I saw you in VIRIDIAN FOREST!$"

Route3_Text_ColtonDefeat::
# 73 "data/maps/Route3/scripts.pory"
	.string "You beat me again!$"

Route3_Text_ColtonPostBattle::
# 77 "data/maps/Route3/scripts.pory"
	.string "There are other kinds of POKéMON\n"
	.string "than the ones you find in forests.$"

Route3_Text_BenIntro::
# 82 "data/maps/Route3/scripts.pory"
	.string "Hi!\n"
	.string "I like shorts!\p"
	.string "They're delightfully comfy and\n"
	.string "easy to wear!$"

Route3_Text_Bendefeat::
# 89 "data/maps/Route3/scripts.pory"
	.string "I don't believe it!$"

Route3_Text_BenPostBattle::
# 93 "data/maps/Route3/scripts.pory"
	.string "Are you using a POKéMON CENTER's\n"
	.string "PC for storing your POKéMON?\p"
	.string "Each BOX can hold up to\n"
	.string "30 POKéMON.$"

Route3_Text_JaniceIntro::
# 100 "data/maps/Route3/scripts.pory"
	.string "Excuse me!\n"
	.string "You looked at me, didn't you?$"

Route3_Text_JaniceDefeat::
# 105 "data/maps/Route3/scripts.pory"
	.string "You're mean!$"

Route3_Text_JanicePostBattle::
# 109 "data/maps/Route3/scripts.pory"
	.string "You shouldn't be staring if you\n"
	.string "don't want to battle!$"

Route3_Text_GregIntro::
# 114 "data/maps/Route3/scripts.pory"
	.string "Are you a TRAINER?\n"
	.string "Let's get with it right away!$"

Route3_Text_GregDefeat::
# 119 "data/maps/Route3/scripts.pory"
	.string "If I had new POKéMON, I would've\n"
	.string "won!$"

Route3_Text_GregPostBattle::
# 124 "data/maps/Route3/scripts.pory"
	.string "If a POKéMON BOX on the PC gets\n"
	.string "full, just switch to another BOX.$"

Route3_Text_SallyIntro::
# 129 "data/maps/Route3/scripts.pory"
	.string "That look you gave me…\n"
	.string "It's so intriguing!$"

Route3_Text_SallyDefeat::
# 134 "data/maps/Route3/scripts.pory"
	.string "Be nice!$"

Route3_Text_SallyPostBattle::
# 138 "data/maps/Route3/scripts.pory"
	.string "You can avoid battles by not\n"
	.string "letting TRAINERS see you.$"

Route3_Text_CalvinIntro::
# 143 "data/maps/Route3/scripts.pory"
	.string "Hey! You're not wearing shorts!\n"
	.string "What's wrong with you?$"

Route3_Text_CalvinDefeat::
# 148 "data/maps/Route3/scripts.pory"
	.string "Lost!\n"
	.string "Lost! Lost!$"

Route3_Text_CalvinPostBattle::
# 153 "data/maps/Route3/scripts.pory"
	.string "I always wear shorts, even in\n"
	.string "winter. That's my policy.$"

Route3_Text_JamesIntro::
# 158 "data/maps/Route3/scripts.pory"
	.string "I'll battle you with the POKéMON\n"
	.string "I just caught.$"

Route3_Text_JamesDefeat::
# 163 "data/maps/Route3/scripts.pory"
	.string "Done like dinner!$"

Route3_Text_JamesPostBattle::
# 167 "data/maps/Route3/scripts.pory"
	.string "Trained POKéMON are stronger than\n"
	.string "the wild ones.$"

Route3_Text_RobinIntro::
# 172 "data/maps/Route3/scripts.pory"
	.string "Eek!\n"
	.string "Did you touch me?$"

Route3_Text_RobinDefeat::
# 177 "data/maps/Route3/scripts.pory"
	.string "That's it?$"

Route3_Text_RobinPostBattle::
# 181 "data/maps/Route3/scripts.pory"
	.string "ROUTE 4 is at the foot of\n"
	.string "MT. MOON.$"

Route3_Text_RouteSign::
# 186 "data/maps/Route3/scripts.pory"
	.string "ROUTE 3\n"
	.string "MT. MOON AHEAD$"
