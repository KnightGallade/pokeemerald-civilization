PalletTown_RivalsHouse_MapScripts::
# 4 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_RivalsHouse_OnTransition
	.byte 0


PalletTown_RivalsHouse_OnTransition::
# 8 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	call_if_lt VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_MoveDaisyToTable
# 9 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	call_if_ge VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_AlreadyReceivedTownMap
	end


PalletTown_RivalsHouse_EventScript_MoveDaisyToTable::
# 14 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	setobjectmovementtype LOCALID_RIVALS_HOUSE_DAISY, MOVEMENT_TYPE_FACE_RIGHT
# 15 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	setobjectxyperm LOCALID_RIVALS_HOUSE_DAISY, 5, 4
	return


PalletTown_RivalsHouse_EventScript_AlreadyReceivedTownMap::
# 20 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	setvar VAR_TEMP_1, TRUE
	return


PalletTown_RivalsHouse_EventScript_Daisy::
# 25 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	lock
# 26 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	faceplayer
# 27 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_RivalsHouse_EventScript_GroomMon
# 28 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_TEMP_1, TRUE, PalletTown_RivalsHouse_EventScript_PleaseGiveMonsRest
# 29 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_ExplainTownMap
# 30 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1, PalletTown_RivalsHouse_EventScript_GiveTownMap
# 31 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_RivalsHouse_EventScript_HeardBattledRival
# 32 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_HiBrothersAtLab
# 33 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	closemessage
# 34 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_DAISY, Common_Movement_FaceOriginalDirection
# 35 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitmovement 0
# 36 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_HeardBattledRival::
# 41 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_HeardYouBattledRival
# 42 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_GroomMon::
# 47 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_lt VAR_MASSAGE_COOLDOWN_STEP_COUNTER, 500, PalletTown_RivalsHouse_EventScript_RateMonFriendship
# 48 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LikeMeToGroomMon, MSGBOX_YESNO
# 49 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_RivalsHouse_EventScript_DeclineGrooming
# 50 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_GroomWhichOne
# 51 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	special ChoosePartyMon
# 52 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitstate
# 53 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	lock
# 54 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	faceplayer
# 55 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, PalletTown_RivalsHouse_EventScript_DeclineGrooming
# 56 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 57 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, PalletTown_RivalsHouse_EventScript_CantGroomEgg
# 58 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LookingNiceInNoTime
# 59 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	closemessage
# 60 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 61 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	playfanfare MUS_HEAL
# 62 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitfanfare
# 63 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	special DaisyMassageServices
# 64 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 65 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	special BufferMonNickname
# 66 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ThereYouGoAllDone
# 67 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_CantGroomEgg::
# 72 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_CantGroomAnEgg
# 73 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_DeclineGrooming::
# 78 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontNeedAnyGrooming
# 79 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_RateMonFriendship::
# 84 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_MayISeeFirstMon
# 85 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 86 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	switch VAR_RESULT
# 87 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	case 0, PalletTown_RivalsHouse_EventScript_RateMonFriendship_3
# 89 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	case 1, PalletTown_RivalsHouse_EventScript_RateMonFriendship_4
# 91 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	case 2, PalletTown_RivalsHouse_EventScript_RateMonFriendship_5
# 93 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	case 3, PalletTown_RivalsHouse_EventScript_RateMonFriendship_6
# 95 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	case 4, PalletTown_RivalsHouse_EventScript_RateMonFriendship_7
# 97 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	case 5, PalletTown_RivalsHouse_EventScript_RateMonFriendship_8
# 99 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	case 6, PalletTown_RivalsHouse_EventScript_RateMonFriendship_9
PalletTown_RivalsHouse_EventScript_RateMonFriendship_1:
	end

PalletTown_RivalsHouse_EventScript_RateMonFriendship_3:
# 88 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipLowest
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1

PalletTown_RivalsHouse_EventScript_RateMonFriendship_4:
# 90 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipLower
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1

