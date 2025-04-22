Route10_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route10_OnTransition
	.byte 0

Route10_OnTransition:
	setflag FLAG_VISITED_ROUTE10_POKEMON_CENTER
	end
