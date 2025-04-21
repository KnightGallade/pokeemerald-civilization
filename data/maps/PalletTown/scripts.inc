PalletTown_MapScripts::
	.byte 0



PalletTown_EventScript_SignLady::
	msgbox PalletTown_Text_Test, MSGBOX_NPC
	end

PalletTown_EventScript_FatMan::
	msgbox PalletTown_Text_Test, MSGBOX_NPC
	end

PalletTown_EventScript_OaksLabSign::
	lockall
	@ famechecker FAMECHECKER_OAK, 0
	msgbox PalletTown_Text_Test, MSGBOX_SIGN
	releaseall
	end

PalletTown_EventScript_PlayersHouseSign::
	msgbox PalletTown_Text_Test, MSGBOX_SIGN
	end

PalletTown_EventScript_RivalsHouseSign::
	msgbox PalletTown_Text_Test, MSGBOX_SIGN
	end

PalletTown_EventScript_TownSign::
	msgbox PalletTown_Text_Test, MSGBOX_SIGN
	end

PalletTown_EventScript_TrainerTips::
	lockall
	msgbox PalletTown_Text_Test, MSGBOX_SIGN
	end

PalletTown_Text_Test:
	.string "Test this for me?$"
