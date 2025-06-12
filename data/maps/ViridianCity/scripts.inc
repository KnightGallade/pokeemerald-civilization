ViridianCity_MapScripts::
# 2 "data/maps/ViridianCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_OnTransition
	.byte 0


ViridianCity_OnTransition::
# 6 "data/maps/ViridianCity/scripts.pory"
	setflag FLAG_VISITED_VIRIDIAN_CITY
# 7 "data/maps/ViridianCity/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_SetOldManBlockingRoad
# 8 "data/maps/ViridianCity/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1, ViridianCity_EventScript_SetOldManStandingByRoad
# 9 "data/maps/ViridianCity/scripts.pory"
	call_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2, ViridianCity_EventScript_SetOldManNormal
# 10 "data/maps/ViridianCity/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 0, ViridianCity_EventScript_TryUnlockGym
	end


ViridianCity_EventScript_SetOldManNormal::
# 15 "data/maps/ViridianCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_FRLG_OLD_MAN_1
	return


ViridianCity_EventScript_SetOldManStandingByRoad::
# 20 "data/maps/ViridianCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_FRLG_OLD_MAN_1
# 21 "data/maps/ViridianCity/scripts.pory"
	setobjectxyperm LOCALID_VIRIDIAN_TUTORIAL_MAN, 21, 8
# 22 "data/maps/ViridianCity/scripts.pory"
	setobjectmovementtype LOCALID_VIRIDIAN_TUTORIAL_MAN, MOVEMENT_TYPE_LOOK_AROUND
	return


ViridianCity_EventScript_SetOldManBlockingRoad::
# 27 "data/maps/ViridianCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_FRLG_OLD_MAN_LYING_DOWN
# 28 "data/maps/ViridianCity/scripts.pory"
	setobjectxyperm LOCALID_VIRIDIAN_TUTORIAL_MAN, 21, 11
# 29 "data/maps/ViridianCity/scripts.pory"
	setobjectmovementtype LOCALID_VIRIDIAN_TUTORIAL_MAN, MOVEMENT_TYPE_FACE_DOWN
	return


ViridianCity_EventScript_TryUnlockGym::
# 34 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_KANTO_BADGE02_GET, Common_EventScript_NopReturn
# 35 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_KANTO_BADGE03_GET, Common_EventScript_NopReturn
# 36 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_KANTO_BADGE04_GET, Common_EventScript_NopReturn
# 37 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_KANTO_BADGE05_GET, Common_EventScript_NopReturn
# 38 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_KANTO_BADGE06_GET, Common_EventScript_NopReturn
# 39 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_KANTO_BADGE07_GET, Common_EventScript_NopReturn
# 40 "data/maps/ViridianCity/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1
	return


ViridianCity_EventScript_GymDoorLocked::
# 45 "data/maps/ViridianCity/scripts.pory"
	lockall
# 46 "data/maps/ViridianCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 47 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 48 "data/maps/ViridianCity/scripts.pory"
	delay 20
# 49 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymDoorsAreLocked
# 50 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 51 "data/maps/ViridianCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ViridianCity_Movement_JumpDownLedge
# 52 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 53 "data/maps/ViridianCity/scripts.pory"
	releaseall
	end


ViridianCity_Movement_JumpDownLedge::
# 58 "data/maps/ViridianCity/scripts.pory"
	jump_2_down
# 59 "data/maps/ViridianCity/scripts.pory"
	step_end
	return


ViridianCity_EventScript_CitySign::
# 63 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_CitySign, MSGBOX_SIGN
	end


ViridianCity_EventScript_TrainerTips1::
# 68 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_CatchMonsForEasierBattles, MSGBOX_SIGN
	end


ViridianCity_EventScript_TrainerTips2::
# 73 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_MovesLimitedByPP, MSGBOX_SIGN
	end


ViridianCity_EventScript_GymSign::
# 78 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymSign, MSGBOX_SIGN
	end


ViridianCity_EventScript_GymDoor::
# 83 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymDoorsAreLocked, MSGBOX_SIGN
	end


ViridianCity_EventScript_Boy::
# 88 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_CanCarryMonsAnywhere, MSGBOX_NPC
	end


ViridianCity_EventScript_OldMan::
# 94 "data/maps/ViridianCity/scripts.pory"
	lock
# 95 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 96 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1, ViridianCity_EventScript_OldManGymLeaderReturned
# 97 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymClosedWonderWhoLeaderIs
# 98 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 99 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_VIRIDIAN_OLD_MAN, Common_Movement_FaceOriginalDirection
# 100 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 101 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_OldManGymLeaderReturned::
# 106 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ViridiansGymLeaderReturned
# 107 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_TutorialOldMan::
# 112 "data/maps/ViridianCity/scripts.pory"
	lock
# 113 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 114 "data/maps/ViridianCity/scripts.pory"
	goto_if_set FLAG_KANTO_BADGE01_GET, ViridianCity_EventScript_AskIfTeachyTVHelpful
