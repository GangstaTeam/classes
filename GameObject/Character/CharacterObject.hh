//  Size:           0x384
//  Total Size:     0x430

class CharacterObject : public InventoryOwner
{
public:
    int mAlertStatus;                       // 0xAC
    int mFriendOrFoe;                       // 0xB0
    CharacterTemplate* mCharacterTemplate;  // 0xB4

    CharacterContext* mCharacterContext;    // 0xF8

    int mHealth;                            // 0x15C
    int mMaxHealth;                         // 0x160

    bool m_KnockedDown;                     // 0x165

    EDamageMagnitude mHitByACar;            // 0x168

    ESkeletonJoint m_DamageJoint;           // 0x178
    int m_DamageWeapon;                     // 0x17C
    int m_DamageDirection;                  // 0x180

    uint32_t mLastVehicleID;                // 0x190
    uint32_t mVehicleCollidingWithID;       // 0x194

    Character* mCharacterEngineObject;      // 0x1AC
 
    WeaponState mWeaponState;               // 0x2AC
    Swim mSwimState;                        // 0x2DC
    PilotState m_PilotState;                // 0x2E8

    bool mIsNISControlled;                  // 0x29D
   
    SharedInt mCurrentSampleFinishTime;     // 0x3A8

    bool mHasSampleTimingInfoToAssign;      // 0x3B4
};