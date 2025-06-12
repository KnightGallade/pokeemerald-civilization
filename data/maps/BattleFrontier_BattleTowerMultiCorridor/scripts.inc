@ On this map the player will automatically walk into the room, but the camera is supposed to remain still.
@ To do this GF sets the player (LOCALID_PLAYER) invisible and creates a fake player object (LOCALID_TOWER_MULTI_CORRIDOR_PLAYER).
@ The graphics of this fake player object are represented with VAR_OBJ_GFX_ID_F.
@ The graphics of the partner are represented with VAR_OBJ_GFX_ID_E, which will ultimately be set by tower_setpartnergfx.

# 7 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_MapScripts::
# 8 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleTowerMultiCorridor_OnTransition
# 9 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerMultiCorridor_OnWarp
# 10 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerMultiCorridor_OnFrame
# 11 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	.byte 0
# 12 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

BattleFrontier_BattleTowerMultiCorridor_OnTransition:
# 18 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerMultiCorridor_EventScript_SetObjGfx
# 19 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerMultiCorridor_EventScript_SetLinkPlayerGfx
# 20 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	end
# 21 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 22 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_SetObjGfx::
# 23 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	tower_setpartnergfx
# 24 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	checkplayergender
# 25 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, BattleFrontier_BattleTowerMultiCorridor_EventScript_SetPlayerGfxFemale
# 26 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_BRENDAN_NORMAL
# 27 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	return
# 28 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 29 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_SetPlayerGfxFemale::
# 30 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_MAY_NORMAL
# 31 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	return
# 32 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 33 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_SetLinkPlayerGfx::
# 34 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	special SetBattleTowerLinkPlayerGfx
# 35 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	return
# 36 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 37 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_OnWarp:
# 38 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerMultiCorridor_EventScript_SetUpObjects
# 39 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	.2byte 0
# 40 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 41 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_SetUpObjects::
	hideobjectat LOCALID_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR
	hideobjectat LOCALID_TOWER_MULTI_CORRIDOR_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR
	hideobjectat LOCALID_TOWER_MULTI_CORRIDOR_PARTNER, MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR
	special OffsetCameraForBattle
# 46 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	end
# 47 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 48 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_OnFrame:
# 49 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor
# 50 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	.2byte 0
# 51 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 52 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor::
# 53 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	lockall
# 54 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setflag FLAG_ENABLE_MULTI_CORRIDOR_DOOR
# 55 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_0x8004, 14  @ x coord of far door, used by DrawDoor
# 56 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_0x8005, 1   @ y coord of far door, used by DrawDoor
# 57 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	opendoor 1, 1
# 58 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitdooranim
# 59 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	clearflag FLAG_ENABLE_MULTI_CORRIDOR_DOOR
	showobjectat LOCALID_TOWER_MULTI_CORRIDOR_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR
	showobjectat LOCALID_TOWER_MULTI_CORRIDOR_PARTNER, MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_PLAYER, BattleFrontier_BattleTowerMultiCorridor_Movement_ExitElevator
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_PARTNER, BattleFrontier_BattleTowerMultiCorridor_Movement_ExitElevator
	waitmovement 0
# 65 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setflag FLAG_ENABLE_MULTI_CORRIDOR_DOOR
# 66 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_0x8004, 14  @ x coord of far door, used by DrawDoor
# 67 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_0x8005, 1   @ y coord of far door, used by DrawDoor
# 68 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	closedoor 1, 1
# 69 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitdooranim
# 70 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	clearflag FLAG_ENABLE_MULTI_CORRIDOR_DOOR
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_PLAYER, BattleFrontier_BattleTowerMultiCorridor_Movement_PlayerWalkToDoor
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_PARTNER, BattleFrontier_BattleTowerMultiCorridor_Movement_PartnerWalkToDoor
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_ATTENDANT_2, BattleFrontier_BattleTowerMultiCorridor_Movement_PlayerAttendantWalkToDoor
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_ATTENDANT_1, BattleFrontier_BattleTowerMultiCorridor_Movement_PartnerAttendantWalkToDoor
	waitmovement 0
# 76 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	delay 40
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_ATTENDANT_2, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_ATTENDANT_1, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
# 80 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	opendoor 7, 1
# 81 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitdooranim
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_ATTENDANT_2, BattleFrontier_BattleTowerMultiCorridor_Movement_AttendantEnterDoor
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_ATTENDANT_1, BattleFrontier_BattleTowerMultiCorridor_Movement_AttendantEnterDoor
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_PLAYER, BattleFrontier_BattleTowerMultiCorridor_Movement_TrainerEnterDoor
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_PARTNER, BattleFrontier_BattleTowerMultiCorridor_Movement_TrainerEnterDoor
	waitmovement 0
# 87 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	closedoor 7, 1
# 88 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitdooranim
# 89 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	delay 30
# 90 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 91 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	call BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToBattleRoom
# 92 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	releaseall
# 93 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	end
# 94 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 95 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToBattleRoom::
# 96 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToNormalBattleRoom
# 97 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToNormalBattleRoom
# 98 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToMultiBattleRoom
# 99 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToLinkMultiBattleRoom
# 100 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	return
# 101 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 102 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToNormalBattleRoom::
# 103 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_BATTLE_ROOM, 4, 8
# 104 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitstate
# 105 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	return
# 106 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 107 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToMultiBattleRoom::
# 108 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_BATTLE_ROOM, 4, 5
# 109 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitstate
# 110 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	return
# 111 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 112 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
@ Unnecessary duplicate of the above
# 113 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToLinkMultiBattleRoom::
# 114 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_BATTLE_ROOM, 4, 5
# 115 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitstate
# 116 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	return
# 117 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 118 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_Movement_PlayerWalkToDoor:
# 119 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_down
# 120 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 121 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 122 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 123 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 124 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 125 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 126 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	step_end
# 127 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 128 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_Movement_PartnerWalkToDoor:
# 129 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_down
# 130 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 131 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 132 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 133 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 134 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 135 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 136 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	step_end
# 137 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 138 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_Movement_PlayerAttendantWalkToDoor:
# 139 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 140 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 141 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 142 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 143 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 144 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 145 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_up
# 146 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_in_place_faster_right
# 147 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	step_end
# 148 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 149 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_Movement_PartnerAttendantWalkToDoor:
# 150 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 151 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 152 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 153 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 154 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 155 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 156 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_up
# 157 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_in_place_faster_left
# 158 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	step_end
# 159 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 160 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_Movement_TrainerEnterDoor:
# 161 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	delay_16
# 162 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_up
# 163 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_up
# 164 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	set_invisible
# 165 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	step_end
# 166 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 167 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_Movement_AttendantEnterDoor:
# 168 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_up
# 169 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	set_invisible
# 170 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	step_end
# 171 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 172 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_Movement_ExitElevator:
# 173 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_down
# 174 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	step_end
