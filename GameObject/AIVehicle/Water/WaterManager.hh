//  Size:           0x30

class WaterManager
{
public:
    container::ArrayDynamic<WaterObstacle*> m_WaterObstacleList; // 0x0
    container::ArrayDynamic<WaterDock*> m_WaterDockList;         // 0x10
    container::ArrayDynamic<ShallowWater*> m_ShallowWaterList;   // 0x20
};