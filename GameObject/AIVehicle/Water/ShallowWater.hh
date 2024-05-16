//  Size:           0x24
//  Total Size:     0x30

class ShallowWater : public pure3d::Entity
{
public:
    WaterBoundary m_Boundary;    // 0xC
    WaterBoundary* m_Shorelines; // 0x2C
};