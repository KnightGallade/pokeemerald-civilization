# 1 "data/maps/VermilionCity/scripts.pory"

# 2 "data/maps/VermilionCity/scripts.pory"
VermilionCity_MapScripts::
# 3 "data/maps/VermilionCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_OnTransition
# 4 "data/maps/VermilionCity/scripts.pory"
	.byte 0
# 5 "data/maps/VermilionCity/scripts.pory"

# 6 "data/maps/VermilionCity/scripts.pory"
VermilionCity_OnTransition:
# 7 "data/maps/VermilionCity/scripts.pory"
	setflag FLAG_VISITED_VERMILION_CITY
# 8 "data/maps/VermilionCity/scripts.pory"
	end
