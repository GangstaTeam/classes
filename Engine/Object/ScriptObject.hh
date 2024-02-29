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
    bool m_UnknownFlag0 : 1;                    // 0x1E
    bool m_UnknownFlag1 : 1;                    // 0x1E
    bool m_UnknownFlag2 : 1;                    // 0x1E
    bool m_UnknownFlag3 : 1;                    // 0x1E
    bool m_UnknownFlag4 : 1;                    // 0x1E
    bool m_UnknownFlag5 : 1;                    // 0x1E
    bool m_UnknownFlag6 : 1;                    // 0x1E
    bool m_Sleeping : 1;                        // 0x1E
    bool m_UnknownFlag8 : 1;                    // 0x1F
    bool m_UnknownFlag9 : 1;                    // 0x1F
    bool m_UnknownFlag10 : 1;                   // 0x1F
    bool m_UnknownFlag11 : 1;                   // 0x1F
    bool m_UnknownFlag12 : 1;                   // 0x1F
    bool m_UnknownFlag13 : 1;                   // 0x1F
    bool m_UnknownFlag14 : 1;                   // 0x1F
    bool m_UnknownFlag15 : 1;                   // 0x1F
};