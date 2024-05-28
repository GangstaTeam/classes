//  Size:           0xC
//  Total Size:     0x3C

class InventoryObject : public GameSetObject
{
public:
    int m_InvCount;        // 0x30
    const char* m_InvName; // 0x34
    int m_InvType;         // 0x38
};