Route2_House_MapScripts::
	.byte 0


Route2_House_EventScript_Scientist::
# 4 "data/maps/Route2_House/scripts.pory"
	msgbox Route2_House_Text_FaintedMonsCanUseFieldMoves, MSGBOX_NPC
	end


Route2_House_EventScript_Reyley::
# 9 "data/maps/Route2_House/scripts.pory"
	lock
# 10 "data/maps/Route2_House/scripts.pory"
	faceplayer
# 11 "data/maps/Route2_House/scripts.pory"
	goto_if_set FLAG_DID_MIMIEN_TRADE, Route2_House_EventScript_AlreadyTraded
# 12 "data/maps/Route2_House/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MR_MIME
# 13 "data/maps/Route2_House/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 14 "data/maps/Route2_House/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 15 "data/maps/Route2_House/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 16 "data/maps/Route2_House/scripts.pory"
	msgbox Trade_Text_LookingForMonWannaTradeForMon, MSGBOX_YESNO
# 17 "data/maps/Route2_House/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route2_House_EventScript_DeclineTrade
# 18 "data/maps/Route2_House/scripts.pory"
	special ChoosePartyMon
# 19 "data/maps/Route2_House/scripts.pory"
	waitstate
# 20 "data/maps/Route2_House/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 21 "data/maps/Route2_House/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Route2_House_EventScript_DeclineTrade
# 22 "data/maps/Route2_House/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 23 "data/maps/Route2_House/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 24 "data/maps/Route2_House/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 25 "data/maps/Route2_House/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, Route2_House_EventScript_NotRequestedMon
# 26 "data/maps/Route2_House/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 27 "data/maps/Route2_House/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 28 "data/maps/Route2_House/scripts.pory"
	special CreateInGameTradePokemon
# 29 "data/maps/Route2_House/scripts.pory"
	special DoInGameTradeScene
# 30 "data/maps/Route2_House/scripts.pory"
	waitstate
# 31 "data/maps/Route2_House/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 32 "data/maps/Route2_House/scripts.pory"
	msgbox Trade_Text_HeyThanks, MSGBOX_DEFAULT
# 33 "data/maps/Route2_House/scripts.pory"
	setflag FLAG_DID_MIMIEN_TRADE
# 34 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_EventScript_DeclineTrade::
# 39 "data/maps/Route2_House/scripts.pory"
	msgbox Trade_Text_AwwOhWell
# 40 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_EventScript_NotRequestedMon::
# 45 "data/maps/Route2_House/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 46 "data/maps/Route2_House/scripts.pory"
	msgbox Trade_Text_WhatThatsNoMon
# 47 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_EventScript_AlreadyTraded::
# 52 "data/maps/Route2_House/scripts.pory"
	msgbox Trade_Text_IsntMyOldMonGreat
# 53 "data/maps/Route2_House/scripts.pory"
	release
	end


Route2_House_Text_FaintedMonsCanUseFieldMoves::
# 57 "data/maps/Route2_House/scripts.pory"
	.string "A fainted POKéMON just has no\n"
	.string "energy left to battle.\p"
	.string "It can still use moves like CUT\n"
	.string "outside of battle.$"
