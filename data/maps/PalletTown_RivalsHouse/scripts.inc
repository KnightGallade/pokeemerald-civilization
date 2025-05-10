PalletTown_RivalsHouse_MapScripts::
# 7 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_RivalsHouse_OnTransition
	.byte 0


PalletTown_RivalsHouse_OnTransition::
# 11 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	call_if_lt VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_MoveDaisyToTable
# 12 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	call_if_ge VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_AlreadyReceivedTownMap
	end


PalletTown_RivalsHouse_EventScript_MoveDaisyToTable::
# 17 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 18 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	setobjectxyperm 1, 5, 4
	return


PalletTown_RivalsHouse_EventScript_AlreadyReceivedTownMap::
# 23 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	setvar VAR_TEMP_1, TRUE
	return


PalletTown_RivalsHouse_EventScript_Daisy::
# 28 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	lock
# 29 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	faceplayer
# 30 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_RivalsHouse_EventScript_GroomMon
# 31 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_TEMP_1, TRUE, PalletTown_RivalsHouse_EventScript_PleaseGiveMonsRest
# 32 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_ExplainTownMap
# 33 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1, PalletTown_RivalsHouse_EventScript_GiveTownMap
# 34 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_RivalsHouse_EventScript_HeardBattledRival
# 35 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_HiBrothersAtLab
# 36 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	closemessage
# 37 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 38 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitmovement 0
# 39 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_HeardBattledRival::
# 44 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_HeardYouBattledRival
# 45 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_GroomMon::
# 50 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_lt VAR_MASSAGE_COOLDOWN_STEP_COUNTER, 500, PalletTown_RivalsHouse_EventScript_RateMonFriendship
# 51 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LikeMeToGroomMon, MSGBOX_YESNO
# 52 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_RivalsHouse_EventScript_DeclineGrooming
# 53 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_GroomWhichOne
# 54 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	special ChoosePartyMon
# 55 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitstate
# 56 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	lock
# 57 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	faceplayer
# 58 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, PalletTown_RivalsHouse_EventScript_DeclineGrooming
# 59 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 60 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, PalletTown_RivalsHouse_EventScript_CantGroomEgg
# 61 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LookingNiceInNoTime
# 62 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	closemessage
# 63 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 64 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	playfanfare MUS_HEAL
# 65 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitfanfare
# 66 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	special DaisyMassageServices
# 67 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 68 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	special BufferMonNickname
# 69 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ThereYouGoAllDone
# 70 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_CantGroomEgg::
# 75 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_CantGroomAnEgg
# 76 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_DeclineGrooming::
# 81 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontNeedAnyGrooming
# 82 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_RateMonFriendship::
# 87 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_MayISeeFirstMon
# 88 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 89 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	switch VAR_RESULT
# 90 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	case 0, PalletTown_RivalsHouse_EventScript_RateMonFriendship_3
# 92 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	case 1, PalletTown_RivalsHouse_EventScript_RateMonFriendship_4
# 94 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	case 2, PalletTown_RivalsHouse_EventScript_RateMonFriendship_5
# 96 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	case 3, PalletTown_RivalsHouse_EventScript_RateMonFriendship_6
# 98 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	case 4, PalletTown_RivalsHouse_EventScript_RateMonFriendship_7
# 100 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	case 5, PalletTown_RivalsHouse_EventScript_RateMonFriendship_8
# 102 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	case 6, PalletTown_RivalsHouse_EventScript_RateMonFriendship_9
PalletTown_RivalsHouse_EventScript_RateMonFriendship_1:
	end

PalletTown_RivalsHouse_EventScript_RateMonFriendship_3:
# 91 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipLowest
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1

PalletTown_RivalsHouse_EventScript_RateMonFriendship_4:
# 93 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipLower
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1

PalletTown_RivalsHouse_EventScript_RateMonFriendship_5:
# 95 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipLow
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1

PalletTown_RivalsHouse_EventScript_RateMonFriendship_6:
# 97 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipMid
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1

PalletTown_RivalsHouse_EventScript_RateMonFriendship_7:
# 99 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipHigh
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1

PalletTown_RivalsHouse_EventScript_RateMonFriendship_8:
# 101 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipHigher
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1

PalletTown_RivalsHouse_EventScript_RateMonFriendship_9:
# 103 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipHighest
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1


PalletTown_RivalsHouse_EventScript_MonFriendshipLowest::
# 109 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_WhyWouldMonHateYouSoMuch
# 110 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipLower::
# 115 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontLikeWayItGlaresAtYou
# 116 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipLow::
# 121 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_NotFamiliarWithYouYet
# 122 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipMid::
# 127 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsWarmingUpToYou
# 128 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipHigh::
# 133 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsQuiteFriendly
# 134 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipHigher::
# 139 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItLooksVeryHappy
# 140 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_MonFriendshipHighest::
# 145 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_CouldntLoveYouMore
# 146 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_PleaseGiveMonsRest::
# 151 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_PleaseGiveMonsRest
# 152 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_GiveTownMap::
# 157 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ErrandForGrandpaThisWillHelp
# 158 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	closemessage
# 159 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterRight
# 160 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitmovement 0
# 161 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	removeobject 2
# 162 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 163 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	delay 15
# 164 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 165 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitmovement 0
# 166 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	delay 12
# 167 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	giveitem ITEM_TOWN_MAP, 1
# 168 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 169 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitfanfare
# 170 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_ExplainTownMap::
# 175 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ExplainTownMap
# 176 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
	end


