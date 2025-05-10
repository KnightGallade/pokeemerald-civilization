ViridianCity_MapScripts::
# 6 "data/maps/ViridianCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_OnTransition
	.byte 0


ViridianCity_OnTransition::
# 10 "data/maps/ViridianCity/scripts.pory"
	setworldmapflag FLAG_VISITED_VIRIDIAN_CITY
# 11 "data/maps/ViridianCity/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_SetOldManBlockingRoad
# 12 "data/maps/ViridianCity/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1, ViridianCity_EventScript_SetOldManStandingByRoad
# 13 "data/maps/ViridianCity/scripts.pory"
	call_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2, ViridianCity_EventScript_SetOldManNormal
# 14 "data/maps/ViridianCity/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 0, ViridianCity_EventScript_TryUnlockGym
	end


ViridianCity_EventScript_SetOldManNormal::
# 19 "data/maps/ViridianCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_FRLG_OLD_MAN_1
	return


ViridianCity_EventScript_SetOldManStandingByRoad::
# 24 "data/maps/ViridianCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_FRLG_OLD_MAN_1
# 25 "data/maps/ViridianCity/scripts.pory"
	setobjectxyperm 4, 21, 8
# 26 "data/maps/ViridianCity/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_LOOK_AROUND
	return


ViridianCity_EventScript_SetOldManBlockingRoad::
# 31 "data/maps/ViridianCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_FRLG_OLD_MAN_LYING_DOWN
# 32 "data/maps/ViridianCity/scripts.pory"
	setobjectxyperm 4, 21, 11
# 33 "data/maps/ViridianCity/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	return


ViridianCity_EventScript_TryUnlockGym::
# 38 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_KANTO_BADGE02_GET, Common_EventScript_NopReturn
# 39 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_KANTO_BADGE03_GET, Common_EventScript_NopReturn
# 40 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_KANTO_BADGE04_GET, Common_EventScript_NopReturn
# 41 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_KANTO_BADGE05_GET, Common_EventScript_NopReturn
# 42 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_KANTO_BADGE06_GET, Common_EventScript_NopReturn
# 43 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_KANTO_BADGE07_GET, Common_EventScript_NopReturn
# 44 "data/maps/ViridianCity/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1
	return


ViridianCity_EventScript_GymDoorLocked::
# 49 "data/maps/ViridianCity/scripts.pory"
	lockall
# 50 "data/maps/ViridianCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 51 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 52 "data/maps/ViridianCity/scripts.pory"
	delay 20
# 53 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymDoorsAreLocked
# 54 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 55 "data/maps/ViridianCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ViridianCity_Movement_JumpDownLedge
# 56 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 57 "data/maps/ViridianCity/scripts.pory"
	releaseall
	end


ViridianCity_Movement_JumpDownLedge::
# 62 "data/maps/ViridianCity/scripts.pory"
	jump_2_down
# 63 "data/maps/ViridianCity/scripts.pory"
	step_end
	return


ViridianCity_EventScript_CitySign::
# 67 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_CitySign, MSGBOX_SIGN
	end


ViridianCity_EventScript_TrainerTips1::
# 72 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_CatchMonsForEasierBattles, MSGBOX_SIGN
	end


ViridianCity_EventScript_TrainerTips2::
# 77 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_MovesLimitedByPP, MSGBOX_SIGN
	end


ViridianCity_EventScript_GymSign::
# 82 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymSign, MSGBOX_SIGN
	end


ViridianCity_EventScript_GymDoor::
# 87 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymDoorsAreLocked, MSGBOX_SIGN
	end


ViridianCity_EventScript_Boy::
# 92 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_CanCarryMonsAnywhere, MSGBOX_NPC
	end


ViridianCity_EventScript_OldMan::
# 98 "data/maps/ViridianCity/scripts.pory"
	lock
# 99 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 100 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1, ViridianCity_EventScript_OldManGymLeaderReturned
# 101 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymClosedWonderWhoLeaderIs
# 102 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 103 "data/maps/ViridianCity/scripts.pory"
	applymovement 3, Common_Movement_FaceOriginalDirection
# 104 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 105 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_OldManGymLeaderReturned::
# 110 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ViridiansGymLeaderReturned
# 111 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_TutorialOldMan::
# 116 "data/maps/ViridianCity/scripts.pory"
	lock
# 117 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 118 "data/maps/ViridianCity/scripts.pory"
	goto_if_set FLAG_KANTO_BADGE01_GET, ViridianCity_EventScript_AskIfTeachyTVHelpful
# 119 "data/maps/ViridianCity/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2, ViridianCity_EventScript_TutorialCompleted
# 120 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1, ViridianCity_EventScript_TutorialStart
# 121 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_TutorialNotReady
	end


