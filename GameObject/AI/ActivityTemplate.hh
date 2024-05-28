//  Size:           0x2C
//  Total Size:     0x5C

class ActivityTemplate : public GameSetObject
{
public:
    pure3d::Name mSpawnInitialFightNode;      // 0x30
    pure3d::Name mSpawnInitialAnimationState; // 0x34
    RDJString mInteractMethod;                // 0x38
};