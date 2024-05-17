//  Size:           0x28

class StreamPackage
{
public:
    const char* m_szName;               // 0x0
    StreamClient* m_pClient;            // 0x4
    void* m_pClientData;                // 0x8
    StreamSlot* m_pSlot;                // 0xC

    uint16_t m_PrerequisiteIndex;       // 0x1A
    InventoryId m_InventoryId;          // 0x1C

    int m_State;                        // 0x20

    bool m_bHasName : 1;                // 0x24 (2)

    bool m_bConditional : 1;            // 0x24 (16)

    uint8_t m_LoadPriority;             // 0x26
};