ViridianCity_EventScript_AskIfTeachyTVHelpful::
# 126 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_HowsTeachyTVHelping, MSGBOX_YESNO
# 127 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_EventScript_TeachyTVNotHelpful
# 128 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_MyGrandsonOnTheShow
# 129 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_TeachyTVNotHelpful::
# 134 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_TooBusyForTeachyTV
# 135 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_TutorialCompleted::
# 140 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_WeakenMonsFirstToCatch
# 141 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_TutorialStart::
# 146 "data/maps/ViridianCity/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 147 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_TutorialNotReady::
# 152 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ThisIsPrivateProperty
# 153 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 154 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_Youngster::
# 159 "data/maps/ViridianCity/scripts.pory"
	lock
# 160 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 161 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_WantToKnowAboutCaterpillarMons, MSGBOX_YESNO
# 162 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, ViridianCity_EventScript_YoungsterExplainCaterpillars
# 163 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_EventScript_YoungsterDeclineExplanation
	end


ViridianCity_EventScript_YoungsterExplainCaterpillars::
# 168 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ExplainCaterpieWeedle
# 169 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_YoungsterDeclineExplanation::
# 174 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_OhOkayThen
# 175 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_Woman::
# 180 "data/maps/ViridianCity/scripts.pory"
	lock
# 181 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 182 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_WomanRoadBlocked
# 183 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GoShoppingInPewterOccasionally
# 184 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_WomanRoadBlocked::
# 189 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GrandpaHasntHadCoffeeYet
# 190 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 191 "data/maps/ViridianCity/scripts.pory"
	applymovement 5, Common_Movement_FaceOriginalDirection
# 192 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 193 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_DreamEaterTutor::
# 198 "data/maps/ViridianCity/scripts.pory"
	goto EventScript_DreamEaterTutor
	end


ViridianCity_EventScript_RoadBlocked::
# 203 "data/maps/ViridianCity/scripts.pory"
	lockall
# 204 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ThisIsPrivateProperty
# 205 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 206 "data/maps/ViridianCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ViridianCity_Movement_WalkDown
# 207 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 208 "data/maps/ViridianCity/scripts.pory"
	releaseall
	end


ViridianCity_Movement_WalkDown::
# 213 "data/maps/ViridianCity/scripts.pory"
	walk_down
# 214 "data/maps/ViridianCity/scripts.pory"
	step_end
	return


ViridianCity_EventScript_TutorialTriggerLeft::
# 218 "data/maps/ViridianCity/scripts.pory"
	lockall
# 219 "data/maps/ViridianCity/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterLeft
# 220 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 221 "data/maps/ViridianCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 222 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 223 "data/maps/ViridianCity/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 224 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_TutorialTriggerRight::
# 229 "data/maps/ViridianCity/scripts.pory"
	lockall
# 230 "data/maps/ViridianCity/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterRight
# 231 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 232 "data/maps/ViridianCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 233 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 234 "data/maps/ViridianCity/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 235 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_DoTutorialBattle::
# 240 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ShowYouHowToCatchMons
# 241 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 243 "data/maps/ViridianCity/scripts.pory"
	special SavePlayerParty
# 244 "data/maps/ViridianCity/scripts.pory"
	special LoadWallyZigzagoon
# 245 "data/maps/ViridianCity/scripts.pory"
	special StartWallyTutorialBattle
# 246 "data/maps/ViridianCity/scripts.pory"
	special LoadPlayerParty
# 247 "data/maps/ViridianCity/scripts.pory"
	waitstate
# 248 "data/maps/ViridianCity/scripts.pory"
	lock
# 249 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 250 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
# 251 "data/maps/ViridianCity/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2
# 252 "data/maps/ViridianCity/scripts.pory"
	giveitem ITEM_TEACHY_TV
# 253 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_WatchThatToLearnBasics
	return


ViridianCity_Text_CanCarryMonsAnywhere::
# 257 "data/maps/ViridianCity/scripts.pory"
	.string "Those POKé BALLS at your waist!\n"
	.string "You have POKéMON, don't you?\p"
	.string "It's great that you can carry and\n"
	.string "use POKéMON anytime, anywhere.$"

ViridianCity_Text_GymClosedWonderWhoLeaderIs::
# 264 "data/maps/ViridianCity/scripts.pory"
	.string "This POKéMON GYM is always closed.\p"
	.string "I wonder who the LEADER is?$"

ViridianCity_Text_ViridiansGymLeaderReturned::
# 269 "data/maps/ViridianCity/scripts.pory"
	.string "VIRIDIAN GYM's LEADER returned!$"

ViridianCity_Text_WantToKnowAboutCaterpillarMons::
# 273 "data/maps/ViridianCity/scripts.pory"
	.string "You want to know about the two\n"
	.string "kinds of caterpillar POKéMON?$"

ViridianCity_Text_OhOkayThen::
# 278 "data/maps/ViridianCity/scripts.pory"
	.string "Oh, okay then!$"

