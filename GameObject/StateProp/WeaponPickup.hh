//  Size:           0xC
//  Total Size:     0x138

class WeaponPickup : public StatePropObject
{
public:
    bool m_PrimaryClipPopped;                                    // 0x12C
    bool m_SecondaryClipPopped;                                  // 0x12D
    WeaponTemplate *m_WeaponTemplate;                            // 0x130
    ScriptObjectPointer m_NPCTryingToPickup;                     // 0x134
};