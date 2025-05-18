PewterCity_Mart_MapScripts::
	.byte 0


PewterCity_Mart_EventScript_Youngster::
# 4 "data/maps/PewterCity_Mart/scripts.pory"
	msgbox PewterCity_Mart_Text_BoughtWeirdFishFromShadyGuy, MSGBOX_NPC
	end


PewterCity_Mart_EventScript_Boy::
# 9 "data/maps/PewterCity_Mart/scripts.pory"
	msgbox PewterCity_Mart_Text_GoodThingsIfRaiseMonsDiligently, MSGBOX_NPC
	end


PewterCity_Mart_EventScript_Clerk::
# 14 "data/maps/PewterCity_Mart/scripts.pory"
	lock
# 15 "data/maps/PewterCity_Mart/scripts.pory"
	faceplayer
# 16 "data/maps/PewterCity_Mart/scripts.pory"
	message gText_MayIHelpYou
# 17 "data/maps/PewterCity_Mart/scripts.pory"
	waitmessage
# 18 "data/maps/PewterCity_Mart/scripts.pory"
	pokemart PewterCity_Mart_Items
# 19 "data/maps/PewterCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 20 "data/maps/PewterCity_Mart/scripts.pory"
	release
	end


	.align 2
# 24 "data/maps/PewterCity_Mart/scripts.pory"
PewterCity_Mart_Items:
# 25 "data/maps/PewterCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 26 "data/maps/PewterCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 27 "data/maps/PewterCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 28 "data/maps/PewterCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 29 "data/maps/PewterCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 30 "data/maps/PewterCity_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 31 "data/maps/PewterCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 32 "data/maps/PewterCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

PewterCity_Mart_Text_BoughtWeirdFishFromShadyGuy::
# 36 "data/maps/PewterCity_Mart/scripts.pory"
	.string "A shady old guy sucked me into\n"
	.string "buying this weird fish POKéMON!\p"
	.string "It's totally weak and it cost ¥500!$"

PewterCity_Mart_Text_GoodThingsIfRaiseMonsDiligently::
# 42 "data/maps/PewterCity_Mart/scripts.pory"
	.string "Good things can happen if you raise\n"
	.string "POKéMON diligently.\p"
	.string "Even the weak ones can surprise\n"
	.string "you if you don't give up on them.$"
