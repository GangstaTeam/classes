//  Size:           0x84
//  Total Size:     0x12C

class StatePropObject : public GameSimObject
{
public:
    void* __StatePropEngineListenerVfptr;                       // 0xA8
    DBKey mHealthPostKey;                                       // 0xAC
    char* mInitialStateName;                                    // 0xB0
    core::Key mInitialStateUID;                                 // 0xB4
    const char* mModelName;                                     // 0xB8
    const char* mStatePropTemplateName;                         // 0xBC
    ScriptObjectPointer<StatePropTemplate*> mStatePropTemplate; // 0xC0
    int mRoomIndex;                                             // 0xC4
    StatePropEngine* mEngineObject;                             // 0xC8
    StatePropPersistentState mPersistentState;                  // 0xCC
    char* mSoundPoiTemplate;                                    // 0xD8
    int mCollisionBehaviourMask;                                // 0xDC
    float mPriorityScale;                                       // 0xE0
    int mPickupValue;                                           // 0xE4
    IDamageListener* mDamageListener;                           // 0xE8
    IDamageStateListener* mDamageStateListener;                 // 0xEC
    StatePropDynamicBehaviourProvider* mDynamicBehaviours;      // 0xF0
    SoundPoi mSoundPoi;                                         // 0xF4
    SoundManager::SoundPlayerHandle* mSoundPlayerHandle;        // 0x108
    float mTimeLeftUntilDestructionMS;                          // 0x10C
    math::Vector mScale;                                        // 0x110
    EcopropWakeUpData* mpWakeUpData;                            // 0x11C
    unsigned int mLightHandle;                                  // 0x120
    unsigned int mCameraFadeOutIsActive : 2;                    // 0x124
    unsigned int mCameraFadeOutLevel : 8;                       // 0x124
    unsigned intmTintValue : 4;                                 // 0x125
    bool mToBeCulled : 1;                                       // 0x128
    bool mEngineCreated : 1;                                    // 0x128
    bool mSleepingPre : 1;                                      // 0x128
    bool mSleepingPost : 1;                                     // 0x128
    bool mToBeDeleted : 1;                                      // 0x128
    bool mSuppressEngineVisibility : 1;                         // 0x128
    bool mEnginePhysicsEnabled : 1;                             // 0x128
    bool mSuppressEngineCollision : 1;                          // 0x128
    bool mIsInstanced : 1;                                      // 0x129
    bool mWakeUpPostPermanently : 1;                            // 0x129
    bool mIsMissingResource : 1;                                // 0x129
    bool mWasWokenUpOnRadius : 1;                               // 0x129
    bool mDeletedByParentInstance : 1;                          // 0x129
    bool mRegisteredForStateCallbacks : 1;                      // 0x129
    bool mHighPriorityForCuller : 1;                            // 0x129
    bool mCarriedByPlayer : 1;                                  // 0x129
    bool mCarriedObjectIsColliding : 1;                         // 0x12A
    bool mInTargetSet : 1;                                      // 0x12A
    bool mMarkedAsTarget : 1;                                   // 0x12A
    bool mDoNotCull : 1;                                        // 0x12A
    bool mIsWeapon : 1;                                         // 0x12A
    bool mHasDynamicLight : 1;                                  // 0x12A
    bool mHasScriptContext : 1;                                 // 0x12A
    bool mRemoveInNIS : 1;                                      // 0x12A
};