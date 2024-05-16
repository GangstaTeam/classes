//  Size:           0x20

class WaterBoundary
{
public:
    WaterBoundary* m_WaterBoundarySibling; // 0x0
    math::Vector2 m_BoundingBoxLow;        // 0x4
    math::Vector2 m_BoundingBoxHigh;       // 0xC
    math::Vector2* m_Positions;            // 0x14
    int m_NumPositions;                    // 0x18
    bool m_IsInverted;                     // 0x1C
};