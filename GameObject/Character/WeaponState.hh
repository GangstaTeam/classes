//  Size:           0x30

class WeaponState
{
public:
    enum EWeaponState
    {
        WEAPONSTATE_Idle = 0x0,
        WEAPONSTATE_Fire,
        WEAPONSTATE_MeleeAttack,
        WEAPONSTATE_Block,
        WEAPONSTATE_Execution,
        WEAPONSTATE_Reloading,
        WEAPONSTATE_SwitchWeapon,
        WEAPONSTATE_WeaponButt
    };


    unsigned int mWeaponInventorySetID;             // 0x0
    ScriptObjectPointer mWeapon;                    // 0x4
    CharacterObject *mCharacterObject;              // 0x8
    EWeaponState mWeaponState;                      // 0xC
    unsigned int mDelayFireRequestTimer;            // 0x10
    unsigned int mLastFireTimer;                    // 0x14
    unsigned int mWeaponOutSinceTime;               // 0x18
    unsigned int m_VehicleReloadTimer;              // 0x1C
    unsigned int mLastWeaponUsedFromInventoryID;    // 0x20
    short mFireButtonState;                         // 0x24
    short mAlternateFireButtonState;                // 0x26
    bool mReloadRequest;                            // 0x28
    bool mFireRequest;                              // 0x29
    bool mAlternateFireRequest;                     // 0x2A
    bool mVehicleWeaponArmed;                       // 0x2B
    bool mInfiniteAmmo;                             // 0x2C
    bool mSoundExecutionMixPushed;                  // 0x2D
};