//  Size:           0x118
//  Total Size:     0x148

class Targeting : public GameSetObject
{
public:
    float mTune_BestTarget_AngleWeight;                      // 0x30
    float mTune_BestTarget_DistanceWeight;                   // 0x34
    float mTune_BestTarget_MissionTargetMult;                // 0x38
    AutoTargetList m_AutoTargetList;                         // 0x3C
    ScriptObjectPointer<GameSimObject*> m_pTarget;           // 0xE0
    ScriptObjectPointer<ActionMap*> m_pActionMap;            // 0xE4
    math::Vector m_TargetDirection;                          // 0xE8
    math::Vector mPointUnderReticle;                         // 0xF4
    math::Vector mDirectionToReticle;                        // 0x100
    int mTargetingRayCastToken;                              // 0x10C
    GameSimObject *m_pDeadTarget;                            // 0x110
    unsigned int mHoldDeadTargetTimer;                       // 0x114
    unsigned int mRaiseWeaponTimer;                          // 0x118
    float mTune_HoldDeadTargetTimer;                         // 0x11C
    float mTune_LockTime_MinDistance;                        // 0x120
    float mTune_LockTime_MaxDistance;                        // 0x124
    float mTune_LockTime_DistanceMultiplier;                 // 0x128
    float mTune_LockTime_VehicleMult;                        // 0x12C
    int mTune_FlickTimerMS;                                  // 0x130
    float mTune_AdjustTargetDirectionToReticle;              // 0x134
    float mTune_AdjustTargetDirectionToReticle_ReticleLeft;  // 0x138
    ScriptObjectPointer<GameSimObject*> mEnemyUnderReticle;  // 0x13C
    bool mReticleIsOverEnemy;                                // 0x140
    bool mReticleIsNearEnemy;                                // 0x141
    bool mReticleIsOverCriticalJoint;                        // 0x142
    bool mLockedTargetIsVisible;                             // 0x143
    bool mIsWeaponRaised;                                    // 0x144
    bool m_PointUnderReticleIsStale;                         // 0x145
    bool m_DirectionToReticleIsStale;                        // 0x146
};