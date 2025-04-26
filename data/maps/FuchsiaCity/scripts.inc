# 1 "data/maps/FuchsiaCity/scripts.pory"

# 2 "data/maps/FuchsiaCity/scripts.pory"
FuchsiaCity_MapScripts::
# 3 "data/maps/FuchsiaCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_OnTransition
# 4 "data/maps/FuchsiaCity/scripts.pory"
	.byte 0
# 5 "data/maps/FuchsiaCity/scripts.pory"

# 6 "data/maps/FuchsiaCity/scripts.pory"
FuchsiaCity_OnTransition:
# 7 "data/maps/FuchsiaCity/scripts.pory"
	setflag FLAG_VISITED_FUCHSIA_CITY
# 8 "data/maps/FuchsiaCity/scripts.pory"
	end
