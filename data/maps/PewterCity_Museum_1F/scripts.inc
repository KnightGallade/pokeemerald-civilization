PewterCity_Museum_1F_MapScripts::
	.byte 0


PewterCity_Museum_1F_EventScript_Scientist1::
# 7 "data/maps/PewterCity_Museum_1F/scripts.pory"
	lock
# 8 "data/maps/PewterCity_Museum_1F/scripts.pory"
	faceplayer
# 9 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_WEST, PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
# 10 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_SOUTH, PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
# 11 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
# 12 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_PleaseEnjoyYourself
# 13 "data/maps/PewterCity_Museum_1F/scripts.pory"
	release
	end


PewterCity_Museum_1F_EventScript_Scientist1BehindCounter::
# 18 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DoYouKnowWhatAmberIs, MSGBOX_YESNO
# 19 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_Museum_1F_EventScript_AmberHasGeneticMatter
# 20 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PewterCity_Museum_1F_EventScript_ExplainAmber
	end


PewterCity_Museum_1F_EventScript_AmberHasGeneticMatter::
# 25 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AmberContainsGeneticMatter
# 26 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 27 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 28 "data/maps/PewterCity_Museum_1F/scripts.pory"
	release
	end


PewterCity_Museum_1F_EventScript_ExplainAmber::
# 33 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AmberIsFossilizedSap
# 34 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 35 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 36 "data/maps/PewterCity_Museum_1F/scripts.pory"
	release
	end


PewterCity_Museum_1F_EventScript_EntranceTriggerLeft::
# 41 "data/maps/PewterCity_Museum_1F/scripts.pory"
	lockall
# 42 "data/maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 43 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 44 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 45 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
	end


PewterCity_Museum_1F_EventScript_EntranceTriggerMid::
# 50 "data/maps/PewterCity_Museum_1F/scripts.pory"
	lockall
# 51 "data/maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 52 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 53 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 54 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
	end


PewterCity_Museum_1F_EventScript_EntranceTriggerRight::
# 59 "data/maps/PewterCity_Museum_1F/scripts.pory"
	lockall
# 60 "data/maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 61 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 62 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 63 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
	end


PewterCity_Museum_1F_EventScript_EntranceTrigger::
# 68 "data/maps/PewterCity_Museum_1F/scripts.pory"
	showmoneybox 0, 0
# 69 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_Its50YForChildsTicket, MSGBOX_YESNO
# 70 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_Museum_1F_EventScript_TryPayForTicket
# 71 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_ComeAgain
# 72 "data/maps/PewterCity_Museum_1F/scripts.pory"
	closemessage
# 73 "data/maps/PewterCity_Museum_1F/scripts.pory"
	hidemoneybox
# 74 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Movement_ForcePlayerExit
# 75 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 76 "data/maps/PewterCity_Museum_1F/scripts.pory"
	releaseall
	end


PewterCity_Museum_1F_EventScript_TryPayForTicket::
# 81 "data/maps/PewterCity_Museum_1F/scripts.pory"
	checkmoney 50
# 82 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Museum_1F_EventScript_NotEnoughMoney
# 83 "data/maps/PewterCity_Museum_1F/scripts.pory"
	closemessage
# 84 "data/maps/PewterCity_Museum_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_Museum_1F_EventScript_PlayerApproachCounterLeft
# 85 "data/maps/PewterCity_Museum_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_Museum_1F_EventScript_PlayerApproachCounterMid
# 86 "data/maps/PewterCity_Museum_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_Museum_1F_EventScript_PlayerApproachCounterRight
# 87 "data/maps/PewterCity_Museum_1F/scripts.pory"
	playse SE_SHOP
# 88 "data/maps/PewterCity_Museum_1F/scripts.pory"
	removemoney 50
# 89 "data/maps/PewterCity_Museum_1F/scripts.pory"
	updatemoneybox
# 90 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitse
# 91 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_Right50YThankYou
# 92 "data/maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY_MUSEUM_1F, 1
# 93 "data/maps/PewterCity_Museum_1F/scripts.pory"
	hidemoneybox
# 94 "data/maps/PewterCity_Museum_1F/scripts.pory"
	releaseall
	end


PewterCity_Museum_1F_EventScript_PlayerApproachCounterLeft::
# 99 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterLeft
# 100 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
	return


PewterCity_Museum_1F_EventScript_PlayerApproachCounterMid::
# 105 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterMid
# 106 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
	return


PewterCity_Museum_1F_EventScript_PlayerApproachCounterRight::
# 111 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterRight
# 112 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
	return


