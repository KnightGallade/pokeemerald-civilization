# 1 "data/maps/LavenderTown/scripts.pory"

# 2 "data/maps/LavenderTown/scripts.pory"
LavenderTown_MapScripts::
# 3 "data/maps/LavenderTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_OnTransition
# 4 "data/maps/LavenderTown/scripts.pory"
	.byte 0
# 5 "data/maps/LavenderTown/scripts.pory"

# 6 "data/maps/LavenderTown/scripts.pory"
LavenderTown_OnTransition:
# 7 "data/maps/LavenderTown/scripts.pory"
	setflag FLAG_VISITED_LAVENDER_TOWN
# 8 "data/maps/LavenderTown/scripts.pory"
	end
