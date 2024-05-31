//  Size:           0x558
//  Total Size:     0x578

class AIBehavior : public ScriptObject
{
public:
    struct MoveAwayFromPositionData
    {
        bool active;                        // 0x0
        bool movingDirectlyAndNotOnNavmesh; // 0x1
        PathFindAwayParameters parameters;  // 0x4
        float incrementalRequestedDistance; // 0x14
        SmartPosition position;             // 0x18
    };

    struct WeaponPickupData
    {
        ScriptObjectPointer<WeaponPickup*> weapon; // 0x0
        uint32_t moveStartTime;                    // 0x4
        bool movingToWeapon;                       // 0x8
        bool allowedToPickupWeapon;                // 0x9
    };

    struct WeaponRangeOverride
    {
        float fMin;          // 0x0
        float fMax;          // 0x4
        float fMaxInVehicle; // 0x8
        float fMinDesired;   // 0xC
        float fMaxDesired;   // 0x10
        bool bActive;        // 0x14
    };

    typedef void (*MoveToCompleteCallback)(void* userdata);

    void* __LOSUpdateListenerVfptr;                                 // 0x20
    ScriptObjectPointer<GameSet*> mProjectileSet;                   // 0x24
    uint32_t mCharacterID;                                          // 0x28
    float mTunableAccuracy;                                         // 0x2C
    float mTunableAccuracyInVehicle;                                // 0x30
    float mTunableHitConeXRadius;                                   // 0x34
    float mTunableHitConeYRadius;                                   // 0x38
    float mTunableMissConeRadius;                                   // 0x3C
    float mTunableMissConeRadiusInVehicle;                          // 0x40
    float mTunableTargetXExtent;                                    // 0x44
    float mTunableTargetYExtent;                                    // 0x48
    float mTunableAggression;                                       // 0x4C
    float mTunableVehicleRammingAggression;                         // 0x50
    float mTunablePerception;                                       // 0x54
    float mTunablePerceptionInVehicle;                              // 0x58
    float mTunableVehicleTargetPerception;                          // 0x5C
    float mTunableReactionTime;                                     // 0x60
    float mTunableGroupAttack;                                      // 0x64
    float mTunableDodgeFrequency;                                   // 0x68
    float mTunableSmackTalk;                                        // 0x6C
    float mTunableStrafe;                                           // 0x70
    float mTunableKamikaze;                                         // 0x74
    float mTunableCoverReaction;                                    // 0x78
    float mTunableComposure;                                        // 0x7C
    float mTunableSightDistance;                                    // 0x80
    ScriptObjectPointer<CharacterObject*> mCharacter;               // 0x84
    smVector<CharacterLOSInfo*> mCharacterLOSTable;                 // 0x88
    ScriptObjectPointer<GameSet*> mBodyBag;                         // 0x98
    Path* mPath;                                                    // 0x9C
    MoveAwayFromPositionData mMoveAwayFromPosition;                 // 0xA0
    int mPathProcessingTime;                                        // 0xCC
    SpeedRequest mMoveSpeed;                                        // 0xD0
    float mMoveTolerance;                                           // 0xD8
    math::Vector mMoveDestination;                                  // 0xDC
    math::Vector mLastPathSearchDestination;                        // 0xE8
    MoveToCompleteCallback mMoveToCompleteCallback;                 // 0xF4
    void* mMoveToCompleteUserdata;                                  // 0xF8
    float mRandomSpeedFactor;                                       // 0xFC
    float mRandomLocomotionSpeedMultiplier;                         // 0x100
    math::Vector mLaggedMoveVector;                                 // 0x104
    math::Vector mMoveDirection;                                    // 0x110
    uint32_t mPathfindFailedTimestamp;                              // 0x11C
    AIStrafeState mStrafeState;                                     // 0x120
    PedestrianNavigation* mpPedestrianNavigation;                   // 0x154
    math::Vector mMoveStuckPrevPosition;                            // 0x158
    math::Vector mMoveStuckDirection;                               // 0x164
    float mMoveStuckPrevDistance;                                   // 0x170
    int mMoveStuckTimestamp;                                        // 0x174
    float mMoveStuckTolerance;                                      // 0x178
    AISteeringAvoidanceState mSteeringAvoidanceState;               // 0x17C
    int mFacingWallLOSTicket;                                       // 0x1D8
    math::Vector mPositionWhenFacingWallLOSTestWasIssued;           // 0x1DC
    math::Vector2 mDirectionWhenFacingWallLOSTestWasIssued;         // 0x1E8
    math::Vector mWallNormal;                                       // 0x1F0
    SmartPosition mAimLocation;                                     // 0x1FC
    uint32_t mHeadTrackingTime;                                     // 0x210
    math::Vector mHeadTrackLocation;                                // 0x214
    uint32_t mCrouchTime;                                           // 0x220
    ScriptObjectPointer<CharacterObject*> mEngageTarget;            // 0x224
    uint32_t mEngageTargetAcquiredTimestamp;                        // 0x228
    math::Vector mLastTargetPosition;                               // 0x22C
    math::Vector mLastTargetVelocity;                               // 0x238
    ScriptObjectPointer<CharacterObject*> mLastAttacker;            // 0x244
    uint32_t mLastAttackTime;                                       // 0x248
    uint32_t mTargetToEngageID;                                     // 0x24C
    ScriptObjectPointer<CharacterObject*> mTargetToEngage;          // 0x250
    ScriptObjectPointer<CharacterObject*> mMeleeAttackTarget;       // 0x254
    int mEngageInitialAnimation;                                    // 0x258
    EnemyManager::AttackSlotInfo mAttackSlotInfo;                   // 0x25C
    CharacterIntention::Button mFireButtonIndex;                    // 0x26C
    int mBurstFirePauseTime;                                        // 0x270
    float mMaxEngageDistance;                                       // 0x274
    uint32_t mFireTimestamp;                                        // 0x278
    math::Vector mFiredAtTargetPosition;                            // 0x27C
    math::Vector mLastErrorVec;                                     // 0x288
    float mAimMaxErrorAngleCos;                                     // 0x294
    int mWeaponToMountID;                                           // 0x298
    int mWeaponToMountStartTime;                                    // 0x29C
    float mDesiredAttackDistance;                                   // 0x2A0
    float mHitsPerSecondMovAvg;                                     // 0x2A4
    float mLastDesiredHitsPerSecond;                                // 0x2A8
    AICoverState mCoverState;                                       // 0x2AC
    WeaponPickupData mWeaponPickupData;                             // 0x2F8
    WeaponRangeOverride mWeaponRangeOverride;                       // 0x304
    ScriptObjectPointer<GameObject*> mDestroyObject;                // 0x31C
    float mDestroyObjectYOffset;                                    // 0x320
    math::Vector mDestroyObjectFiringLocation;                      // 0x324
    uint32_t mNextStrafeTime;                                       // 0x330
    SpeedRequest mStrafeSpeed;                                      // 0x334
    EDefendPositionState mDefendPositionState;                      // 0x33C
    math::Vector mDefendPosition;                                   // 0x340
    float mDefendRadius;                                            // 0x34C
    uint32_t mMeleeAttackTimer;                                     // 0x350
    uint32_t mDodgeMeleeTimer;                                      // 0x354
    int mMeleeAnimationRequestID;                                   // 0x358
    uint32_t mHandledIncomingMeleeAttackID;                         // 0x35C
    int mDodgeWeaponTime;                                           // 0x360
    uint32_t mRequestTauntTimestamp;                                // 0x364
    int mTauntAnimationRequestID;                                   // 0x368
    uint32_t mDialogueDeliverTime;                                  // 0x36C
    uint32_t mLastDialogueTime;                                     // 0x370
    int mEngageDialogType;                                          // 0x374
    ScriptObjectPointer<CharacterObject*> mThreatSource;            // 0x378
    math::Vector mThreatPosition;                                   // 0x37C
    AICompoundStimulusTable mStimulusTable;                         // 0x388
    AIStimulusEvent mStimulus;                                      // 0x39C
    AIStaggeredStimulusQueue mStaggeredStimulusQueue;               // 0x3EC
    container::ArrayDynamic mStimulusDetectors;                     // 0x420
    float mAverageMicrosecondsForUpdate;                            // 0x430
    uint8_t mDefaultBasePriority;                                   // 0x434
    uint8_t mBasePriority;                                          // 0x435
    int mLastFullUpdateTime;                                        // 0x438
    
