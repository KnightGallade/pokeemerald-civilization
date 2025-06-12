PewterCity_Museum_1F_MapScripts::
	.byte 0


PewterCity_Museum_1F_EventScript_Scientist1::
# 4 "data/maps/PewterCity_Museum_1F/scripts.pory"
	lock
# 5 "data/maps/PewterCity_Museum_1F/scripts.pory"
	faceplayer
# 6 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_WEST, PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
# 7 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_SOUTH, PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
# 8 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
# 9 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_PleaseEnjoyYourself
# 10 "data/maps/PewterCity_Museum_1F/scripts.pory"
	release
	end


PewterCity_Museum_1F_EventScript_Scientist1BehindCounter::
# 15 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DoYouKnowWhatAmberIs, MSGBOX_YESNO
# 16 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_Museum_1F_EventScript_AmberHasGeneticMatter
# 17 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PewterCity_Museum_1F_EventScript_ExplainAmber
	end


PewterCity_Museum_1F_EventScript_AmberHasGeneticMatter::
# 22 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AmberContainsGeneticMatter
# 23 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_1F_SCIENTIST1, Common_Movement_FaceOriginalDirection
# 24 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 25 "data/maps/PewterCity_Museum_1F/scripts.pory"
	release
	end


PewterCity_Museum_1F_EventScript_ExplainAmber::
# 30 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AmberIsFossilizedSap
# 31 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_1F_SCIENTIST1, Common_Movement_FaceOriginalDirection
# 32 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 33 "data/maps/PewterCity_Museum_1F/scripts.pory"
	release
	end


PewterCity_Museum_1F_EventScript_EntranceTriggerLeft::
# 38 "data/maps/PewterCity_Museum_1F/scripts.pory"
	lockall
# 39 "data/maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 40 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 41 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 42 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
	end


PewterCity_Museum_1F_EventScript_EntranceTriggerMid::
# 47 "data/maps/PewterCity_Museum_1F/scripts.pory"
	lockall
# 48 "data/maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 49 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 50 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 51 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
	end


PewterCity_Museum_1F_EventScript_EntranceTriggerRight::
# 56 "data/maps/PewterCity_Museum_1F/scripts.pory"
	lockall
# 57 "data/maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 58 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 59 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 60 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
	end


PewterCity_Museum_1F_EventScript_EntranceTrigger::
# 65 "data/maps/PewterCity_Museum_1F/scripts.pory"
	showmoneybox 0, 0
# 66 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_Its50YForChildsTicket, MSGBOX_YESNO
# 67 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_Museum_1F_EventScript_TryPayForTicket
# 68 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_ComeAgain
# 69 "data/maps/PewterCity_Museum_1F/scripts.pory"
	closemessage
# 70 "data/maps/PewterCity_Museum_1F/scripts.pory"
	hidemoneybox
# 71 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Movement_ForcePlayerExit
# 72 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 73 "data/maps/PewterCity_Museum_1F/scripts.pory"
	releaseall
	end


PewterCity_Museum_1F_EventScript_TryPayForTicket::
# 78 "data/maps/PewterCity_Museum_1F/scripts.pory"
	checkmoney 50
# 79 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Museum_1F_EventScript_NotEnoughMoney
# 80 "data/maps/PewterCity_Museum_1F/scripts.pory"
	closemessage
# 81 "data/maps/PewterCity_Museum_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_Museum_1F_EventScript_PlayerApproachCounterLeft
# 82 "data/maps/PewterCity_Museum_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_Museum_1F_EventScript_PlayerApproachCounterMid
# 83 "data/maps/PewterCity_Museum_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_Museum_1F_EventScript_PlayerApproachCounterRight
# 84 "data/maps/PewterCity_Museum_1F/scripts.pory"
	playse SE_SHOP
# 85 "data/maps/PewterCity_Museum_1F/scripts.pory"
	removemoney 50
# 86 "data/maps/PewterCity_Museum_1F/scripts.pory"
	updatemoneybox
# 87 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitse
# 88 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_Right50YThankYou
# 89 "data/maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY_MUSEUM_1F, 1
# 90 "data/maps/PewterCity_Museum_1F/scripts.pory"
	hidemoneybox
# 91 "data/maps/PewterCity_Museum_1F/scripts.pory"
	releaseall
	end


PewterCity_Museum_1F_EventScript_PlayerApproachCounterLeft::
# 96 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterLeft
# 97 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
	return


PewterCity_Museum_1F_EventScript_PlayerApproachCounterMid::
# 102 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterMid
# 103 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
	return


PewterCity_Museum_1F_EventScript_PlayerApproachCounterRight::
# 108 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterRight
# 109 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
	return