PalletTown_RivalsHouse_EventScript_RateMonFriendship_5:
# 92 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipLow
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1

PalletTown_RivalsHouse_EventScript_RateMonFriendship_6:
# 94 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipMid
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1

PalletTown_RivalsHouse_EventScript_RateMonFriendship_7:
# 96 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipHigh
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1

PalletTown_RivalsHouse_EventScript_RateMonFriendship_8:
# 98 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipHigher
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1

PalletTown_RivalsHouse_EventScript_RateMonFriendship_9:
# 100 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipHighest
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1


PalletTown_RivalsHouse_EventScript_MonFriendshipLowest::
# 106 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_WhyWouldMonHateYouSoMuch
# 107 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipLower::
# 112 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontLikeWayItGlaresAtYou
# 113 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipLow::
# 118 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_NotFamiliarWithYouYet
# 119 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipMid::
# 124 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsWarmingUpToYou
# 125 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipHigh::
# 130 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsQuiteFriendly
# 131 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipHigher::
# 136 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItLooksVeryHappy
# 137 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipHighest::
# 142 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_CouldntLoveYouMore
# 143 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_PleaseGiveMonsRest::
# 148 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_PleaseGiveMonsRest
# 149 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_GiveTownMap::
# 154 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ErrandForGrandpaThisWillHelp
# 155 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	closemessage
# 156 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	checkitemspace ITEM_TOWN_MAP
# 157 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PalletTown_RivalsHouse_EventScript_NoRoomForTownMap
# 158 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_DAISY, Common_Movement_WalkInPlaceFasterRight
# 159 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitmovement 0
# 160 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	removeobject LOCALID_RIVALS_HOUSE_TOWN_MAP
# 161 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 162 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	delay 15
# 163 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_DAISY, Common_Movement_FacePlayer
# 164 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitmovement 0
# 165 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	delay 12
# 166 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	giveitem_msg PalletTown_RivalsHouse_Text_ReceivedTownMapFromDaisy, ITEM_TOWN_MAP, 1, MUS_RG_OBTAIN_KEY_ITEM
# 167 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_NoRoomForTownMap::
# 172 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontHaveSpaceForThis
# 173 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_ExplainTownMap::
# 178 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ExplainTownMap
# 179 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_TownMap::
# 184 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsBigMapOfKanto, MSGBOX_NPC
	end


PalletTown_RivalsHouse_EventScript_Bookshelf::
# 189 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ShelvesCrammedFullOfBooks, MSGBOX_SIGN
	end


PalletTown_RivalsHouse_EventScript_Picture::
# 194 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LovelyAndSweetClefairy, MSGBOX_SIGN
	end


PalletTown_RivalsHouse_Text_HiBrothersAtLab::
# 198 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "DAISY: Hi, {PLAYER}!\p"
	.string "My brother, {RIVAL}, is out at\n"
	.string "Grandpa's LAB.$"

PalletTown_RivalsHouse_Text_HeardYouBattledRival::
# 204 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "DAISY: {PLAYER}, I heard you had\n"
	.string "a battle against {RIVAL}.\p"
	.string "I wish I'd seen that!$"

PalletTown_RivalsHouse_Text_ErrandForGrandpaThisWillHelp::
# 210 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "Grandpa asked you to run an\n"
	.string "errand?\p"
	.string "Gee, that's lazy of him.\n"
	.string "Here, this will help you.$"

PalletTown_RivalsHouse_Text_ReceivedTownMapFromDaisy::
# 217 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "{PLAYER} received a TOWN MAP\n"
	.string "from DAISY.$"

PalletTown_RivalsHouse_Text_DontHaveSpaceForThis::
# 222 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "You don't have space for this in\n"
	.string "your BAG.$"

PalletTown_RivalsHouse_Text_ExplainTownMap::
# 227 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "You can use the TOWN MAP to find\n"
	.string "out where you are, or check the\l"
	.string "names of places.$"

