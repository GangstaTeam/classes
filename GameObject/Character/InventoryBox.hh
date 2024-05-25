//  Size:           0x8
//  Total Size:     0x48

class InventoryOwner : public GameGroup
{
public:
    int m_SlotCount;                 // 0x40
    const char* m_BaseInventoryType; // 0x44
};