//  Size: * Unknown*

class CharacterObject
{
public:
    int m_AlertStatus;                      // 0xAC
    int mFriendOrFoe;                       // 0xB0

    int m_Health;                           // 0x15C
    int m_MaxHealth;                        // 0x160

    bool m_KnockedDown;                     // 0x165

    EDamageMagnitude m_HitByACar;           // 0x168

    ESkeletonJoint m_DamageJoint;           // 0x178
    int m_DamageWeapon;                     // 0x17C
    int m_DamageDirection;                  // 0x180

    Character* m_CharacterEngineObject;     // 0x1AC
 
    Swim m_SwimState;                       // 0x2DC
    PilotState m_PilotState;                // 0x2E8
};