PewterCity_Museum_1F_EventScript_NotEnoughMoney::
# 114 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DontHaveEnoughMoney
# 115 "data/maps/PewterCity_Museum_1F/scripts.pory"
	closemessage
# 116 "data/maps/PewterCity_Museum_1F/scripts.pory"
	hidemoneybox
# 117 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Movement_ForcePlayerExit
# 118 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 119 "data/maps/PewterCity_Museum_1F/scripts.pory"
	releaseall
	end


# 123 "data/maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_Movement_ForcePlayerExit:
# 124 "data/maps/PewterCity_Museum_1F/scripts.pory"
	walk_down
# 125 "data/maps/PewterCity_Museum_1F/scripts.pory"
	step_end

# 128 "data/maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_Movement_ApproachCounterLeft:
# 129 "data/maps/PewterCity_Museum_1F/scripts.pory"
	walk_right
# 130 "data/maps/PewterCity_Museum_1F/scripts.pory"
	walk_right
# 131 "data/maps/PewterCity_Museum_1F/scripts.pory"
	delay_8
# 132 "data/maps/PewterCity_Museum_1F/scripts.pory"
	walk_in_place_right
# 133 "data/maps/PewterCity_Museum_1F/scripts.pory"
	step_end

# 136 "data/maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_Movement_ApproachCounterMid:
# 137 "data/maps/PewterCity_Museum_1F/scripts.pory"
	walk_right
# 138 "data/maps/PewterCity_Museum_1F/scripts.pory"
	delay_8
# 139 "data/maps/PewterCity_Museum_1F/scripts.pory"
	walk_in_place_right
# 140 "data/maps/PewterCity_Museum_1F/scripts.pory"
	step_end

# 143 "data/maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_Movement_ApproachCounterRight:
# 144 "data/maps/PewterCity_Museum_1F/scripts.pory"
	delay_8
# 145 "data/maps/PewterCity_Museum_1F/scripts.pory"
	walk_in_place_right
# 146 "data/maps/PewterCity_Museum_1F/scripts.pory"
	step_end

PewterCity_Museum_1F_EventScript_Scientist2::
# 150 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_WeHaveTwoFossilsOnExhibit, MSGBOX_NPC
	end


PewterCity_Museum_1F_EventScript_OldMan::
# 155 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_ShouldBeGratefulForLongLife, MSGBOX_NPC
	end


PewterCity_Museum_1F_EventScript_OldAmberScientist::
# 160 "data/maps/PewterCity_Museum_1F/scripts.pory"
	lock
# 161 "data/maps/PewterCity_Museum_1F/scripts.pory"
	faceplayer
# 162 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_set FLAG_GOT_OLD_AMBER, PewterCity_Museum_1F_EventScript_AlreadyGotOldAmber
# 163 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_WantYouToGetAmberExamined
# 164 "data/maps/PewterCity_Museum_1F/scripts.pory"
	checkitemspace ITEM_OLD_AMBER
# 165 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Museum_1F_EventScript_NoRoomForOldAmber
# 166 "data/maps/PewterCity_Museum_1F/scripts.pory"
	setflag FLAG_GOT_OLD_AMBER
# 167 "data/maps/PewterCity_Museum_1F/scripts.pory"
	removeobject LOCALID_PEWTER_MUSEUM_1F_OLD_AMBER
# 168 "data/maps/PewterCity_Museum_1F/scripts.pory"
	giveitem_msg PewterCity_Museum_1F_Text_ReceivedOldAmberFromMan, ITEM_OLD_AMBER, 1, MUS_RG_OBTAIN_KEY_ITEM
# 169 "data/maps/PewterCity_Museum_1F/scripts.pory"
	release
	end


PewterCity_Museum_1F_EventScript_NoRoomForOldAmber::
# 174 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DontHaveSpaceForThis
# 175 "data/maps/PewterCity_Museum_1F/scripts.pory"
	release
	end


PewterCity_Museum_1F_EventScript_AlreadyGotOldAmber::
# 180 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_GetOldAmberChecked
# 181 "data/maps/PewterCity_Museum_1F/scripts.pory"
	release
	end


PewterCity_Museum_1F_EventScript_OldAmber::
# 186 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_BeautifulPieceOfAmber, MSGBOX_NPC
	end


PewterCity_Museum_1F_EventScript_AerodactylFossil::
# 191 "data/maps/PewterCity_Museum_1F/scripts.pory"
	lockall
# 192 "data/maps/PewterCity_Museum_1F/scripts.pory"
	showmonpic SPECIES_AERODACTYL, 10, 3
# 193 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AerodactylFossil
# 194 "data/maps/PewterCity_Museum_1F/scripts.pory"
	hidemonpic
# 195 "data/maps/PewterCity_Museum_1F/scripts.pory"
	releaseall
	end