ViridianCity_Text_ExplainCaterpieWeedle::
# 282 "data/maps/ViridianCity/scripts.pory"
	.string "CATERPIE has no poison,\n"
	.string "but WEEDLE does.\p"
	.string "Watch that your POKéMON aren't\n"
	.string "stabbed by WEEDLE's POISON STING.$"

ViridianCity_Text_GrandpaHasntHadCoffeeYet::
# 289 "data/maps/ViridianCity/scripts.pory"
	.string "Oh, Grandpa!\n"
	.string "Don't be so mean!\p"
	.string "I'm so sorry.\n"
	.string "He hasn't had his coffee yet.$"

ViridianCity_Text_GoShoppingInPewterOccasionally::
# 296 "data/maps/ViridianCity/scripts.pory"
	.string "I go shopping in PEWTER CITY\n"
	.string "occasionally.\p"
	.string "I have to take the winding trail in\n"
	.string "VIRIDIAN FOREST when I go.$"

ViridianCity_Text_ThisIsPrivateProperty::
# 303 "data/maps/ViridianCity/scripts.pory"
	.string "I absolutely forbid you from\n"
	.string "going through here!\p"
	.string "This is private property!$"

ViridianCity_Text_ShowYouHowToCatchMons::
# 309 "data/maps/ViridianCity/scripts.pory"
	.string "Well, now, I've had my coffee, and\n"
	.string "that's what I need to get going!\p"
	.string "Hm?\n"
	.string "What is that red box you have?\p"
	.string "Ah, so you're working on your\n"
	.string "POKéDEX.\p"
	.string "Then let me give you a word of\n"
	.string "advice.\p"
	.string "Whenever you catch a POKéMON,\n"
	.string "the POKéDEX automatically updates\l"
	.string "its data.\p"
	.string "…You don't know how to catch\n"
	.string "a POKéMON?\p"
	.string "I suppose I had better show you\n"
	.string "then!$"

ViridianCity_Text_ThatWasEducationalTakeThis::
# 327 "data/maps/ViridianCity/scripts.pory"
	.string "There! Now tell me, that was\n"
	.string "educational, was it not?\p"
	.string "And here, take this, too.$"

ViridianCity_Text_WatchThatToLearnBasics::
# 333 "data/maps/ViridianCity/scripts.pory"
	.string "If there's something you don't\n"
	.string "understand, watch that.\p"
	.string "It will teach you about the basics\n"
	.string "of being a POKéMON TRAINER.$"

ViridianCity_Text_WeakenMonsFirstToCatch::
# 340 "data/maps/ViridianCity/scripts.pory"
	.string "Well, now, I've had my coffee, and\n"
	.string "that's what I need to get going!\p"
	.string "But I made it too strong.\n"
	.string "It gave me a headache…\p"
	.string "Incidentally, are you filling your\n"
	.string "POKéDEX?\p"
	.string "At first, focus on weakening the\n"
	.string "POKéMON before trying to catch it.$"

ViridianCity_Text_HowsTeachyTVHelping::
# 351 "data/maps/ViridianCity/scripts.pory"
	.string "Well, now, I've had my coffee, and\n"
	.string "that's what I need to get going!\p"
	.string "But I made it too strong.\n"
	.string "It gave me a headache…\p"
	.string "Incidentally, is my old TEACHY TV\n"
	.string "helping you?$"

ViridianCity_Text_MyGrandsonOnTheShow::
# 360 "data/maps/ViridianCity/scripts.pory"
	.string "Wahaha!\n"
	.string "It's my grandson on the show!\p"
	.string "Since he's the one doing the\n"
	.string "teaching, you're bound to learn.$"

ViridianCity_Text_TooBusyForTeachyTV::
# 367 "data/maps/ViridianCity/scripts.pory"
	.string "Hm… You're too busy to not even\n"
	.string "have the time for TEACHY TV…\p"
	.string "Time is money, and neither should\n"
	.string "be ill spent…$"

ViridianCity_Text_CitySign::
# 374 "data/maps/ViridianCity/scripts.pory"
	.string "VIRIDIAN CITY \n"
	.string "The Eternally Green Paradise$"

ViridianCity_Text_CatchMonsForEasierBattles::
# 379 "data/maps/ViridianCity/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "Catch POKéMON and expand your\n"
	.string "collection.\p"
	.string "The more you have, the easier it\n"
	.string "is to battle.$"

ViridianCity_Text_MovesLimitedByPP::
# 387 "data/maps/ViridianCity/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "The battle moves of POKéMON are\n"
	.string "limited by their POWER POINTS, PP.\p"
	.string "To replenish PP, rest your tired\n"
	.string "POKéMON at a POKéMON CENTER.$"

ViridianCity_Text_GymSign::
# 395 "data/maps/ViridianCity/scripts.pory"
	.string "VIRIDIAN CITY POKéMON GYM$"

ViridianCity_Text_GymDoorsAreLocked::
# 399 "data/maps/ViridianCity/scripts.pory"
	.string "VIRIDIAN GYM's doors are locked…$"
