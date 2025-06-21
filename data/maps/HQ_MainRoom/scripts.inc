HQ_MainRoom_MapScripts::
	.byte 0


HQ_MainRoom_EventScript_Choose_Character::
# 4 "data/maps/HQ_MainRoom/scripts.pory"
	lockall
# 5 "data/maps/HQ_MainRoom/scripts.pory"
	faceplayer
# 6 "data/maps/HQ_MainRoom/scripts.pory"
	msgbox HQ_MainRoom_Text_Choose_Someone, MSGBOX_NPC
# 7 "data/maps/HQ_MainRoom/scripts.pory"
	dynmultipush HQ_MainRoom_EventScript_Choose_Character_Text_0, ITEM_FIRE_STONE
# 8 "data/maps/HQ_MainRoom/scripts.pory"
	dynmultipush HQ_MainRoom_EventScript_Choose_Character_Text_1, ITEM_LEAF_STONE
# 9 "data/maps/HQ_MainRoom/scripts.pory"
	dynmultipush HQ_MainRoom_EventScript_Choose_Character_Text_2, ITEM_RED_ORB
# 10 "data/maps/HQ_MainRoom/scripts.pory"
	dynmultipush HQ_MainRoom_EventScript_Choose_Character_Text_3, ITEM_BLUE_ORB
# 11 "data/maps/HQ_MainRoom/scripts.pory"
	dynmultistack 0, 0, TRUE, 4, FALSE, VAR_0x800A, DYN_MULTICHOICE_CB_SHOW_ITEM
# 12 "data/maps/HQ_MainRoom/scripts.pory"
	switch VAR_RESULT
# 14 "data/maps/HQ_MainRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 15 "data/maps/HQ_MainRoom/scripts.pory"
	waitstate
# 16 "data/maps/HQ_MainRoom/scripts.pory"
	getobjectxy LOCALID_HQ_RED, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
# 17 "data/maps/HQ_MainRoom/scripts.pory"
	setobjectxy LOCALID_PLAYER, VAR_TEMP_0, VAR_TEMP_1
# 18 "data/maps/HQ_MainRoom/scripts.pory"
	applymovement LOCALID_PLAYER, HQ_MainRoom_EventScript_Choose_Character_Movement_0
# 19 "data/maps/HQ_MainRoom/scripts.pory"
	setobjectmovementtype LOCALID_HQ_RED, MOVEMENT_TYPE_PLAYER
# 20 "data/maps/HQ_MainRoom/scripts.pory"
	waitstate
# 21 "data/maps/HQ_MainRoom/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 22 "data/maps/HQ_MainRoom/scripts.pory"
	waitstate
	end

# 25 "data/maps/HQ_MainRoom/scripts.pory"
	releaseall
	return


# 18 "data/maps/HQ_MainRoom/scripts.pory"
HQ_MainRoom_EventScript_Choose_Character_Movement_0:
# 18 "data/maps/HQ_MainRoom/scripts.pory"
	set_invisible
	step_end

HQ_MainRoom_EventScript_Choose_Character_Text_0:
# 7 "data/maps/HQ_MainRoom/scripts.pory"
	.string "Red$"

HQ_MainRoom_EventScript_Choose_Character_Text_1:
# 8 "data/maps/HQ_MainRoom/scripts.pory"
	.string "Leaf$"

HQ_MainRoom_EventScript_Choose_Character_Text_2:
# 9 "data/maps/HQ_MainRoom/scripts.pory"
	.string "Brendan$"

HQ_MainRoom_EventScript_Choose_Character_Text_3:
# 10 "data/maps/HQ_MainRoom/scripts.pory"
	.string "May$"

HQ_MainRoom_Text_Choose_Someone::
# 28 "data/maps/HQ_MainRoom/scripts.pory"
	.string "Choose a character to control...$"
