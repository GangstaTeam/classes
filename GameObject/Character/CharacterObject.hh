//  Size:           0x384
//  Total Size:     0x430

class CharacterObject : public InventoryOwner
{
public:
    int mAlertStatus;                                                       // 0xAC
    int mFriendOrFoe;                                                       // 0xB0
    CharacterTemplate* mCharacterTemplate;                                  // 0xB4
    pure3d::UID mCharacterTypeUID;                                          // 0xB8
    TargetSetModule mTargetSetModule;                                       // 0xBC
    unsigned int mAIBehaviorID;                                             // 0xD8
    unsigned int mAITaskGroupID;                                            // 0xDC
    unsigned int mAICurrentTaskID;                                          // 0xE0
    ScriptObjectPointer<GameSet*> mNPCAttackers;                            // 0xE4
    ScriptObjectPointer<AIBehavior*> mAIBehavior;                           // 0xE8
    core::MemoryAllocator mSegmentAllocator;                                // 0xEC
    unsigned int mMemorySegmentId;                                          // 0xF0
    unsigned int mTalkTargetCharacterId;                                    // 0xF4
    CharacterContext* mCharacterContext;                                    // 0xF8
    char* mDialoguePoiName;                                                 // 0xFC
    int mDialoguePoiCount;                                                  // 0x100
    int mDialogueIdleIndex;                                                 // 0x104
    char* mTeamName;                                                        // 0x108
    float mDeadForTimer;                                                    // 0x10C
    unsigned char mSurfaceIndex;                                            // 0x110
    bool mDyingFinished;                                                    // 0x111
    bool mImmuneToExecution;                                                // 0x112
    bool mSetAmbientCollision;                                              // 0x113
    bool m_UnknownBool_0x114;                                               // 0x114
    CollidableHandle* mBulletCollisionHierarchy;                            // 0x118
    unsigned int mSavedCollisionState;                                      // 0x11C
    float m_HorizontalTranslationScale;                                     // 0x120
    float m_VerticalTranslationScale;                                       // 0x124
    float m_SpeedScale;                                                     // 0x128
    float m_Animation360Weight;                                             // 0x12C
    pure3d::Name m_ConversationType;                                        // 0x130
    pure3d::Name m_RequestedFightNodeName;                                  // 0x134
    pure3d::Name m_RequestedFightAnimationState;                            // 0x138
    float m_StartFrame;                                                     // 0x13C
    int mMeleeDamage;                                                       // 0x140
    EMeleeAttackType mMeleeAttackType;                                      // 0x144
    EMeleeAttackType mMeleeIncomingAttackType;                              // 0x148
    unsigned int mMeleeAttackID;                                            // 0x14C
    EMeleeAttackDirection mMeleeAttackDirection;                            // 0x150
    ScriptObjectPointer<CharacterObject*> mAttackerCharacterObject;         // 0x154
    int m_LimbObjectId;                                                     // 0x158
    int mHealth;                                                            // 0x15C
    int mMaxHealth;                                                         // 0x160
    bool mIsInjured;                                                        // 0x164
    bool m_KnockedDown;                                                     // 0x165
    bool mLastHitWasToHead;                                                 // 0x166
    bool mHitByGrenade;                                                     // 0x167
    EDamageMagnitude mHitByACar;                                            // 0x168
    bool mHitByExplosion;                                                   // 0x16C
    ECriticalHit mCriticalHit;                                              // 0x170
    float mHealthCallbackThresholdPercent;                                  // 0x174
    ESkeletonJoint m_DamageJoint;                                           // 0x178
    int m_DamageWeapon;                                                     // 0x17C
    int m_DamageDirection;                                                  // 0x180
    unsigned int m_KillerID;                                                // 0x184
    bool mDisableCriticalHits;                                              // 0x188
    bool mDisableGetHitAnims;                                               // 0x189
    bool m_bHitByExplosionThisFrame;                                        // 0x18A
    bool mWeaponRaisedNPC;                                                  // 0x18B
    unsigned int mOnDyingFinishedSchedule;                                  // 0x18C
    uint32_t mLastVehicleID;                                                // 0x190
    uint32_t mVehicleCollidingWithID;                                       // 0x194  
    unsigned int mOnKilledVehicleID;                                        // 0x198
    int mDisabledCarState;                                                  // 0x19C

    Character* mCharacterEngineObject;                                      // 0x1AC
 
    WeaponState mWeaponState;                                               // 0x2AC
    Swim mSwimState;                                                        // 0x2DC
    PilotState m_PilotState;                                                // 0x2E8

    bool mDisabled;                                                         // 0x29C
    bool mIsNISControlled;                                                  // 0x29D
   
    bool mIsMidget;                                                         // 0x3A0
    bool m_SteppedInBlood;                                                  // 0x3A1   
    int m_NumStepsInBlood;                                                  // 0x3A4
    SharedInt mCurrentSampleFinishTime;                                     // 0x3A8

    bool mHasSampleTimingInfoToAssign;                                      // 0x3B4

    char mLimbsAvailability;                                                // 0x3C8
    
    ScriptObjectPointer<AICommandSequencer*> m_AICommandSequencer;          // 0x408
    
    FightTreePhysicalMode mFightTreePhysicalMode;                           // 0x41C
    bool m_StatePropCollisionEnabled;                                       // 0x420
    bool mIsFadingForDelete;                                                // 0x421
    bool mDamageableByMainCharacter;                                        // 0x422
    bool mProcessedTasksAtLeastOnce : 1;                                    // 0x423
    bool mIsDoingLoopedConversationAnim : 1;                                // 0x423
    bool mEligibleForStumble : 1;                                           // 0x423
    bool mIsStaffMember : 1;                                                // 0x423
    bool mIsShoveable : 1;                                                  // 0x423
    bool mHasCustomTunables : 1;                                            // 0x423
    bool mCameraFadeOutFaded : 1;                                           // 0x423
    bool mIsMeleeAttacking : 1;                                             // 0x423
};