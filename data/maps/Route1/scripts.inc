# 1 "data/maps/Route1/scripts.pory"

# 2 "data/maps/Route1/scripts.pory"
Route1_MapScripts::
# 3 "data/maps/Route1/scripts.pory"
	.byte 0
# 4 "data/maps/Route1/scripts.pory"

# 5 "data/maps/Route1/scripts.pory"
Route1_EventScript_MartClerk::
# 6 "data/maps/Route1/scripts.pory"
	@ TODO - fix function calls
# 7 "data/maps/Route1/scripts.pory"
	lock
# 8 "data/maps/Route1/scripts.pory"
	faceplayer
# 9 "data/maps/Route1/scripts.pory"
	@ goto_if_set FLAG_GOT_POTION_ON_ROUTE_1, Route1_EventScript_AlreadyGotPotion
# 10 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_WorkAtPokeMartTakeSample
# 11 "data/maps/Route1/scripts.pory"
	@ textcolor NPC_TEXT_COLOR_NEUTRAL
# 12 "data/maps/Route1/scripts.pory"
	checkitemspace ITEM_POTION
# 13 "data/maps/Route1/scripts.pory"
	@ goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 14 "data/maps/Route1/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_POTION
# 15 "data/maps/Route1/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 16 "data/maps/Route1/scripts.pory"
	@ message Text_ObtainedTheX
# 17 "data/maps/Route1/scripts.pory"
	waitmessage
# 18 "data/maps/Route1/scripts.pory"
	waitfanfare
# 19 "data/maps/Route1/scripts.pory"
	additem ITEM_POTION
# 20 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_PutPotionAway
# 21 "data/maps/Route1/scripts.pory"
	@ call EventScript_RestorePrevTextColor
# 22 "data/maps/Route1/scripts.pory"
	@ setflag FLAG_GOT_POTION_ON_ROUTE_1
# 23 "data/maps/Route1/scripts.pory"
	release
# 24 "data/maps/Route1/scripts.pory"
	end
# 25 "data/maps/Route1/scripts.pory"

# 26 "data/maps/Route1/scripts.pory"
Route1_EventScript_AlreadyGotPotion::
# 27 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_ComeSeeUsIfYouNeedPokeBalls
# 28 "data/maps/Route1/scripts.pory"
	release
# 29 "data/maps/Route1/scripts.pory"
	end
# 30 "data/maps/Route1/scripts.pory"

# 31 "data/maps/Route1/scripts.pory"
Route1_EventScript_Boy::
# 32 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_CanJumpFromLedges, MSGBOX_NPC
# 33 "data/maps/Route1/scripts.pory"
	end
# 34 "data/maps/Route1/scripts.pory"

# 35 "data/maps/Route1/scripts.pory"
Route1_EventScript_RouteSign::
# 36 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_RouteSign, MSGBOX_SIGN
# 37 "data/maps/Route1/scripts.pory"
	end
# 38 "data/maps/Route1/scripts.pory"

# 39 "data/maps/Route1/scripts.pory"
Route1_Text_WorkAtPokeMartTakeSample::
# 40 "data/maps/Route1/scripts.pory"
    .string "Hi!\n"
# 41 "data/maps/Route1/scripts.pory"
    .string "I work at a POKéMON MART.\p"
# 42 "data/maps/Route1/scripts.pory"
    .string "It's part of a convenient chain\n"
# 43 "data/maps/Route1/scripts.pory"
    .string "selling all sorts of items.\p"
# 44 "data/maps/Route1/scripts.pory"
    .string "Please, visit us in VIRIDIAN CITY.\p"
# 45 "data/maps/Route1/scripts.pory"
    .string "I know, I'll give you a sample.\n"
# 46 "data/maps/Route1/scripts.pory"
    .string "Here you go!$"
# 47 "data/maps/Route1/scripts.pory"

# 48 "data/maps/Route1/scripts.pory"
Route1_Text_ComeSeeUsIfYouNeedPokeBalls::
# 49 "data/maps/Route1/scripts.pory"
    .string "Please come see us if you need\n"
# 50 "data/maps/Route1/scripts.pory"
    .string "POKé BALLS for catching POKéMON.$"
# 51 "data/maps/Route1/scripts.pory"

# 52 "data/maps/Route1/scripts.pory"
Route1_Text_PutPotionAway::
# 53 "data/maps/Route1/scripts.pory"
    .string "{PLAYER} put the POTION away in\n"
# 54 "data/maps/Route1/scripts.pory"
    .string "the BAG's ITEMS POCKET.$"
# 55 "data/maps/Route1/scripts.pory"

# 56 "data/maps/Route1/scripts.pory"
Route1_Text_CanJumpFromLedges::
# 57 "data/maps/Route1/scripts.pory"
    .string "See those ledges along the road?\p"
# 58 "data/maps/Route1/scripts.pory"
    .string "It's a bit scary, but you can jump\n"
# 59 "data/maps/Route1/scripts.pory"
    .string "from them.\p"
# 60 "data/maps/Route1/scripts.pory"
    .string "You can get back to PALLET TOWN\n"
# 61 "data/maps/Route1/scripts.pory"
    .string "quicker that way.$"
# 62 "data/maps/Route1/scripts.pory"

# 63 "data/maps/Route1/scripts.pory"
Route1_Text_RouteSign::
# 64 "data/maps/Route1/scripts.pory"
    .string "ROUTE 1\n"
# 65 "data/maps/Route1/scripts.pory"
    .string "PALLET TOWN - VIRIDIAN CITY$"
