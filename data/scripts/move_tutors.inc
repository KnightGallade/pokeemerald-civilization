SlateportCity_PokemonFanClub_EventScript_SwaggerTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SWAGGER, MoveTutor_EventScript_SwaggerTaught
	msgbox MoveTutor_Text_SwaggerTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SwaggerDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SwaggerDeclined
	msgbox MoveTutor_Text_SwaggerWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SWAGGER
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SwaggerDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_SWAGGER
	goto MoveTutor_EventScript_SwaggerTaught
	end

MoveTutor_EventScript_SwaggerDeclined::
	msgbox MoveTutor_Text_SwaggerDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SwaggerTaught::
	msgbox MoveTutor_Text_SwaggerTaught, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_RolloutTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT, MoveTutor_EventScript_RolloutTaught
	msgbox MoveTutor_Text_RolloutTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_RolloutDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_RolloutDeclined
	msgbox MoveTutor_Text_RolloutWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_ROLLOUT
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_RolloutDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT
	goto MoveTutor_EventScript_RolloutTaught
	end

MoveTutor_EventScript_RolloutDeclined::
	msgbox MoveTutor_Text_RolloutDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_RolloutTaught::
	msgbox MoveTutor_Text_RolloutTaught, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_FuryCutterTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER, MoveTutor_EventScript_FuryCutterTaught
	msgbox MoveTutor_Text_FuryCutterTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_FuryCutterDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_FuryCutterDeclined
	msgbox MoveTutor_Text_FuryCutterWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_FURY_CUTTER
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_FuryCutterDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER
	goto MoveTutor_EventScript_FuryCutterTaught
	end

MoveTutor_EventScript_FuryCutterDeclined::
	msgbox MoveTutor_Text_FuryCutterDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_FuryCutterTaught::
	msgbox MoveTutor_Text_FuryCutterTaught, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_House_EventScript_MimicTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_MIMIC, MoveTutor_EventScript_MimicTaught
	msgbox MoveTutor_MimicTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MimicDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MimicDeclined
	msgbox MoveTutor_Text_MimicWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_MIMIC
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_MimicDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_MIMIC
	goto MoveTutor_EventScript_MimicTaught
	end

MoveTutor_EventScript_MimicDeclined::
	msgbox MoveTutor_MimicDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_MimicTaught::
	msgbox MoveTutor_Text_MimicTaught, MSGBOX_DEFAULT
	release
	end

FallarborTown_Mart_EventScript_MetronomeTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_METRONOME, MoveTutor_EventScript_MetronomeTaught
	msgbox MoveTutor_Text_MetronomeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MetronomeDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MetronomeDeclined
	msgbox MoveTutor_Text_MetronomeWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_METRONOME
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_MetronomeDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_METRONOME
	goto MoveTutor_EventScript_MetronomeTaught
	end

MoveTutor_EventScript_MetronomeDeclined::
	msgbox MoveTutor_Text_MetronomeDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_MetronomeTaught::
	msgbox MoveTutor_Text_MetronomeTaught, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_SleepTalkTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK, MoveTutor_EventScript_SleepTalkTaught
	msgbox MoveTutor_Text_SleepTalkTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SleepTalkDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SleepTalkDeclined
	msgbox MoveTutor_Text_SleepTalkWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SLEEP_TALK
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SleepTalkDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK
	goto MoveTutor_EventScript_SleepTalkTaught
	end

MoveTutor_EventScript_SleepTalkDeclined::
	msgbox MoveTutor_Text_SleepTalkDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SleepTalkTaught::
	msgbox MoveTutor_Text_SleepTalkTaught, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_SubstituteTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE, MoveTutor_EventScript_SubstituteTaught
	msgbox MoveTutor_Text_SubstituteTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SubstituteDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SubstituteDeclined
	msgbox MoveTutor_Text_SubstituteWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SUBSTITUTE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SubstituteDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE
	goto MoveTutor_EventScript_SubstituteTaught
	end

