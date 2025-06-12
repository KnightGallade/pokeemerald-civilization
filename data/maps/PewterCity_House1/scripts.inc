PewterCity_House1_MapScripts::
	.byte 0


PewterCity_House1_EventScript_BaldingMan::
# 4 "data/maps/PewterCity_House1/scripts.pory"
	msgbox PewterCity_House1_Text_TradeMonsAreFinicky, MSGBOX_NPC
	end


PewterCity_House1_EventScript_LittleBoy::
# 9 "data/maps/PewterCity_House1/scripts.pory"
	lock
# 10 "data/maps/PewterCity_House1/scripts.pory"
	msgbox PewterCity_House1_Text_NidoranSit
# 11 "data/maps/PewterCity_House1/scripts.pory"
	call PewterCity_House1_EventScript_DoNidoranCry
# 12 "data/maps/PewterCity_House1/scripts.pory"
	release
	end


PewterCity_House1_EventScript_Nidoran::
# 17 "data/maps/PewterCity_House1/scripts.pory"
	lock
# 18 "data/maps/PewterCity_House1/scripts.pory"
	faceplayer
# 19 "data/maps/PewterCity_House1/scripts.pory"
	call PewterCity_House1_EventScript_DoNidoranCry
# 20 "data/maps/PewterCity_House1/scripts.pory"
	applymovement LOCALID_PEWTER_HOUSE1_NIDORAN, Common_Movement_FaceOriginalDirection
# 21 "data/maps/PewterCity_House1/scripts.pory"
	waitmovement 0
# 22 "data/maps/PewterCity_House1/scripts.pory"
	release
	end


PewterCity_House1_EventScript_DoNidoranCry::
# 27 "data/maps/PewterCity_House1/scripts.pory"
	waitse
# 28 "data/maps/PewterCity_House1/scripts.pory"
	playmoncry SPECIES_NIDORAN_M, CRY_MODE_NORMAL
# 29 "data/maps/PewterCity_House1/scripts.pory"
	msgbox PewterCity_House1_Text_Nidoran
# 30 "data/maps/PewterCity_House1/scripts.pory"
	waitmoncry
	return


PewterCity_House1_Text_Nidoran::
# 34 "data/maps/PewterCity_House1/scripts.pory"
	.string "NIDORAN♂: Bowbow!$"

PewterCity_House1_Text_NidoranSit::
# 38 "data/maps/PewterCity_House1/scripts.pory"
	.string "NIDORAN, sit!$"

PewterCity_House1_Text_TradeMonsAreFinicky::
# 42 "data/maps/PewterCity_House1/scripts.pory"
	.string "Our POKéMON's an outsider, so it's\n"
	.string "finicky and hard to handle.\p"
	.string "An outsider is a POKéMON that you\n"
	.string "get in a trade.\p"
	.string "It grows fast, but it may ignore an\n"
	.string "unskilled TRAINER in battle.\p"
	.string "If only we had some BADGES…$"
