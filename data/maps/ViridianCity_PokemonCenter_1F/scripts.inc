ViridianCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


ViridianCity_PokemonCenter_1F_OnTransition::
# 7 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_VIRIDIAN_CITY
	end


ViridianCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_VIRIDIAN_NURSE
# 13 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_1F_EventScript_Chansey::
# 21 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_VIRIDIAN_CHANSEY
# 22 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterChansey
# 23 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 24 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 25 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_1F_EventScript_Boy::
# 30 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_PokeCenterInEveryTown, MSGBOX_NPC
	end


ViridianCity_PokemonCenter_1F_EventScript_Gentleman::
# 35 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_FeelFreeToUsePC, MSGBOX_NPC
	end


ViridianCity_PokemonCenter_1F_EventScript_Youngster::
# 40 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_PokeCentersHealMons, MSGBOX_NPC
	end


ViridianCity_PokemonCenter_1F_Text_FeelFreeToUsePC::
# 44 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "Please feel free to use that PC in\n"
	.string "the corner.\p"
	.string "The receptionist told me so.\n"
	.string "It's so kind of her!$"

ViridianCity_PokemonCenter_1F_Text_PokeCenterInEveryTown::
# 51 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "There's a POKéMON CENTER in every\n"
	.string "town ahead.\p"
	.string "They charge no money, so don't\n"
	.string "be shy about healing POKéMON.$"

ViridianCity_PokemonCenter_1F_Text_PokeCentersHealMons::
# 58 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON CENTERS heal your tired,\n"
	.string "hurt, or fainted POKéMON.\p"
	.string "They make all POKéMON completely\n"
	.string "healthy.$"
