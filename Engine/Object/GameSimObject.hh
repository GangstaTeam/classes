//  Size:           0x34
//  Total Size:     0xA8

class GameSimObject : public GameObject
{
public:
    math::Vector m_vSpawnPosition;              // 0x74
    math::Vector m_vSpawnDirection;             // 0x80
    float m_fSpawnRoll;                         // 0x8C
    SpawnObject *mSpawner;                      // 0x90

    uint8_t m_SpawnUsage;                       // 0x98

    uint8_t m_uInvincible;                      // 0xA4
    bool m_UnknownFlag0 : 1;                    // 0xA5
    bool m_Visible : 1;                         // 0xA5
    bool m_UnknownFlag2 : 1;                    // 0xA5
    bool m_UnknownFlag3 : 1;                    // 0xA5
    bool m_UnknownFlag4 : 1;                    // 0xA5
    bool m_UnknownFlag5 : 1;                    // 0xA5
    bool m_UnknownFlag6 : 1;                    // 0xA5
    bool m_UnknownFlag7 : 1;                    // 0xA5
};