    uint16_t mDecisionTreeIndex;                                    // 0x4D8
    uint16_t mDecisionTreeTaskResult;                               // 0x4DA
    uint32_t mDecisionTreeRegisters[13];                            // 0x4DC
    uint8_t mIdleBehaviour;                                         // 0x510
    uint8_t mCombatBehaviour;                                       // 0x511 
    uint32_t mDefaultBehaviourCmdSeqID;                             // 0x514
    AIActionFactory mActionFactory;                                 // 0x518
    AttitudeToTonyModule mAttitudeModule;                           // 0x51C
    int mTimeLastIdentifiedTonyInFowardCone;                        // 0x524
    AIAmbientGazeModule* mpAmbientGazeModule;                       // 0x528
    int mGetClearTimer;                                             // 0x52C
    RDJElapsedTimer mLastReactedToTonyTaunt;                        // 0x530
    PanicVocalModule mPanicVocalModule;                             // 0x538
    bool mDisableSeparation;                                        // 0x540
    bool mAllowedToUse50Cal;                                        // 0x541
    int mPathNodeIndex : 8;                                         // 0x544
    uint8_t mTimesPathAdjustedForCollision;                         // 0x548
    bool mMoveToDestination;                                        // 0x549
    bool mUsingExternalPath;                                        // 0x54A 
    bool mTeleportBackToPathWhenStuck;                              // 0x54B
    bool mPathProcessing;                                           // 0x54C
    bool mMoveToReserve;                                            // 0x54D
    bool mIsTaskMoveRequest;                                        // 0x54E
    bool mMoveBeforePathFound;                                      // 0x54F
    bool mSlowDownAtEndOfPath;                                      // 0x550
    bool mPathfindFailed;                                           // 0x551
    bool mMoveStuck;                                                // 0x552
    bool mFacingWallFirstHit;                                       // 0x553
    bool mFacingWall;                                               // 0x554
    bool mIsTaskAimRequest;                                         // 0x555
    bool mUseAimLocation;                                           // 0x556
    bool mGunUpTaskRequest;                                         // 0x557
    bool mHasGunUpTaskRequest;                                      // 0x558
    bool mIsTaskHeadTrackRequest;                                   // 0x559
    bool mIsTaskCrouchRequest;                                      // 0x55A
    bool mPressReload;                                              // 0x55B
    bool mMovingWithinDesiredRange;                                 // 0x55C
    bool mNonAutoWeaponFire;                                        // 0x55D
    bool mWantsToFire;                                              // 0x55E
    bool mFiringEnabled;                                            // 0x55F
    bool mPressFire;                                                // 0x560
    bool mAllowedToPullOutWeapon;                                   // 0x561
    bool mUseAttackSlotInfo;                                        // 0x562
    bool mKamikazeAttack;                                           // 0x563
    bool mStealthKamikazeAttack;                                    // 0x564
    bool mFirstShot;                                                // 0x565
    bool mMovingToAttackRange;                                      // 0x566
    bool mUseVehicleExtentsForAccuracy;                             // 0x567
    bool mUseDestroyObjectFiringLocation;                           // 0x568
    bool mHasDestroyObjectLOS;                                      // 0x569
    bool mNeedLOSToDestroyObjectToShoot;                            // 0x56A
    bool mStrafeLeft;                                               // 0x56B
    bool mDodgeMelee;                                               // 0x56C
    bool mRequestTaunt;                                             // 0x56D
    bool mUseFlankAnimation;                                        // 0x56E
    bool mStimulusHandled;                                          // 0x56F
    bool mStimulusExpired;                                          // 0x570
    bool mStimulusReadOnly;                                         // 0x571
    bool mTemporaryHighPriorityRequestPending;                      // 0x572
    bool mAINeedsRegularFullUpdate;                                 // 0x573
    bool mCanShootAtInteriorsFromHelicopter;                        // 0x574
};