# 1 "data/maps/CeladonCity/scripts.pory"

# 2 "data/maps/CeladonCity/scripts.pory"
CeladonCity_MapScripts::
# 3 "data/maps/CeladonCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_OnTransition
# 4 "data/maps/CeladonCity/scripts.pory"
	.byte 0
# 5 "data/maps/CeladonCity/scripts.pory"

# 6 "data/maps/CeladonCity/scripts.pory"
CeladonCity_OnTransition:
# 7 "data/maps/CeladonCity/scripts.pory"
	setflag FLAG_VISITED_CELADON_CITY
# 8 "data/maps/CeladonCity/scripts.pory"
	end