PalletTown_RivalsHouse_EventScript_TownMap::
# 181 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsBigMapOfKanto, MSGBOX_NPC
	end


PalletTown_RivalsHouse_EventScript_Bookshelf::
# 186 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ShelvesCrammedFullOfBooks, MSGBOX_SIGN
	end


PalletTown_RivalsHouse_EventScript_Picture::
# 191 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LovelyAndSweetClefairy, MSGBOX_SIGN
	end


PalletTown_RivalsHouse_Text_HiBrothersAtLab::
# 195 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "DAISY: Hi, {PLAYER}!\p"
	.string "My brother, {RIVAL}, is out at\n"
	.string "Grandpa's LAB.$"

PalletTown_RivalsHouse_Text_HeardYouBattledRival::
# 201 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "DAISY: {PLAYER}, I heard you had\n"
	.string "a battle against {RIVAL}.\p"
	.string "I wish I'd seen that!$"

PalletTown_RivalsHouse_Text_ErrandForGrandpaThisWillHelp::
# 207 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "Grandpa asked you to run an\n"
	.string "errand?\p"
	.string "Gee, that's lazy of him.\n"
	.string "Here, this will help you.$"

PalletTown_RivalsHouse_Text_ExplainTownMap::
# 214 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "You can use the TOWN MAP to find\n"
	.string "out where you are, or check the\l"
	.string "names of places.$"

PalletTown_RivalsHouse_Text_PleaseGiveMonsRest::
# 220 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "DAISY: Just like people, POKéMON\n"
	.string "are living things.\p"
	.string "When they get tired, please give\n"
	.string "them a rest.$"

PalletTown_RivalsHouse_Text_ItsBigMapOfKanto::
# 227 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "It's a big map of the KANTO region.\n"
	.string "Now this would be useful!$"

PalletTown_RivalsHouse_Text_ShelvesCrammedFullOfBooks::
# 232 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "The shelves are crammed full of\n"
	.string "books on POKéMON.$"

PalletTown_RivalsHouse_Text_LikeMeToGroomMon::
# 237 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "DAISY: Hi, {PLAYER}!\n"
	.string "Good timing.\p"
	.string "I'm about to have some tea.\n"
	.string "Would you like to join me?\p"
	.string "Oh, but look.\n"
	.string "Your POKéMON are a little dirty.\p"
	.string "Would you like me to groom one?$"

PalletTown_RivalsHouse_Text_DontNeedAnyGrooming::
# 247 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "You don't need any grooming done?\n"
	.string "Okay, we'll just have tea.$"

PalletTown_RivalsHouse_Text_GroomWhichOne::
# 252 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "Which one should I groom?$"

PalletTown_RivalsHouse_Text_LookingNiceInNoTime::
# 256 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "DAISY: Okay, I'll get it looking\n"
	.string "nice in no time.$"

PalletTown_RivalsHouse_Text_ThereYouGoAllDone::
# 261 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "{COLOR DARK_GRAY}{STR_VAR_1} looks dreamily content…\p"
	.string "{COLOR RED}DAISY: There you go! All done.\n"
	.string "See? Doesn't it look nice?\p"
	.string "Giggle…\n"
	.string "It's such a cute POKéMON.$"

PalletTown_RivalsHouse_Text_CantGroomAnEgg::
# 269 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "Oh, sorry. I honestly can't\n"
	.string "groom an EGG.$"

PalletTown_RivalsHouse_Text_MayISeeFirstMon::
# 274 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "DAISY: Your POKéMON grow to love\n"
	.string "you if you raise them with love.\p"
	.string "For example, {PLAYER}, may I see\n"
	.string "your first POKéMON?$"

PalletTown_RivalsHouse_Text_CouldntLoveYouMore::
# 281 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "It couldn't possibly love you\n"
	.string "any more than it does now.\p"
	.string "Your POKéMON is happy beyond\n"
	.string "words.$"

PalletTown_RivalsHouse_Text_ItLooksVeryHappy::
# 288 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "It looks very happy.\p"
	.string "I wish {RIVAL} could see this and\n"
	.string "learn something from it.$"

PalletTown_RivalsHouse_Text_ItsQuiteFriendly::
# 294 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "It's quite friendly with you.\n"
	.string "Keep being good to it!$"

PalletTown_RivalsHouse_Text_ItsWarmingUpToYou::
# 299 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "It's warming up to you.\n"
	.string "Trust must be growing between you.$"

PalletTown_RivalsHouse_Text_NotFamiliarWithYouYet::
# 304 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "It's not quite familiar with you\n"
	.string "yet.\p"
	.string "POKéMON are all quite wary when\n"
	.string "you first get them.$"

PalletTown_RivalsHouse_Text_DontLikeWayItGlaresAtYou::
# 311 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "{PLAYER}, I don't like the way it\n"
	.string "glares at you.\p"
	.string "Could you try being a little nicer\n"
	.string "to it?$"

PalletTown_RivalsHouse_Text_WhyWouldMonHateYouSoMuch::
# 318 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "…Um, it's not easy for me to say\n"
	.string "this, but…\p"
	.string "Is there some reason why your\n"
	.string "POKéMON would hate you so much?$"

PalletTown_RivalsHouse_Text_LovelyAndSweetClefairy::
# 325 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "“The lovely and sweet\n"
	.string "CLEFAIRY”$"
