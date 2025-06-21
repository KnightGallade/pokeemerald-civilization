NavelRock_Harbor_MapScripts::
# 6 "data/maps/NavelRock_Harbor/scripts.pory"
	.byte 0
# 7 "data/maps/NavelRock_Harbor/scripts.pory"

# 8 "data/maps/NavelRock_Harbor/scripts.pory"
NavelRock_Harbor_EventScript_Sailor::
# 9 "data/maps/NavelRock_Harbor/scripts.pory"
	lock
# 10 "data/maps/NavelRock_Harbor/scripts.pory"
	faceplayer
# 11 "data/maps/NavelRock_Harbor/scripts.pory"
	msgbox NavelRock_Harbor_Text_SailorReturn, MSGBOX_YESNO
# 12 "data/maps/NavelRock_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, NavelRock_Harbor_EventScript_AsYouLike
# 13 "data/maps/NavelRock_Harbor/scripts.pory"
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
# 14 "data/maps/NavelRock_Harbor/scripts.pory"
	closemessage
# 15 "data/maps/NavelRock_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 16 "data/maps/NavelRock_Harbor/scripts.pory"
	waitmovement 0
# 17 "data/maps/NavelRock_Harbor/scripts.pory"
	delay 30
	hideobjectat LOCALID_NAVEL_ROCK_SAILOR, MAP_NAVEL_ROCK_HARBOR
	setvar VAR_0x8004, LOCALID_NAVEL_ROCK_SS_TIDAL
	call Common_EventScript_FerryDepartIsland
# 21 "data/maps/NavelRock_Harbor/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 22 "data/maps/NavelRock_Harbor/scripts.pory"
	waitstate
# 23 "data/maps/NavelRock_Harbor/scripts.pory"
	release
# 24 "data/maps/NavelRock_Harbor/scripts.pory"
	end
# 25 "data/maps/NavelRock_Harbor/scripts.pory"

# 26 "data/maps/NavelRock_Harbor/scripts.pory"
NavelRock_Harbor_EventScript_AsYouLike::
# 27 "data/maps/NavelRock_Harbor/scripts.pory"
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
# 28 "data/maps/NavelRock_Harbor/scripts.pory"
	release
# 29 "data/maps/NavelRock_Harbor/scripts.pory"
	end