# 115 "data/maps/ViridianCity/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2, ViridianCity_EventScript_TutorialCompleted
# 116 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1, ViridianCity_EventScript_TutorialStart
# 117 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_TutorialNotReady
	end


ViridianCity_EventScript_AskIfTeachyTVHelpful::
# 122 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_HowsTeachyTVHelping, MSGBOX_YESNO
# 123 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_EventScript_TeachyTVNotHelpful
# 124 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_MyGrandsonOnTheShow
# 125 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_TeachyTVNotHelpful::
# 130 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_TooBusyForTeachyTV
# 131 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_TutorialCompleted::
# 136 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_WeakenMonsFirstToCatch
# 137 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_TutorialStart::
# 142 "data/maps/ViridianCity/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 143 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_TutorialNotReady::
# 148 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ThisIsPrivateProperty
# 149 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 150 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_Youngster::
# 155 "data/maps/ViridianCity/scripts.pory"
	lock
# 156 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 157 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_WantToKnowAboutCaterpillarMons, MSGBOX_YESNO
# 158 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, ViridianCity_EventScript_YoungsterExplainCaterpillars
# 159 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_EventScript_YoungsterDeclineExplanation
	end


ViridianCity_EventScript_YoungsterExplainCaterpillars::
# 164 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ExplainCaterpieWeedle
# 165 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_YoungsterDeclineExplanation::
# 170 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_OhOkayThen
# 171 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_Woman::
# 176 "data/maps/ViridianCity/scripts.pory"
	lock
# 177 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 178 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_WomanRoadBlocked
# 179 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GoShoppingInPewterOccasionally
# 180 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_WomanRoadBlocked::
# 185 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GrandpaHasntHadCoffeeYet
# 186 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 187 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_VIRIDIAN_WOMAN, Common_Movement_FaceOriginalDirection
# 188 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 189 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_DreamEaterTutor::
# 194 "data/maps/ViridianCity/scripts.pory"
	goto EventScript_DreamEaterTutor
	end


ViridianCity_EventScript_RoadBlocked::
# 199 "data/maps/ViridianCity/scripts.pory"
	lockall
# 200 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ThisIsPrivateProperty
# 201 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 202 "data/maps/ViridianCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ViridianCity_Movement_WalkDown
# 203 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 204 "data/maps/ViridianCity/scripts.pory"
	releaseall
	end


ViridianCity_Movement_WalkDown::
# 209 "data/maps/ViridianCity/scripts.pory"
	walk_down
# 210 "data/maps/ViridianCity/scripts.pory"
	step_end
	return


ViridianCity_EventScript_TutorialTriggerLeft::
# 214 "data/maps/ViridianCity/scripts.pory"
	lockall
# 215 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_VIRIDIAN_TUTORIAL_MAN, Common_Movement_WalkInPlaceFasterLeft
# 216 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 217 "data/maps/ViridianCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 218 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 219 "data/maps/ViridianCity/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 220 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_TutorialTriggerRight::
# 225 "data/maps/ViridianCity/scripts.pory"
	lockall
# 226 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_VIRIDIAN_TUTORIAL_MAN, Common_Movement_WalkInPlaceFasterRight
# 227 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 228 "data/maps/ViridianCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 229 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 230 "data/maps/ViridianCity/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 231 "data/maps/ViridianCity/scripts.pory"
	release
	end


ViridianCity_EventScript_DoTutorialBattle::
# 236 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ShowYouHowToCatchMons
# 237 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 239 "data/maps/ViridianCity/scripts.pory"
	special SavePlayerParty
# 240 "data/maps/ViridianCity/scripts.pory"
	special LoadWallyZigzagoon
# 241 "data/maps/ViridianCity/scripts.pory"
	special StartWallyTutorialBattle
# 242 "data/maps/ViridianCity/scripts.pory"
	special LoadPlayerParty
# 243 "data/maps/ViridianCity/scripts.pory"
	waitstate
# 244 "data/maps/ViridianCity/scripts.pory"
	lock
# 245 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 246 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
# 247 "data/maps/ViridianCity/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2
# 248 "data/maps/ViridianCity/scripts.pory"
	giveitem ITEM_TEACHY_TV
# 249 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_WatchThatToLearnBasics
	return


ViridianCity_Text_CanCarryMonsAnywhere::
# 253 "data/maps/ViridianCity/scripts.pory"
	.string "Those POKé BALLS at your waist!\n"
	.string "You have POKéMON, don't you?\p"
	.string "It's great that you can carry and\n"
	.string "use POKéMON anytime, anywhere.$"

ViridianCity_Text_GymClosedWonderWhoLeaderIs::
# 260 "data/maps/ViridianCity/scripts.pory"
	.string "This POKéMON GYM is always closed.\p"
	.string "I wonder who the LEADER is?$"

