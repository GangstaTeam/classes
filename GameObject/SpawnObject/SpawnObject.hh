//  Size:           0x4
//  Total Size:     0x78

class SpawnObject : public GameObject
{
public:
    short mSpawnSpeed;            // 0x74
    char mCleanupPolicy;          // 0x76
    bool mEnabled : 1;            // 0x77
    bool mIsMissionObject : 1;    // 0x77
    bool mIsEventObject : 1;      // 0x77
    bool mIsMissionCritical : 1;  // 0x77
    bool mFlaggedForDeletion : 1; // 0x77
    bool mLockedOnSpawn : 1;      // 0x77
};