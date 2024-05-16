//  Size:           0x5B0
//  Total Size:     0x5D0

class AICommandSequencer : public ScriptObject
{
public:
    //========================================================
    // Enums

    enum ECmd
    {
        ECmd_None = -1,
        ECmd_CarFleeToDestination,
        ECmd_CarRace,
        ECmd_Engage,
        ECmd_EnterVehicle,
        ECmd_ExitVehicle,
        ECmd_Flee,
        ECmd_FollowActor,
        ECmd_FollowPath ,
        ECmd_IdleWander,
        ECmd_MoveTo,
        ECmd_Nil,
        ECmd_PedTraffic,
        ECmd_PlayAnimation,
        ECmd_Max
    };

    enum EMod
    {
        EMod_None = -1,
        EMod_BoatAttackDefendTargetAttackers,
        EMod_CanUse50Cal,
        EMod_CanUseCover,
        EMod_CanUseVehicle,
        EMod_CarApplyWeeble,
        EMod_CarStateParked,
        EMod_CarStateTail,
        EMod_CarStateTraffic,
        EMod_CarSteeringAggression,
        EMod_DefendPosition,
        EMod_DestroyObject,
        EMod_ExecScript,
        EMod_Face,
        EMod_FiringDistance,
        EMod_GlobalSoundPlay,
        EMod_GroupAttack,
        EMod_GunUp,
        EMod_Kamikaze,
        EMod_MaintainDistanceFromObject,
        EMod_NextCommand,
        EMod_PedAmbient,
        EMod_RequestVocal,
        EMod_Shoot,
        EMod_StayInVehicle,
        EMod_Stop,
        EMod_Tunable,
        EMod_UseCoverObject,
        EMod_UseVehicleExtentsForAccuracy,
        EMod_VehicleCatchUpLogic,
        EMod_VehicleCollisionStun,
        EMod_VehicleContinueAtEndOfPath,
        EMod_VehicleMaxSpeed,
        EMod_VehicleNumLaps,
        EMod_VehiclePath,
        EMod_VehiclePathSetInitialWaypoint,
        EMod_VehicleShootingAggression,
        EMod_VehicleStateChase,
        EMod_VehicleStateFlee,
        EMod_VehicleStatePatrol,
        EMod_VehicleStateRace,
        EMod_VehicleTarget,
        EMod_Max
    };

    enum EOnError
    {
        EOnError_Abort,
        EOnError_Retry,
        EOnError_Max
    };

    enum EWait
    {
        EWait_None = -1,
        EWait_Max
    };

    //========================================================
    // Classes

    class Cmd
    {
    public:
        void* vfptr;
        ECmd m_CmdType;
    };

    class Mod
    {
    public:
        void *vfptr;
        EMod m_ModType;
    };

    class Wait
    {
    public:
        void* vfptr;
        EWait m_WaitType;
        uint32_t m_NextCmd;
    };

    //========================================================
    // Structs

    struct OnError
    {
        EOnError m_OnErrorType;
        int8_t m_nRetries;
    };

    struct CommandSequenceEntry
    {
        Cmd* m_pCmd;
        OnError m_OnError;
        int8_t m_ModIndex;
        int8_t m_WaitIndex;
    };

    //========================================================
    // Members

    ScriptObjectPointer<CharacterObject*> m_Character; // 0x20
    char m_SeqName[64];                                // 0x24
    CommandSequenceEntry m_CmdSeq[30];                 // 0x64
    Mod* m_Mods[60];                                   // 0x244
    Wait* m_Waits[40];                                 // 0x334
    char m_OldSeqName[64];                             // 0x3D4
    CommandSequenceEntry m_OldCmdSeqEntry;             // 0x414
    Mod* m_OldMods[60];                                // 0x424
    Wait* m_OldWaits[40];                              // 0x514
    uint32_t m_StartTimeStamp;                         // 0x5B4
    uint32_t m_CurrentCmdSeqID;                        // 0x5B8
    uint32_t m_OldCmdSeqID;                            // 0x5BC
    int8_t m_NumCmds;                                  // 0x5C0
    int8_t m_NumMods;                                  // 0x5C1
    int8_t m_NumWaits;                                 // 0x5C2
    int8_t m_CurCmd;                                   // 0x5C3
    int8_t m_NextCmd;                                  // 0x5C4
    bool m_CommandSequenceOpen;                        // 0x5C5
    bool m_Executing;                                  // 0x5C6
    bool m_CmdBegun;                                   // 0x5C7
    bool m_TaskRunning;                                // 0x5C8
    bool m_NeedTaskToFinish;                           // 0x5C9
    bool m_AdvanceCmd;                                 // 0x5CA
    bool m_Error;                                      // 0x5CB
    bool m_Abort;                                      // 0x5CC
    bool m_UseBackup;                                  // 0x5CD
    bool m_QueueExecution;                             // 0x5CE
};