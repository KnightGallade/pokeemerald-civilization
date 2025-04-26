# 1 "data/maps/CinnabarIsland/scripts.pory"

# 2 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_MapScripts::
# 3 "data/maps/CinnabarIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_OnTransition
# 4 "data/maps/CinnabarIsland/scripts.pory"
	.byte 0
# 5 "data/maps/CinnabarIsland/scripts.pory"

# 6 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_OnTransition:
# 7 "data/maps/CinnabarIsland/scripts.pory"
	setflag FLAG_VISITED_CINNABAR_ISLAND
# 8 "data/maps/CinnabarIsland/scripts.pory"
	end
