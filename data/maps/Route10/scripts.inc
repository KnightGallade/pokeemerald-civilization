# 1 "data/maps/Route10/scripts.pory"

# 2 "data/maps/Route10/scripts.pory"
Route10_MapScripts::
# 3 "data/maps/Route10/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route10_OnTransition
# 4 "data/maps/Route10/scripts.pory"
	.byte 0
# 5 "data/maps/Route10/scripts.pory"

# 6 "data/maps/Route10/scripts.pory"
Route10_OnTransition:
# 7 "data/maps/Route10/scripts.pory"
	setflag FLAG_VISITED_ROUTE10_POKEMON_CENTER
# 8 "data/maps/Route10/scripts.pory"
	end
