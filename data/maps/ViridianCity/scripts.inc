# 1 "data/maps/ViridianCity/scripts.pory"

# 2 "data/maps/ViridianCity/scripts.pory"
ViridianCity_MapScripts::
# 3 "data/maps/ViridianCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_OnTransition
# 4 "data/maps/ViridianCity/scripts.pory"
	.byte 0
# 5 "data/maps/ViridianCity/scripts.pory"

# 6 "data/maps/ViridianCity/scripts.pory"
ViridianCity_OnTransition:
# 7 "data/maps/ViridianCity/scripts.pory"
	setflag FLAG_VISITED_VIRIDIAN_CITY
# 8 "data/maps/ViridianCity/scripts.pory"
	end
