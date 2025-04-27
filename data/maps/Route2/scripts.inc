Route2_MapScripts::
	.byte 0


Route2_EventScript_RouteSign::
# 4 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_RouteSign, MSGBOX_SIGN
	return


Route2_EventScript_DiglettsCaveSign::
# 8 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_DiglettsCave, MSGBOX_SIGN
	return


Route2_Text_RouteSign::
# 11 "data/maps/Route2/scripts.pory"
	.string "ROUTE 2\n"
	.string "VIRIDIAN CITY - PEWTER CITY$"

Route2_Text_DiglettsCave::
# 16 "data/maps/Route2/scripts.pory"
	.string "DIGLETT'S CAVE$"
