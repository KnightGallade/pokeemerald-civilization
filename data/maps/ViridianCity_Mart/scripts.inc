ViridianCity_Mart_MapScripts::
# 2 "data/maps/ViridianCity_Mart/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ViridianCity_Mart_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ViridianCity_Mart_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/ViridianCity_Mart/scripts.pory"
	map_script_2 VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 0, ViridianCity_Mart_EventScript_ParcelScene
	.2byte 0


ViridianCity_Mart_EventScript_ParcelScene::
# 8 "data/maps/ViridianCity_Mart/scripts.pory"
	lockall
# 9 "data/maps/ViridianCity_Mart/scripts.pory"
	applymovement LOCALID_VIRIDIAN_MART_CLERK, Common_Movement_WalkInPlaceFasterDown
# 10 "data/maps/ViridianCity_Mart/scripts.pory"
	waitmovement 0
# 11 "data/maps/ViridianCity_Mart/scripts.pory"
	msgbox ViridianCity_Mart_Text_YouCameFromPallet
# 12 "data/maps/ViridianCity_Mart/scripts.pory"
	closemessage
# 13 "data/maps/ViridianCity_Mart/scripts.pory"
	applymovement LOCALID_VIRIDIAN_MART_CLERK, ViridianCity_Mart_Movement_FacePlayer
# 14 "data/maps/ViridianCity_Mart/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ViridianCity_Mart_Movement_ApproachCounter
# 15 "data/maps/ViridianCity_Mart/scripts.pory"
	waitmovement 0
# 16 "data/maps/ViridianCity_Mart/scripts.pory"
	msgbox ViridianCity_Mart_Text_TakeThisToProfOak
# 17 "data/maps/ViridianCity_Mart/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1
# 18 "data/maps/ViridianCity_Mart/scripts.pory"
	giveitem_msg ViridianCity_Mart_Text_ReceivedOaksParcelFromClerk, ITEM_OAKS_PARCEL, 1, MUS_RG_OBTAIN_KEY_ITEM
# 19 "data/maps/ViridianCity_Mart/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 5
# 20 "data/maps/ViridianCity_Mart/scripts.pory"
	releaseall
	end


# 24 "data/maps/ViridianCity_Mart/scripts.pory"
ViridianCity_Mart_Movement_ApproachCounter:
# 25 "data/maps/ViridianCity_Mart/scripts.pory"
	walk_up
# 26 "data/maps/ViridianCity_Mart/scripts.pory"
	walk_up
# 27 "data/maps/ViridianCity_Mart/scripts.pory"
	walk_up
# 28 "data/maps/ViridianCity_Mart/scripts.pory"
	walk_up
# 29 "data/maps/ViridianCity_Mart/scripts.pory"
	walk_in_place_faster_left
# 30 "data/maps/ViridianCity_Mart/scripts.pory"
	step_end

# 33 "data/maps/ViridianCity_Mart/scripts.pory"
ViridianCity_Mart_Movement_FacePlayer:
# 34 "data/maps/ViridianCity_Mart/scripts.pory"
	delay_16
# 35 "data/maps/ViridianCity_Mart/scripts.pory"
	delay_16
# 36 "data/maps/ViridianCity_Mart/scripts.pory"
	delay_16
# 37 "data/maps/ViridianCity_Mart/scripts.pory"
	delay_16
# 38 "data/maps/ViridianCity_Mart/scripts.pory"
	walk_in_place_faster_right
# 39 "data/maps/ViridianCity_Mart/scripts.pory"
	step_end

ViridianCity_Mart_EventScript_Clerk::
# 43 "data/maps/ViridianCity_Mart/scripts.pory"
	lock
# 44 "data/maps/ViridianCity_Mart/scripts.pory"
	faceplayer
# 45 "data/maps/ViridianCity_Mart/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1, ViridianCity_Mart_EventScript_SayHiToOak
# 46 "data/maps/ViridianCity_Mart/scripts.pory"
	message gText_MayIHelpYou
# 47 "data/maps/ViridianCity_Mart/scripts.pory"
	waitmessage
# 48 "data/maps/ViridianCity_Mart/scripts.pory"
	pokemart ViridianCity_Mart_Items
# 49 "data/maps/ViridianCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 50 "data/maps/ViridianCity_Mart/scripts.pory"
	release
	end


	.align 2
# 54 "data/maps/ViridianCity_Mart/scripts.pory"
ViridianCity_Mart_Items:
# 55 "data/maps/ViridianCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 56 "data/maps/ViridianCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 57 "data/maps/ViridianCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 58 "data/maps/ViridianCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

ViridianCity_Mart_EventScript_SayHiToOak::
# 63 "data/maps/ViridianCity_Mart/scripts.pory"
	msgbox ViridianCity_Mart_Text_SayHiToOakForMe
# 64 "data/maps/ViridianCity_Mart/scripts.pory"
	release
	end


ViridianCity_Mart_EventScript_Woman::
# 69 "data/maps/ViridianCity_Mart/scripts.pory"
	msgbox ViridianCity_Mart_Text_ShopDoesGoodBusinessInAntidotes, MSGBOX_NPC
	end


ViridianCity_Mart_EventScript_Youngster::
# 74 "data/maps/ViridianCity_Mart/scripts.pory"
	msgbox ViridianCity_Mart_Text_GotToBuySomePotions, MSGBOX_NPC
	end


ViridianCity_Mart_Text_YouCameFromPallet::
# 78 "data/maps/ViridianCity_Mart/scripts.pory"
	.string "Hey!\n"
	.string "You came from PALLET TOWN?$"

ViridianCity_Mart_Text_TakeThisToProfOak::
# 83 "data/maps/ViridianCity_Mart/scripts.pory"
	.string "You know PROF. OAK, right?\p"
	.string "His order came in.\n"
	.string "Can I get you to take it to him?$"

ViridianCity_Mart_Text_ReceivedOaksParcelFromClerk::
# 89 "data/maps/ViridianCity_Mart/scripts.pory"
	.string "{PLAYER} received OAK'S PARCEL\n"
	.string "from the POKéMON MART clerk.$"

ViridianCity_Mart_Text_SayHiToOakForMe::
# 94 "data/maps/ViridianCity_Mart/scripts.pory"
	.string "Okay, thanks! Please say hi to\n"
	.string "PROF. OAK for me, too.$"

ViridianCity_Mart_Text_ShopDoesGoodBusinessInAntidotes::
# 99 "data/maps/ViridianCity_Mart/scripts.pory"
	.string "This shop does good business in\n"
	.string "ANTIDOTES, I've heard.$"

ViridianCity_Mart_Text_GotToBuySomePotions::
# 104 "data/maps/ViridianCity_Mart/scripts.pory"
	.string "I've got to buy some POTIONS.\p"
	.string "You never know when your POKéMON\n"
	.string "will need quick healing.$"
