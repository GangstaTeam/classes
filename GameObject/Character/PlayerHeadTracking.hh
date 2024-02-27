//  Size:           0x8
//  Total Size:     0x38

class PlayerHeadTracking : public GameSetObject
{
public:
    unsigned int mLastAcquiredTargetID;         // 0x30
    unsigned int mKeepLastTargetUntil;          // 0x34
};