//=======================================
//
//  Size: * Unknown*
//
//=======================================

class CharacterObject
{
public:
    int m_AlertStatus;                      // 0xAC
    int mFriendOrFoe;                       // 0xB0

    int m_Health;                           // 0x15C
    int m_MaxHealth;                        // 0x160

    ESkeletonJoint m_DamageJoint;           // 0x178
    int m_DamageWeapon;                     // 0x17C
    int m_DamageDirection;                  // 0x180

    Character* m_CharacterEngineObject;     // 0x1AC
};