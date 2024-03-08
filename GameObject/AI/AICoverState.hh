//  Size:           0x3C
//  Total Size:     0x4C

class AIBehavior : public StateMachine
{
public:
    AIBehavior* m_pAI;                                          // 0x10
    ProcessData* m_pProcessData;                                // 0x14
    ScriptObjectPointer<CoverObject*> m_CoverObject;            // 0x18
    math::Vector m_LOSOffset;                                   // 0x1C
    float m_InCoverTimer;                                       // 0x28
    float m_StateTimer;                                         // 0x2C
    float m_TimeTargetNotInShootingArea;                        // 0x30
    unsigned int m_DontUseCoverUntilTime;                       // 0x34
    unsigned int m_DontChangeCoverUntilTime;                    // 0x38
    unsigned int m_RespondToTauntTime;                          // 0x3C
    bool m_CanUseCover;                                         // 0x40
    bool m_IsTaskRequest;                                       // 0x41
    bool m_MoveToTaskRequest;                                   // 0x42
    bool m_IsCoverObjectTaskRequest;                            // 0x43
    bool m_ShootAnimationComplete;                              // 0x44
    bool m_HasCoverRequest;                                     // 0x45
    bool m_HasAlreadyFoundCoverOnce;                            // 0x46
    bool m_Surprised;                                           // 0x47
    bool m_Taunted;                                             // 0x48
    bool m_ShotOrNearMiss;                                      // 0x49
};