PalletTown_RivalsHouse_Text_PleaseGiveMonsRest::
# 233 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "DAISY: Just like people, POKéMON\n"
	.string "are living things.\p"
	.string "When they get tired, please give\n"
	.string "them a rest.$"

PalletTown_RivalsHouse_Text_ItsBigMapOfKanto::
# 240 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "It's a big map of the KANTO region.\n"
	.string "Now this would be useful!$"

PalletTown_RivalsHouse_Text_ShelvesCrammedFullOfBooks::
# 245 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "The shelves are crammed full of\n"
	.string "books on POKéMON.$"

PalletTown_RivalsHouse_Text_LikeMeToGroomMon::
# 250 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "DAISY: Hi, {PLAYER}!\n"
	.string "Good timing.\p"
	.string "I'm about to have some tea.\n"
	.string "Would you like to join me?\p"
	.string "Oh, but look.\n"
	.string "Your POKéMON are a little dirty.\p"
	.string "Would you like me to groom one?$"

PalletTown_RivalsHouse_Text_DontNeedAnyGrooming::
# 260 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "You don't need any grooming done?\n"
	.string "Okay, we'll just have tea.$"

PalletTown_RivalsHouse_Text_GroomWhichOne::
# 265 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "Which one should I groom?$"

PalletTown_RivalsHouse_Text_LookingNiceInNoTime::
# 269 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "DAISY: Okay, I'll get it looking\n"
	.string "nice in no time.$"

PalletTown_RivalsHouse_Text_ThereYouGoAllDone::
# 274 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "{COLOR DARK_GRAY}{STR_VAR_1} looks dreamily content…\p"
	.string "{COLOR RED}DAISY: There you go! All done.\n"
	.string "See? Doesn't it look nice?\p"
	.string "Giggle…\n"
	.string "It's such a cute POKéMON.$"

PalletTown_RivalsHouse_Text_CantGroomAnEgg::
# 282 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "Oh, sorry. I honestly can't\n"
	.string "groom an EGG.$"

PalletTown_RivalsHouse_Text_MayISeeFirstMon::
# 287 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "DAISY: Your POKéMON grow to love\n"
	.string "you if you raise them with love.\p"
	.string "For example, {PLAYER}, may I see\n"
	.string "your first POKéMON?$"

PalletTown_RivalsHouse_Text_CouldntLoveYouMore::
# 294 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "It couldn't possibly love you\n"
	.string "any more than it does now.\p"
	.string "Your POKéMON is happy beyond\n"
	.string "words.$"

PalletTown_RivalsHouse_Text_ItLooksVeryHappy::
# 301 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "It looks very happy.\p"
	.string "I wish {RIVAL} could see this and\n"
	.string "learn something from it.$"

PalletTown_RivalsHouse_Text_ItsQuiteFriendly::
# 307 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "It's quite friendly with you.\n"
	.string "Keep being good to it!$"

PalletTown_RivalsHouse_Text_ItsWarmingUpToYou::
# 312 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "It's warming up to you.\n"
	.string "Trust must be growing between you.$"

PalletTown_RivalsHouse_Text_NotFamiliarWithYouYet::
# 317 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "It's not quite familiar with you\n"
	.string "yet.\p"
	.string "POKéMON are all quite wary when\n"
	.string "you first get them.$"

PalletTown_RivalsHouse_Text_DontLikeWayItGlaresAtYou::
# 324 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "{PLAYER}, I don't like the way it\n"
	.string "glares at you.\p"
	.string "Could you try being a little nicer\n"
	.string "to it?$"

PalletTown_RivalsHouse_Text_WhyWouldMonHateYouSoMuch::
# 331 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "…Um, it's not easy for me to say\n"
	.string "this, but…\p"
	.string "Is there some reason why your\n"
	.string "POKéMON would hate you so much?$"

PalletTown_RivalsHouse_Text_LovelyAndSweetClefairy::
# 338 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "“The lovely and sweet\n"
	.string "CLEFAIRY”$"
