//  Size:           0x1C
//  Total Size:     0x20

class ScriptObject : public ConsoleObject
{
public:
    const char *m_KeyStr;                       // 0x4
    char _Pad0x8[4];                            // 0x8
    core::Key m_Key;                            // 0xC
    void *m_UnknownPtr0;                        // 0x10
    UnknownScriptObjectEntry *m_UnknownPtr1;    // 0x14
    char _Pad0x18[4];                           // 0x18
    uint16_t m_ParentGroupID;                   // 0x1C
    uint16_t m_UnknownUInt1;                    // 0x20
};