# 1 "data/maps/CeruleanCity/scripts.pory"

# 2 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_MapScripts::
# 3 "data/maps/CeruleanCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_OnTransition
# 4 "data/maps/CeruleanCity/scripts.pory"
	.byte 0
# 5 "data/maps/CeruleanCity/scripts.pory"

# 6 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_OnTransition:
# 7 "data/maps/CeruleanCity/scripts.pory"
	setflag FLAG_VISITED_CERULEAN_CITY
# 8 "data/maps/CeruleanCity/scripts.pory"
	end
