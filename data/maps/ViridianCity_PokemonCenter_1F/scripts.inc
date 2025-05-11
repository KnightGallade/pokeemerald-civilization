ViridianCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


ViridianCity_PokemonCenter_1F_OnTransition::
# 10 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_VIRIDIAN_CITY
	end


ViridianCity_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 16 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_1F_EventScript_Chansey::
# 24 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 5
# 25 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterChansey
# 26 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 27 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 28 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_1F_EventScript_Boy::
# 33 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_PokeCenterInEveryTown, MSGBOX_NPC
	end


ViridianCity_PokemonCenter_1F_EventScript_Gentleman::
# 38 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_FeelFreeToUsePC, MSGBOX_NPC
	end


ViridianCity_PokemonCenter_1F_EventScript_Youngster::
# 43 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_PokeCentersHealMons, MSGBOX_NPC
	end


ViridianCity_PokemonCenter_1F_Text_FeelFreeToUsePC::
# 47 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "Please feel free to use that PC in\n"
	.string "the corner.\p"
	.string "The receptionist told me so.\n"
	.string "It's so kind of her!$"

ViridianCity_PokemonCenter_1F_Text_PokeCenterInEveryTown::
# 54 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "There's a POKéMON CENTER in every\n"
	.string "town ahead.\p"
	.string "They charge no money, so don't\n"
	.string "be shy about healing POKéMON.$"

ViridianCity_PokemonCenter_1F_Text_PokeCentersHealMons::
# 61 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON CENTERS heal your tired,\n"
	.string "hurt, or fainted POKéMON.\p"
	.string "They make all POKéMON completely\n"
	.string "healthy.$"
