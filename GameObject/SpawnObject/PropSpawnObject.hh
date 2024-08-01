//  Size:           0x30
//  Total Size:     0xA8

class PropSpawnObject : public SpawnObject
{
public:
    enum ESpawnPolicy
    {
        ESpawnPolicy_OnSpawnerCreate,
        ESpawnPolicy_OnMissionStart,
        ESpawnPolicy_Manual,
        ESpawnPolicy_MAX
    };

    char* mSpawnName;                             // 0x78
    char* mSpawnScriptClass;                      // 0x7C
    char* mSpawnType;                             // 0x80
    int mRespawnCount;                            // 0x84
    float mRespawnTime;                           // 0x88
    ESpawnPolicy mSpawnPolicy;                    // 0x8C
    ScriptObjectPointer<StatePropObject*> mChild; // 0x90
    float mTimeUntilRespawn;                      // 0x94
    core::Key mMissionKey;                        // 0x98
    core::Key mPackageKey;                        // 0x9C
    int mSpawnCount;                              // 0xA0
    char mStage;                                  // 0xA4
    bool mEnabled : 1;                            // 0xA5
    bool mOnKilledPending : 1;                    // 0xA5
    bool mOnMissionStartPending : 1;              // 0xA5
    bool mRemoveFromListOnDelete : 1;             // 0xA5
};