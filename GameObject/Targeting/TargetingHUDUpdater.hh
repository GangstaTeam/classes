//  Size:           0xD8
//  Total Size:     0xF8

class TargetingHUDUpdater : public ScriptObject
{
public:
    bool mNewTarget;                           // 0x20
    Reticle mMainReticle;                      // 0x24
    math::Vector mSecondaryReticleOffset;      // 0x40
    Reticle mLockReticleCorners[4];            // 0x4C
    unsigned int m_NewTargetTimer;             // 0xBC
    float m_RightStickAtLockOnX;               // 0xC0
    float m_RightStickAtLockOnY;               // 0xC4
    int mLastAmmoCount;                        // 0xC8
    int mLastAmmoMaxCount;                     // 0xCC
    int mLastAltAmmoCount;                     // 0xD0
    int mLastAltAmmoMaxCount;                  // 0xD4
    math::Vector mTune_ReticleOffset;          // 0xD8
    math::Vector mTune_ReticleOffset_Vehicle;  // 0xE4
    float mTune_SecondaryReticleSpeed_NPC;     // 0xF0
    float mTune_SecondaryReticleSpeed_Vehicle; // 0xF4
};