MoveTutor_EventScript_SubstituteDeclined::
	msgbox MoveTutor_Text_SubstituteDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SubstituteTaught::
	msgbox MoveTutor_Text_SubstituteTaught, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_DynamicPunchTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH, MoveTutor_EventScript_DynamicPunchTaught
	msgbox MoveTutor_Text_DynamicPunchTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DynamicPunchDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DynamicPunchDeclined
	msgbox MoveTutor_Text_DynamicPunchWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_DYNAMIC_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_DynamicPunchDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH
	goto MoveTutor_EventScript_DynamicPunchTaught
	end

MoveTutor_EventScript_DynamicPunchDeclined::
	msgbox MoveTutor_Text_DynamicPunchDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_DynamicPunchTaught::
	msgbox MoveTutor_Text_DynamicPunchTaught, MSGBOX_DEFAULT
	release
	end

SootopolisCity_PokemonCenter_1F_EventScript_DoubleEdgeTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE, MoveTutor_EventScript_DoubleEdgeTaught
	msgbox MoveTutor_Text_DoubleEdgeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DoubleEdgeDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DoubleEdgeDeclined
	msgbox MoveTutor_Text_DoubleEdgeWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_DOUBLE_EDGE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_DoubleEdgeDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE
	goto MoveTutor_EventScript_DoubleEdgeTaught
	end

MoveTutor_EventScript_DoubleEdgeDeclined::
	msgbox MoveTutor_Text_DoubleEdgeDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_DoubleEdgeTaught::
	msgbox MoveTutor_Text_DoubleEdgeTaught, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_PokemonCenter_1F_EventScript_ExplosionTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION, MoveTutor_EventScript_ExplosionTaught
	msgbox MoveTutor_Text_ExplosionTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_ExplosionDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_ExplosionDeclined
	msgbox MoveTutor_Text_ExplosionWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_EXPLOSION
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_ExplosionDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION
	goto MoveTutor_EventScript_ExplosionTaught
	end

MoveTutor_EventScript_ExplosionDeclined::
	msgbox MoveTutor_Text_ExplosionDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_ExplosionTaught::
	msgbox MoveTutor_Text_ExplosionTaught, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_OpenPartyMenu::
	special ChooseMonForMoveTutor
	waitstate
	lock
	faceplayer
	return

MoveTutor_EventScript_CanOnlyBeLearnedOnce::
	msgbox MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce, MSGBOX_YESNO
	return

@ Added FRLG move tutors

Kanto_VictoryRoad_2F_EventScript_DoubleEdgeTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_DOUBLE_EDGE, EventScript_DoubleEdgeTaught
	msgbox MoveTutor_Kanto_Text_DoubleEdgeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_DoubleEdgeDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_DoubleEdgeDeclined
	msgbox MoveTutor_Kanto_Text_DoubleEdgeWhichMon
	setvar VAR_0x8005, MOVE_DOUBLE_EDGE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, FALSE, EventScript_DoubleEdgeDeclined
	setflag FLAG_TUTOR_DOUBLE_EDGE
	goto EventScript_DoubleEdgeTaught
	end

EventScript_DoubleEdgeDeclined::
	msgbox MoveTutor_Kanto_Text_DoubleEdgeDeclined
	release
	end

EventScript_DoubleEdgeTaught::
	msgbox MoveTutor_Kanto_Text_DoubleEdgeTaught
	release
	end

EventScript_ThunderWaveTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_THUNDER_WAVE, EventScript_ThunderWaveTaught
	msgbox MoveTutor_Kanto_Text_ThunderWaveTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ThunderWaveDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_ThunderWaveDeclined
	msgbox MoveTutor_Kanto_Text_ThunderWaveWhichMon
	setvar VAR_0x8005, MOVE_THUNDER_WAVE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, FALSE, EventScript_ThunderWaveDeclined
	setflag FLAG_TUTOR_THUNDER_WAVE
	goto EventScript_ThunderWaveTaught
	end

EventScript_ThunderWaveDeclined::
	msgbox MoveTutor_Kanto_Text_ThunderWaveDeclined
	release
	end

EventScript_ThunderWaveTaught::
	msgbox MoveTutor_Kanto_Text_ThunderWaveTaught
	release
	end

