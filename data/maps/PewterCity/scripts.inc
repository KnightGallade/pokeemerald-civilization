# 1 "data/maps/PewterCity/scripts.pory"

# 2 "data/maps/PewterCity/scripts.pory"
PewterCity_MapScripts::
# 3 "data/maps/PewterCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_OnTransition
# 4 "data/maps/PewterCity/scripts.pory"
	.byte 0
# 5 "data/maps/PewterCity/scripts.pory"

# 6 "data/maps/PewterCity/scripts.pory"
PewterCity_OnTransition:
# 7 "data/maps/PewterCity/scripts.pory"
	setflag FLAG_VISITED_PEWTER_CITY
# 8 "data/maps/PewterCity/scripts.pory"
	end
