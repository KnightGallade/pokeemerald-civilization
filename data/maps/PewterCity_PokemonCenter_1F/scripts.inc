PewterCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


PewterCity_PokemonCenter_1F_OnTransition::
# 10 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PEWTER_CITY
	end


PewterCity_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 3
# 16 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
	end


PewterCity_PokemonCenter_1F_EventScript_Chansey::
# 24 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 8
# 25 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterChansey
# 26 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 27 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 28 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
	end


PewterCity_PokemonCenter_1F_EventScript_Gentleman::
# 33 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TeamRocketMtMoonImOnPhone, MSGBOX_NPC
	end


PewterCity_PokemonCenter_1F_EventScript_Jigglypuff::
# 38 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	lock
# 39 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 40 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	fadeoutbgm 0
# 41 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, 0
# 42 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	message PewterCity_PokemonCenter_1F_Text_Jigglypuff
# 43 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 44 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	delay 455
# 45 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	playbgm MUS_RG_POKE_CENTER, 1
# 46 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
	end


PewterCity_PokemonCenter_1F_EventScript_Youngster::
# 51 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_WhenJiggylypuffSingsMonsGetDrowsy, MSGBOX_NPC
	end


PewterCity_PokemonCenter_1F_EventScript_GBAKid1::
# 56 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	lock
# 57 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TradingMyClefairyForPikachu
# 58 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
	end


PewterCity_PokemonCenter_1F_EventScript_GBAKid2::
# 63 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TradingPikachuWithKid, MSGBOX_NPC
	end


PewterCity_PokemonCenter_1F_Text_TeamRocketMtMoonImOnPhone::
# 67 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	.string "What!?\p"
	.string "TEAM ROCKET is at MT. MOON?\n"
	.string "Huh?\p"
	.string "I'm on the phone!\n"
	.string "Scram!$"

PewterCity_PokemonCenter_1F_Text_Jigglypuff::
# 75 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	.string "JIGGLYPUFF: Puu pupuu!$"

PewterCity_PokemonCenter_1F_Text_WhenJiggylypuffSingsMonsGetDrowsy::
# 79 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	.string "Yawn!\p"
	.string "When JIGGLYPUFF sings, POKéMON get\n"
	.string "drowsy…\p"
	.string "…Me, too…\n"
	.string "Snore…$"

PewterCity_PokemonCenter_1F_Text_TradingMyClefairyForPikachu::
# 87 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	.string "I really want a PIKACHU, so I'm\n"
	.string "trading my CLEFAIRY for one.$"

PewterCity_PokemonCenter_1F_Text_TradingPikachuWithKid::
# 92 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	.string "I'm trading POKéMON with that kid\n"
	.string "there.\p"
	.string "I had two PIKACHU, so I figured\n"
	.string "I might as well trade one.$"
