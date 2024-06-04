//  Size:           0x34
//  Total Size:     0xA8

class GameSimObject : public GameObject
{
public:

    ScriptObject *mSpawner;                     // 0x90

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