PewterCity_Museum_1F_EventScript_NotEnoughMoney::
# 117 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DontHaveEnoughMoney
# 118 "data/maps/PewterCity_Museum_1F/scripts.pory"
	closemessage
# 119 "data/maps/PewterCity_Museum_1F/scripts.pory"
	hidemoneybox
# 120 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Movement_ForcePlayerExit
# 121 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 122 "data/maps/PewterCity_Museum_1F/scripts.pory"
	releaseall
	end


# 126 "data/maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_Movement_ForcePlayerExit:
# 127 "data/maps/PewterCity_Museum_1F/scripts.pory"
	walk_down
# 128 "data/maps/PewterCity_Museum_1F/scripts.pory"
	step_end

# 131 "data/maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_Movement_ApproachCounterLeft:
# 132 "data/maps/PewterCity_Museum_1F/scripts.pory"
	walk_right
# 133 "data/maps/PewterCity_Museum_1F/scripts.pory"
	walk_right
# 134 "data/maps/PewterCity_Museum_1F/scripts.pory"
	delay_8
# 135 "data/maps/PewterCity_Museum_1F/scripts.pory"
	walk_in_place_right
# 136 "data/maps/PewterCity_Museum_1F/scripts.pory"
	step_end

# 139 "data/maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_Movement_ApproachCounterMid:
# 140 "data/maps/PewterCity_Museum_1F/scripts.pory"
	walk_right
# 141 "data/maps/PewterCity_Museum_1F/scripts.pory"
	delay_8
# 142 "data/maps/PewterCity_Museum_1F/scripts.pory"
	walk_in_place_right
# 143 "data/maps/PewterCity_Museum_1F/scripts.pory"
	step_end

# 146 "data/maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_Movement_ApproachCounterRight:
# 147 "data/maps/PewterCity_Museum_1F/scripts.pory"
	delay_8
# 148 "data/maps/PewterCity_Museum_1F/scripts.pory"
	walk_in_place_right
# 149 "data/maps/PewterCity_Museum_1F/scripts.pory"
	step_end

PewterCity_Museum_1F_EventScript_Scientist2::
# 153 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_WeHaveTwoFossilsOnExhibit, MSGBOX_NPC
	end


PewterCity_Museum_1F_EventScript_OldMan::
# 158 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_ShouldBeGratefulForLongLife, MSGBOX_NPC
	end


PewterCity_Museum_1F_EventScript_OldAmberScientist::
# 163 "data/maps/PewterCity_Museum_1F/scripts.pory"
	lock
# 164 "data/maps/PewterCity_Museum_1F/scripts.pory"
	faceplayer
# 165 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_set FLAG_GOT_OLD_AMBER, PewterCity_Museum_1F_EventScript_AlreadyGotOldAmber
# 166 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_WantYouToGetAmberExamined
# 167 "data/maps/PewterCity_Museum_1F/scripts.pory"
	checkitemspace ITEM_OLD_AMBER
# 168 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Museum_1F_EventScript_NoRoomForOldAmber
# 169 "data/maps/PewterCity_Museum_1F/scripts.pory"
	setflag FLAG_GOT_OLD_AMBER
# 170 "data/maps/PewterCity_Museum_1F/scripts.pory"
	removeobject 4
# 171 "data/maps/PewterCity_Museum_1F/scripts.pory"
	giveitem_msg PewterCity_Museum_1F_Text_ReceivedOldAmberFromMan, ITEM_OLD_AMBER, 1, MUS_RG_OBTAIN_KEY_ITEM
# 172 "data/maps/PewterCity_Museum_1F/scripts.pory"
	release
	end


PewterCity_Museum_1F_EventScript_NoRoomForOldAmber::
# 177 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DontHaveSpaceForThis
# 178 "data/maps/PewterCity_Museum_1F/scripts.pory"
	release
	end


PewterCity_Museum_1F_EventScript_AlreadyGotOldAmber::
# 183 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_GetOldAmberChecked
# 184 "data/maps/PewterCity_Museum_1F/scripts.pory"
	release
	end


PewterCity_Museum_1F_EventScript_OldAmber::
# 189 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_BeautifulPieceOfAmber, MSGBOX_NPC
	end


PewterCity_Museum_1F_EventScript_AerodactylFossil::
# 194 "data/maps/PewterCity_Museum_1F/scripts.pory"
	lockall
# 195 "data/maps/PewterCity_Museum_1F/scripts.pory"
	showmonpic SPECIES_AERODACTYL, 10, 3
