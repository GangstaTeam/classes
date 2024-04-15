//  Size:           0x34
//  Total Size:     0x160

class WeaponStateProp : public StatePropObject
{
public:
    enum PropState 
    {
            PROPSTATE_None,
            PROPSTATE_Idle,
            PROPSTATE_Firing,
            PROPSTATE_SecondaryFiring,
    };

    unsigned int mLastFireTime;                              // 0x12C
    unsigned int mAlternateLastFireTime;                     // 0x130
    unsigned int mNumTracers;                                // 0x134
    int m_ClipAmmoCount;                                     // 0x138
    int m_TotalAmmoCount;                                    // 0x13C
    int m_BurstCount;                                        // 0x140
    int m_AlternateClipAmmoCount;                            // 0x144
    int m_AlternateTotalAmmoCount;                           // 0x148
    const char* mWeaponTemplateName;                         // 0x14C
    WeaponTemplate *mTemplate;                               // 0x150
    ScriptObjectPointer<CharacterObject*> mCharacterObject;  // 0x154
    PropState mPropState;                                    // 0x158
    bool mDisabled;                                          // 0x15C
};