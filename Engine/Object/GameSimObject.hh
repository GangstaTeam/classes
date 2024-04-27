//  Size:           0x34
//  Total Size:     0xA8

class GameSimObject : public GameObject
{
public:
    char _Pad0x74[28];                          // 0x74
    ScriptObject *mSpawner;                     // 0x90
    char _Pad0x98[4];                           // 0x94
    uint8_t m_SpawnUsage;                       // 0x98
    char _Pad0x99[11];                          // 0x99
    bool m_IsInvincible;                        // 0xA4
    bool m_UnknownFlag0 : 1;                    // 0xA5
    bool m_Visible : 1;                         // 0xA5
    bool m_UnknownFlag2 : 1;                    // 0xA5
    bool m_UnknownFlag3 : 1;                    // 0xA5
    bool m_UnknownFlag4 : 1;                    // 0xA5
    bool m_UnknownFlag5 : 1;                    // 0xA5
    bool m_UnknownFlag6 : 1;                    // 0xA5
    bool m_UnknownFlag7 : 1;                    // 0xA5
    char _Pad0xA6[2];                           // 0xA6
};