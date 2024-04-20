//  Size:           0x24

class GenericAnimation
{
public:
    void* vfptr;                          // 0x0
    FEObjectGroup* mObjectGroup;          // 0x4
    float mCurrentValue;                  // 0x8
    float mStartValue;                    // 0xC
    float mTargetValue;                   // 0x10
    float mAnimationTime;                 // 0x14
    float mElapsedTime;                   // 0x18
    bool mUpdate;                         // 0x1C
    EGenericAnimationMode mAnimationMode; // 0x20
};