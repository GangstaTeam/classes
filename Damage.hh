//  Size: 0x34

struct Damage
{
    DamageType m_Type;                      // 0x0
    math::Vector m_ExplosionImpulse;        // 0x4
    int m_Damage;                           // 0x10
    EDamageMagnitude m_DamageMagnitude;     // 0x14
    pure3d::Name m_HitAnim;                 // 0x18
    pure3d::Name m_DeathAnim;               // 0x1C
    int m_HitPriority;                      // 0x20
    uint32_t m_KillerID;                    // 0x24
    int m_WeaponType;                       // 0x28
    int m_WeaponID;                         // 0x2C
    bool m_KillMe;                          // 0x30
};
