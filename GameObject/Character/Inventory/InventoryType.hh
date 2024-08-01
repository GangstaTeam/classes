//  Size:           0xC
//  Total Size:     0x4C

class InventoryType : public GameGroup
{
public:
    const char* m_InvType;   // 0x40
    int m_MaxWeight;         // 0x44
    uint32_t m_TypeBitField; // 0x48
};