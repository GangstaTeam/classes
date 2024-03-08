//  Size:           0x558
//  Total Size:     0x578

class AIBehavior : public ScriptObject
{
public:
    void* __LOSUpdateListenerVfptr;                                 // 0x20
    ScriptObjectPointer<GameSet*> mProjectileSet;                   // 0x24
    unsigned int mCharacterID;                                      // 0x28
    
    float mTunableStrafe;                                           // 0x70
    float mTunableKamikaze;                                         // 0x74
    float mTunableCoverReaction;                                    // 0x78
    float mTunableComposure;                                        // 0x7C
    float mTunableSightDistance;                                    // 0x80
    ScriptObjectPointer<CharacterObject*> mCharacter;               // 0x84
    smVector<CharacterLOSInfo*> mCharacterLOSTable;                 // 0x88

    
    AIStrafeState mStrafeState;                                     // 0x120

    ScriptObjectPointer<CharacterObject*> mEngageTarget;            // 0x224

    unsigned int mTargetToEngageID;                                 // 0x24C
    ScriptObjectPointer<CharacterObject*> mTargetToEngage;          // 0x250

    AICoverState mCoverState;                                       // 0x2AC

    ScriptObjectPointer<GameObject*> mDestroyObject;                // 0x31C
    
    int mTauntAnimationRequestID;                                   // 0x368

    float mAverageMicrosecondsForUpdate;                            // 0x430
    unsigned char mDefaultBasePriority;                             // 0x434
    unsigned char mBasePriority;                                    // 0x435
    int mLastFullUpdateTime;                                        // 0x438
    
    
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
};