PewterCity_Museum_1F_EventScript_KabutopsFossil::
# 200 "data/maps/PewterCity_Museum_1F/scripts.pory"
	lockall
# 201 "data/maps/PewterCity_Museum_1F/scripts.pory"
	showmonpic SPECIES_KABUTOPS, 10, 3
# 202 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_KabutopsFossil
# 203 "data/maps/PewterCity_Museum_1F/scripts.pory"
	hidemonpic
# 204 "data/maps/PewterCity_Museum_1F/scripts.pory"
	releaseall
	end


PewterCity_Museum_1F_EventScript_PokemonJournalBrock::
# 209 "data/maps/PewterCity_Museum_1F/scripts.pory"
	lockall
# 210 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PokemonJournal_Text_SpecialFeatureBrock
# 211 "data/maps/PewterCity_Museum_1F/scripts.pory"
	releaseall
	end


PewterCity_Museum_1F_Text_Its50YForChildsTicket::
# 215 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "Yes, yes.\n"
	.string "It's ¥50 for a child's ticket.\p"
	.string "Would you like to come in?$"

PewterCity_Museum_1F_Text_ComeAgain::
# 221 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "Come again!$"

PewterCity_Museum_1F_Text_Right50YThankYou::
# 225 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "Right, ¥50!\n"
	.string "Thank you!$"

PewterCity_Museum_1F_Text_DontHaveEnoughMoney::
# 230 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "You don't have enough money.$"

PewterCity_Museum_1F_Text_PleaseEnjoyYourself::
# 234 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "Please enjoy yourself.$"

PewterCity_Museum_1F_Text_DoYouKnowWhatAmberIs::
# 238 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "You can't sneak in the back way!\n"
	.string "Nice try, kid, but no.\p"
	.string "Oh, whatever!\n"
	.string "Do you know what AMBER is?$"

PewterCity_Museum_1F_Text_AmberContainsGeneticMatter::
# 245 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "AMBER contains the genetic matter\n"
	.string "of ancient POKéMON.\p"
	.string "There's a LAB somewhere trying to\n"
	.string "resurrect POKéMON from AMBER.$"

PewterCity_Museum_1F_Text_AmberIsFossilizedSap::
# 252 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "AMBER is actually sap, that gooey\n"
	.string "stuff that oozes from trees.\p"
	.string "The ancient sap fossilized over\n"
	.string "time to become rock-hard AMBER.$"

PewterCity_Museum_1F_Text_ShouldBeGratefulForLongLife::
# 259 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "I should be grateful for my long\n"
	.string "life.\p"
	.string "Never did I think I would get to\n"
	.string "see the bones of a dragon!$"

PewterCity_Museum_1F_Text_WantYouToGetAmberExamined::
# 266 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "Ssh! Listen, I need to share a\n"
	.string "secret with someone.\p"
	.string "I think that this chunk of AMBER\n"
	.string "contains POKéMON DNA!\p"
	.string "It would be a shattering scientific\n"
	.string "breakthrough if POKéMON could be\l"
	.string "resurrected from it.\p"
	.string "But, my colleagues just ignore\n"
	.string "what I have to say.\p"
	.string "So, I have a favor to ask!\p"
	.string "I want you to get this examined at\n"
	.string "a POKéMON LAB somewhere.$"

PewterCity_Museum_1F_Text_ReceivedOldAmberFromMan::
# 281 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "{PLAYER} received the OLD AMBER\n"
	.string "from the man.$"

PewterCity_Museum_1F_Text_GetOldAmberChecked::
# 286 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "Ssh!\n"
	.string "Get the OLD AMBER checked!$"

PewterCity_Museum_1F_Text_DontHaveSpaceForThis::
# 291 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "You don't have space for this.$"

PewterCity_Museum_1F_Text_WeHaveTwoFossilsOnExhibit::
# 295 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "We have two fossils of rare,\n"
	.string "prehistoric POKéMON on exhibit.$"

PewterCity_Museum_1F_Text_BeautifulPieceOfAmber::
# 300 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "There is a beautiful piece of\n"
	.string "AMBER in a clear gold color.$"

PewterCity_Museum_1F_Text_AerodactylFossil::
# 305 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "AERODACTYL Fossil\n"
	.string "A primitive and rare POKéMON.$"

PewterCity_Museum_1F_Text_KabutopsFossil::
# 310 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "KABUTOPS Fossil\n"
	.string "A primitive and rare POKéMON.$"

PokemonJournal_Text_SpecialFeatureBrock::
# 315 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "POKéMON JOURNAL\p"
	.string "Special Feature: PEWTER GYM\n"
	.string "LEADER BROCK!\p"
	.string "BROCK rarely laughs, but is said to\n"
	.string "be unable to stop if he starts.$"
