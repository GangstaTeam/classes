//  Size:           0x17C
//  Total Size:     0x1F4

class GenericSpawnObject : public SpawnObject
{
public:
    enum ELoadPolicy
    {
        ELoadPolicy_Always,
        ELoadPolicy_Proximity,
        ELoadPolicy_CallFunction,
        ELoadPolicy_MAX
    };

    enum ESpawnPolicy
    {
        ESpawnPolicy_Always,
        ESpawnPolicy_Proximity,
        ESpawnPolicy_MAX
    };

    struct TimeOfDayMultiplier
    {
        uint8_t turnOnTime;
        uint8_t turnOffTime;
        uint8_t multiplier;
    };

    ELoadPolicy mLoadPolicy;                          // 0x78
    ESpawnPolicy mSpawnPolicy;                        // 0x7C
    int mMaxCharacterTemplatesLoaded;                 // 0x80
    int mMaxVehicleTemplatesLoaded;                   // 0x84
    container::ArrayDynamic mLocators;                // 0x88
    container::ArrayDynamic mCharacterTemplates;      // 0x98
    container::BitField* mAcquiredCharacterTemplates; // 0xA8
    container::ArrayDynamic mVehicleTemplates;        // 0xAC
    container::BitField* mAcquiredVehicleTemplates;   // 0xBC
    container::ArrayDynamic mWeaponTemplates;         // 0xC0

    union                                             // 0xD0
    {
        SpawnTemplateGroup* mSpawnTemplateGroup;
        core::Key mSpawnTemplateGroupName;
    };

    int mSpawnTemplateGroupUsageCount;                // 0xD4

    union                                             // 0xD8
    {
        SpawnTriggerObject* mSpawnTriggerObject;
        core::Key mSpawnTriggerObjectName;
    };

    float mResourceLoadDistance;                      // 0xDC
    float mSpawnDistance;                             // 0xE0
    float mMinimumSpawnDistance;                      // 0xE4
    bool mAcquiredResources;                          // 0xE8
    int mTotalNumToSpawn;                             // 0xEC
    int mSpawnCount;                                  // 0xF0
    int mAliveSpawnCount;                             // 0xF4
    int mCoexistingCount;                             // 0xF8
    int mSpawnCountBeforeRespawn;                     // 0xFC
    float mTimeBeforeRespawn;                         // 0x100
    uint32_t mRespawnTimer;                           // 0x104
    bool mDoneRespawning;                             // 0x108
    NestSpawnObject* mNestSpawnObject;                // 0x10C
    TimeOfDayMultiplier mTimeOfDayMultiplier[4];      // 0x110
    int mTimeOfDayMultiplierCount;                    // 0x11C
    float mCurrentTimeOfDayMultiplier;                // 0x120
    int mLastLocatorTested;                           // 0x124
    const char* mSpawnName;                           // 0x128
    const char* mSpawnClass;                          // 0x12C
    const char* mSpawnScriptClass;                    // 0x130
    const char* mSpawnTeam;                           // 0x134
    uint8_t mIdleBehaviour;                           // 0x138
    uint8_t mCombatBehaviour;                         // 0x139
    bool mAllowOnCameraSpawning;                      // 0x13A
    bool mUseUniqueSuffix;                            // 0x13B
    int mPaletteIndex;                                // 0x13C
    int mPassengerCount;                              // 0x140
    SpawnObjectData mPassengerData[6];                // 0x144
    bool mDeleteWhenFinished;                         // 0x1EC
    bool mDeleteWhenKilled;                           // 0x1ED
    bool mDeleteWhenCulled;                           // 0x1EE
    bool mAllowSpawningOverWater;                     // 0x1EF
    bool mUseAmbientPriority;                         // 0x1F0
    bool mUseGangPriority;                            // 0x1F1
    bool mUseCopPriority;                             // 0x1F2
    bool mSpawnInPairs;                               // 0x1F3
};