RockTunnel_B1F_EventScript_RockSlideTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_ROCK_SLIDE, EventScript_RockSlideTaught
	msgbox MoveTutor_Kanto_Text_RockSlideTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_RockSlideDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_RockSlideDeclined
	msgbox MoveTutor_Kanto_Text_RockSlideWhichMon
	setvar VAR_0x8005, MOVE_ROCK_SLIDE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, FALSE, EventScript_RockSlideDeclined
	setflag FLAG_TUTOR_ROCK_SLIDE
	goto EventScript_RockSlideTaught
	end

EventScript_RockSlideDeclined::
	msgbox MoveTutor_Kanto_Text_RockSlideDeclined
	release
	end

EventScript_RockSlideTaught::
	msgbox MoveTutor_Kanto_Text_RockSlideTaught
	release
	end

Route4_EventScript_MegaPunchTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_MEGA_PUNCH, EventScript_MegaPunchTaught
	msgbox MoveTutor_Kanto_Text_MegaPunchTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_MegaPunchDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_MegaPunchDeclined
	msgbox MoveTutor_Kanto_Text_MegaPunchWhichMon
	setvar VAR_0x8005, MOVE_MEGA_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, FALSE, EventScript_MegaPunchDeclined
	setflag FLAG_TUTOR_MEGA_PUNCH
	goto EventScript_MegaPunchTaught
	end

EventScript_MegaPunchDeclined::
	msgbox MoveTutor_Kanto_Text_MegaPunchDeclined
	release
	end

EventScript_MegaPunchTaught::
	msgbox MoveTutor_Kanto_Text_MegaPunchTaught
	release
	end

Route4_EventScript_MegaKickTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_MEGA_KICK, EventScript_MegaKickTaught
	msgbox MoveTutor_Kanto_Text_MegaKickTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_MegaKickDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_MegaKickDeclined
	msgbox MoveTutor_Kanto_Text_MegaKickWhichMon
	setvar VAR_0x8005, MOVE_MEGA_KICK
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, FALSE, EventScript_MegaKickDeclined
	setflag FLAG_TUTOR_MEGA_KICK
	goto EventScript_MegaKickTaught
	end

EventScript_MegaKickDeclined::
	msgbox MoveTutor_Kanto_Text_MegaKickDeclined
	release
	end

EventScript_MegaKickTaught::
	msgbox MoveTutor_Kanto_Text_MegaKickTaught
	release
	end

EventScript_DreamEaterTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_DREAM_EATER, EventScript_DreamEaterTaught
	msgbox MoveTutor_Kanto_Text_DreamEaterTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_DreamEaterDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_DreamEaterDeclined
	msgbox MoveTutor_Kanto_Text_DreamEaterWhichMon
	setvar VAR_0x8005, MOVE_DREAM_EATER
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, FALSE, EventScript_DreamEaterDeclined
	setflag FLAG_TUTOR_DREAM_EATER
	goto EventScript_DreamEaterTaught
	end

EventScript_DreamEaterDeclined::
	msgbox MoveTutor_Kanto_Text_DreamEaterDeclined
	release
	end

EventScript_DreamEaterTaught::
	msgbox MoveTutor_Kanto_Text_DreamEaterTaught
	release
	end

EventScript_SoftboiledTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_SOFT_BOILED, EventScript_SoftboiledTaught
	msgbox MoveTutor_Kanto_Text_SoftboiledTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SoftboiledDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_SoftboiledDeclined
	msgbox MoveTutor_Kanto_Text_SoftboiledWhichMon
	setvar VAR_0x8005, MOVE_SOFT_BOILED
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, FALSE, EventScript_SoftboiledDeclined
	setflag FLAG_TUTOR_SOFT_BOILED
	goto EventScript_SoftboiledTaught
	end

EventScript_SoftboiledDeclined::
	msgbox MoveTutor_Kanto_Text_SoftboiledDeclined
	release
	end

EventScript_SoftboiledTaught::
	msgbox MoveTutor_Kanto_Text_SoftboiledTaught
	release
	end

