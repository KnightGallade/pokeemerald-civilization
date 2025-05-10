Route1_MapScripts::
	.byte 0


Route1_EventScript_MartClerk::
# 4 "data/maps/Route1/scripts.pory"
	lock
# 5 "data/maps/Route1/scripts.pory"
	faceplayer
# 6 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_GOT_POTION_ON_ROUTE_1, Route1_EventScript_AlreadyGotPotion
# 7 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_WorkAtPokeMartTakeSample
# 8 "data/maps/Route1/scripts.pory"
	giveitem ITEM_POTION
# 9 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route1_EventScript_GettingPotion
# 10 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_GettingPotion::
# 15 "data/maps/Route1/scripts.pory"
	waitmessage
# 16 "data/maps/Route1/scripts.pory"
	waitfanfare
# 17 "data/maps/Route1/scripts.pory"
	setflag FLAG_GOT_POTION_ON_ROUTE_1
	return


Route1_EventScript_AlreadyGotPotion::
# 21 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_ComeSeeUsIfYouNeedPokeBalls
# 22 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_Boy::
# 27 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_CanJumpFromLedges, MSGBOX_NPC
	end


Route1_EventScript_RouteSign::
# 32 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_RouteSign, MSGBOX_SIGN
	end


Route1_Text_WorkAtPokeMartTakeSample::
# 36 "data/maps/Route1/scripts.pory"
	.string "Hi!\n"
	.string "I work at a POKéMON MART.\p"
	.string "It's part of a convenient chain\n"
	.string "selling all sorts of items.\p"
	.string "Please, visit us in VIRIDIAN CITY.\p"
	.string "I know, I'll give you a sample.\n"
	.string "Here you go!$"

Route1_Text_ComeSeeUsIfYouNeedPokeBalls::
# 46 "data/maps/Route1/scripts.pory"
	.string "Please come see us if you need\n"
	.string "POKé BALLS for catching POKéMON.$"

Route1_Text_CanJumpFromLedges::
# 51 "data/maps/Route1/scripts.pory"
	.string "See those ledges along the road?\p"
	.string "It's a bit scary, but you can jump\n"
	.string "from them.\p"
	.string "You can get back to PALLET TOWN\n"
	.string "quicker that way.$"

Route1_Text_RouteSign::
# 59 "data/maps/Route1/scripts.pory"
	.string "ROUTE 1\n"
	.string "PALLET TOWN - VIRIDIAN CITY$"