# 196 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AerodactylFossil
# 197 "data/maps/PewterCity_Museum_1F/scripts.pory"
	hidemonpic
# 198 "data/maps/PewterCity_Museum_1F/scripts.pory"
	releaseall
	end


PewterCity_Museum_1F_EventScript_KabutopsFossil::
# 203 "data/maps/PewterCity_Museum_1F/scripts.pory"
	lockall
# 204 "data/maps/PewterCity_Museum_1F/scripts.pory"
	showmonpic SPECIES_KABUTOPS, 10, 3
# 205 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_KabutopsFossil
# 206 "data/maps/PewterCity_Museum_1F/scripts.pory"
	hidemonpic
# 207 "data/maps/PewterCity_Museum_1F/scripts.pory"
	releaseall
	end


PewterCity_Museum_1F_EventScript_PokemonJournalBrock::
# 212 "data/maps/PewterCity_Museum_1F/scripts.pory"
	lockall
# 213 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PokemonJournal_Text_SpecialFeatureBrock
# 214 "data/maps/PewterCity_Museum_1F/scripts.pory"
	releaseall
	end


PewterCity_Museum_1F_Text_Its50YForChildsTicket::
# 218 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "Yes, yes.\n"
	.string "It's ¥50 for a child's ticket.\p"
	.string "Would you like to come in?$"

PewterCity_Museum_1F_Text_ComeAgain::
# 224 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "Come again!$"

PewterCity_Museum_1F_Text_Right50YThankYou::
# 228 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "Right, ¥50!\n"
	.string "Thank you!$"

PewterCity_Museum_1F_Text_DontHaveEnoughMoney::
# 233 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "You don't have enough money.$"

PewterCity_Museum_1F_Text_PleaseEnjoyYourself::
# 237 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "Please enjoy yourself.$"

PewterCity_Museum_1F_Text_DoYouKnowWhatAmberIs::
# 241 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "You can't sneak in the back way!\n"
	.string "Nice try, kid, but no.\p"
	.string "Oh, whatever!\n"
	.string "Do you know what AMBER is?$"

PewterCity_Museum_1F_Text_AmberContainsGeneticMatter::
# 248 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "AMBER contains the genetic matter\n"
	.string "of ancient POKéMON.\p"
	.string "There's a LAB somewhere trying to\n"
	.string "resurrect POKéMON from AMBER.$"

PewterCity_Museum_1F_Text_AmberIsFossilizedSap::
# 255 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "AMBER is actually sap, that gooey\n"
	.string "stuff that oozes from trees.\p"
	.string "The ancient sap fossilized over\n"
	.string "time to become rock-hard AMBER.$"

PewterCity_Museum_1F_Text_ShouldBeGratefulForLongLife::
# 262 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "I should be grateful for my long\n"
	.string "life.\p"
	.string "Never did I think I would get to\n"
	.string "see the bones of a dragon!$"

PewterCity_Museum_1F_Text_WantYouToGetAmberExamined::
# 269 "data/maps/PewterCity_Museum_1F/scripts.pory"
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
# 284 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "{PLAYER} received the OLD AMBER\n"
	.string "from the man.$"

PewterCity_Museum_1F_Text_GetOldAmberChecked::
# 289 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "Ssh!\n"
	.string "Get the OLD AMBER checked!$"

PewterCity_Museum_1F_Text_DontHaveSpaceForThis::
# 294 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "You don't have space for this.$"

PewterCity_Museum_1F_Text_WeHaveTwoFossilsOnExhibit::
# 298 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "We have two fossils of rare,\n"
	.string "prehistoric POKéMON on exhibit.$"

PewterCity_Museum_1F_Text_BeautifulPieceOfAmber::
# 303 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "There is a beautiful piece of\n"
	.string "AMBER in a clear gold color.$"

PewterCity_Museum_1F_Text_AerodactylFossil::
# 308 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "AERODACTYL Fossil\n"
	.string "A primitive and rare POKéMON.$"

PewterCity_Museum_1F_Text_KabutopsFossil::
# 313 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "KABUTOPS Fossil\n"
	.string "A primitive and rare POKéMON.$"

PokemonJournal_Text_SpecialFeatureBrock::
# 318 "data/maps/PewterCity_Museum_1F/scripts.pory"
	.string "POKéMON JOURNAL\p"
	.string "Special Feature: PEWTER GYM\n"
	.string "LEADER BROCK!\p"
	.string "BROCK rarely laughs, but is said to\n"
	.string "be unable to stop if he starts.$"