FuchsiaCity_EventScript_SubstituteTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_SUBSTITUTE, EventScript_SubstituteTaught
	msgbox MoveTutor_Kanto_Text_SubstituteTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SubstituteDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_SubstituteDeclined
	msgbox MoveTutor_Kanto_Text_SubstituteWhichMon
	setvar VAR_0x8005, MOVE_SUBSTITUTE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, FALSE, EventScript_SubstituteDeclined
	setflag FLAG_TUTOR_SUBSTITUTE
	goto EventScript_SubstituteTaught
	end

EventScript_SubstituteDeclined::
	msgbox MoveTutor_Kanto_Text_SubstituteDeclined
	release
	end

EventScript_SubstituteTaught::
	msgbox MoveTutor_Kanto_Text_SubstituteTaught
	release
	end

PewterCity_Museum_1F_EventScript_SeismicTossTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_SEISMIC_TOSS, EventScript_SeismicTossTaught
	msgbox MoveTutor_Kanto_Text_SeismicTossTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SeismicTossDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_SeismicTossDeclined
	msgbox MoveTutor_Kanto_Text_SeismicTossWhichMon
	setvar VAR_0x8005, MOVE_SEISMIC_TOSS
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, FALSE, EventScript_SeismicTossDeclined
	setflag FLAG_TUTOR_SEISMIC_TOSS
	goto EventScript_SeismicTossTaught
	end

EventScript_SeismicTossDeclined::
	msgbox MoveTutor_Kanto_Text_SeismicTossDeclined
	release
	end

EventScript_SeismicTossTaught::
	msgbox MoveTutor_Kanto_Text_SeismicTossTaught
	release
	end

EventScript_CounterTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_COUNTER, EventScript_CounterTaught
	msgbox MoveTutor_Kanto_Text_CounterTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CounterDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_CounterDeclined
	msgbox MoveTutor_Kanto_Text_CounterWhichMon
	setvar VAR_0x8005, MOVE_COUNTER
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, FALSE, EventScript_CounterDeclined
	setflag FLAG_TUTOR_COUNTER
	goto EventScript_CounterTaught
	end

EventScript_CounterDeclined::
	msgbox MoveTutor_Kanto_Text_CounterDeclined
	release
	end

EventScript_CounterTaught::
	msgbox MoveTutor_Kanto_Text_CounterTaught
	release
	end

EventScript_MetronomeTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_METRONOME, EventScript_MetronomeTaught
	msgbox MoveTutor_Kanto_Text_MetronomeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_MetronomeDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_MetronomeDeclined
	msgbox MoveTutor_Kanto_Text_MetronomeWhichMon
	setvar VAR_0x8005, MOVE_METRONOME
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, FALSE, EventScript_MetronomeDeclined
	setflag FLAG_TUTOR_METRONOME
	goto EventScript_MetronomeTaught
	end

EventScript_MetronomeDeclined::
	msgbox MoveTutor_Kanto_Text_MetronomeDeclined
	release
	end

EventScript_MetronomeTaught::
	msgbox MoveTutor_Kanto_Text_MetronomeTaught
	release
	end

EventScript_MimicTutor::
	goto_if_set FLAG_TUTOR_MIMIC, EventScript_MimicTaught
	msgbox MoveTutor_Kanto_Text_MimicTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_MimicDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_MimicDeclined
	msgbox MoveTutor_Kanto_Text_MimicWhichMon
	setvar VAR_0x8005, MOVE_MIMIC
	call MoveTutor_EventScript_OpenPartyMenu
	lock
	faceplayer
	goto_if_eq VAR_RESULT, 0, EventScript_MimicDeclined
	removeitem ITEM_POKE_DOLL
	setflag FLAG_TUTOR_MIMIC
	goto EventScript_MimicTaught
	end

EventScript_MimicDeclined::
	msgbox MoveTutor_Kanto_Text_MimicDeclined
	release
	end

EventScript_MimicTaught::
	checkplayergender
	call_if_eq VAR_RESULT, MALE, EventScript_MimicTaughtMale
	call_if_eq VAR_RESULT, FEMALE, EventScript_MimicTaughtFemale
	release
	end

EventScript_MimicTaughtMale::
	msgbox MoveTutor_Kanto_Text_MimicTaughtMale
	return

EventScript_MimicTaughtFemale::
	msgbox MoveTutor_Kanto_Text_MimicTaughtFemale
	return
