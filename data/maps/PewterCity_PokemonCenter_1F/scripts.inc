PewterCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


PewterCity_PokemonCenter_1F_OnTransition::
# 7 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PEWTER_CITY
	end


PewterCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_PEWTER_NURSE
# 13 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
	end


PewterCity_PokemonCenter_1F_EventScript_Chansey::
# 21 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_PEWTER_CHANSEY
# 22 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterChansey
# 23 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 24 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 25 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
	end


PewterCity_PokemonCenter_1F_EventScript_Gentleman::
# 30 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TeamRocketMtMoonImOnPhone, MSGBOX_NPC
	end


PewterCity_PokemonCenter_1F_EventScript_Jigglypuff::
# 35 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	lock
# 36 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 37 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	fadeoutbgm 0
# 38 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, 0
# 39 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	message PewterCity_PokemonCenter_1F_Text_Jigglypuff
# 40 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 41 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	delay 455
# 42 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	playbgm MUS_RG_POKE_CENTER, 1
# 43 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
	end


PewterCity_PokemonCenter_1F_EventScript_Youngster::
# 48 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_WhenJiggylypuffSingsMonsGetDrowsy, MSGBOX_NPC
	end


PewterCity_PokemonCenter_1F_EventScript_GBAKid1::
# 53 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	lock
# 54 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TradingMyClefairyForPikachu
# 55 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
	end


PewterCity_PokemonCenter_1F_EventScript_GBAKid2::
# 60 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TradingPikachuWithKid, MSGBOX_NPC
	end


PewterCity_PokemonCenter_1F_Text_TeamRocketMtMoonImOnPhone::
# 64 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	.string "What!?\p"
	.string "TEAM ROCKET is at MT. MOON?\n"
	.string "Huh?\p"
	.string "I'm on the phone!\n"
	.string "Scram!$"

PewterCity_PokemonCenter_1F_Text_Jigglypuff::
# 72 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	.string "JIGGLYPUFF: Puu pupuu!$"

PewterCity_PokemonCenter_1F_Text_WhenJiggylypuffSingsMonsGetDrowsy::
# 76 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	.string "Yawn!\p"
	.string "When JIGGLYPUFF sings, POKéMON get\n"
	.string "drowsy…\p"
	.string "…Me, too…\n"
	.string "Snore…$"

PewterCity_PokemonCenter_1F_Text_TradingMyClefairyForPikachu::
# 84 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	.string "I really want a PIKACHU, so I'm\n"
	.string "trading my CLEFAIRY for one.$"

PewterCity_PokemonCenter_1F_Text_TradingPikachuWithKid::
# 89 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	.string "I'm trading POKéMON with that kid\n"
	.string "there.\p"
	.string "I had two PIKACHU, so I figured\n"
	.string "I might as well trade one.$"
