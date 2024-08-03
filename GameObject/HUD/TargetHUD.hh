//  Size:           0xC0
//  Total Size:     0x128

class TargetHUD : public HUDElement2, public SubscriberInterface
{
public:
    enum EReticuleType
    {
        EReticuleType_UNDEFINED = -1,
        EReticuleType_PISTOL,
        EReticuleType_SMG,
        EReticuleType_RIFLE,
        EReticuleType_SHOTGUN,
        EReticuleType_HEAVY,
        EReticuleType_GRENADE,
        EReticuleType_MISSILE,
        EReticuleType_SNIPER,
        EReticuleType_NONE,
        EReticuleType_MAX
    };

    struct RageReticle
    {
        FESpriteObject* rageReticle;
        uint32_t id;
    };

    FEPageObject* mRagePage;             // 0x68
    FEPageObject* mTargetPage;           // 0x6C
    FELayerObject* mReticuleLayer;       // 0x70
    FELayerObject* mSniperLayer;         // 0x74
    FELayerObject* mGrenadeLayer;        // 0x78
    FELayerObject* mMissleLayer;         // 0x7C
    FESpriteObject* mReticules[2];       // 0x80
    FETextObject* mNoAmmoText;           // 0x88
    FELayerObject* mLockOnLayer;         // 0x8C
    FESpriteObject* mLockOnBrackets[4];  // 0x90
    GenericBarMeter* m_SniperBarMeter;   // 0xA0
    float mX;                            // 0xA4
    float mY;                            // 0xA8
    float mSecondaryX;                   // 0xAC
    float mSecondaryY;                   // 0xB0
    float mTargetHealthRatio;            // 0xB4
    ETargetHUDState mCurrentTargetState; // 0xB8
    EReticuleType mCurrentReticuleType;  // 0xBC
    RageReticle mRageReticle[8];         // 0xC0
    float mLockReticleCornersX[4];       // 0x100
    float mLockReticleCornersY[4];       // 0x110
    float mElapsedTime;                  // 0x120
    bool mNoAmmoBlink : 1;               // 0x124
    bool mRage : 1;                      // 0x124
    bool mOnCriticalZone : 1;            // 0x124
    bool mLockReticuleOnEnemy : 1;       // 0x124
    bool mSniperMode : 1;                // 0x124
};