ViridianCity_Text_ViridiansGymLeaderReturned::
# 265 "data/maps/ViridianCity/scripts.pory"
	.string "VIRIDIAN GYM's LEADER returned!$"

ViridianCity_Text_WantToKnowAboutCaterpillarMons::
# 269 "data/maps/ViridianCity/scripts.pory"
	.string "You want to know about the two\n"
	.string "kinds of caterpillar POKéMON?$"

ViridianCity_Text_OhOkayThen::
# 274 "data/maps/ViridianCity/scripts.pory"
	.string "Oh, okay then!$"

ViridianCity_Text_ExplainCaterpieWeedle::
# 278 "data/maps/ViridianCity/scripts.pory"
	.string "CATERPIE has no poison,\n"
	.string "but WEEDLE does.\p"
	.string "Watch that your POKéMON aren't\n"
	.string "stabbed by WEEDLE's POISON STING.$"

ViridianCity_Text_GrandpaHasntHadCoffeeYet::
# 285 "data/maps/ViridianCity/scripts.pory"
	.string "Oh, Grandpa!\n"
	.string "Don't be so mean!\p"
	.string "I'm so sorry.\n"
	.string "He hasn't had his coffee yet.$"

ViridianCity_Text_GoShoppingInPewterOccasionally::
# 292 "data/maps/ViridianCity/scripts.pory"
	.string "I go shopping in PEWTER CITY\n"
	.string "occasionally.\p"
	.string "I have to take the winding trail in\n"
	.string "VIRIDIAN FOREST when I go.$"

ViridianCity_Text_ThisIsPrivateProperty::
# 299 "data/maps/ViridianCity/scripts.pory"
	.string "I absolutely forbid you from\n"
	.string "going through here!\p"
	.string "This is private property!$"

ViridianCity_Text_ShowYouHowToCatchMons::
# 305 "data/maps/ViridianCity/scripts.pory"
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
# 323 "data/maps/ViridianCity/scripts.pory"
	.string "There! Now tell me, that was\n"
	.string "educational, was it not?\p"
	.string "And here, take this, too.$"

ViridianCity_Text_WatchThatToLearnBasics::
# 329 "data/maps/ViridianCity/scripts.pory"
	.string "If there's something you don't\n"
	.string "understand, watch that.\p"
	.string "It will teach you about the basics\n"
	.string "of being a POKéMON TRAINER.$"

ViridianCity_Text_WeakenMonsFirstToCatch::
# 336 "data/maps/ViridianCity/scripts.pory"
	.string "Well, now, I've had my coffee, and\n"
	.string "that's what I need to get going!\p"
	.string "But I made it too strong.\n"
	.string "It gave me a headache…\p"
	.string "Incidentally, are you filling your\n"
	.string "POKéDEX?\p"
	.string "At first, focus on weakening the\n"
	.string "POKéMON before trying to catch it.$"

ViridianCity_Text_HowsTeachyTVHelping::
# 347 "data/maps/ViridianCity/scripts.pory"
	.string "Well, now, I've had my coffee, and\n"
	.string "that's what I need to get going!\p"
	.string "But I made it too strong.\n"
	.string "It gave me a headache…\p"
	.string "Incidentally, is my old TEACHY TV\n"
	.string "helping you?$"

ViridianCity_Text_MyGrandsonOnTheShow::
# 356 "data/maps/ViridianCity/scripts.pory"
	.string "Wahaha!\n"
	.string "It's my grandson on the show!\p"
	.string "Since he's the one doing the\n"
	.string "teaching, you're bound to learn.$"

ViridianCity_Text_TooBusyForTeachyTV::
# 363 "data/maps/ViridianCity/scripts.pory"
	.string "Hm… You're too busy to not even\n"
	.string "have the time for TEACHY TV…\p"
	.string "Time is money, and neither should\n"
	.string "be ill spent…$"

ViridianCity_Text_CitySign::
# 370 "data/maps/ViridianCity/scripts.pory"
	.string "VIRIDIAN CITY \n"
	.string "The Eternally Green Paradise$"

ViridianCity_Text_CatchMonsForEasierBattles::
# 375 "data/maps/ViridianCity/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "Catch POKéMON and expand your\n"
	.string "collection.\p"
	.string "The more you have, the easier it\n"
	.string "is to battle.$"

ViridianCity_Text_MovesLimitedByPP::
# 383 "data/maps/ViridianCity/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "The battle moves of POKéMON are\n"
	.string "limited by their POWER POINTS, PP.\p"
	.string "To replenish PP, rest your tired\n"
	.string "POKéMON at a POKéMON CENTER.$"

ViridianCity_Text_GymSign::
# 391 "data/maps/ViridianCity/scripts.pory"
	.string "VIRIDIAN CITY POKéMON GYM$"

ViridianCity_Text_GymDoorsAreLocked::
# 395 "data/maps/ViridianCity/scripts.pory"
	.string "VIRIDIAN GYM's doors are locked…$"
