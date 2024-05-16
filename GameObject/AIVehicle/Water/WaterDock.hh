//  Size:           0x18
//  Total Size:     0x24

class WaterDock : public pure3d::Entity
{
public:
    struct DockPoint
    {
        math::Vector2 m_Position;
        BoatObject* m_BoatObject;
    };

    math::Vector2 m_StartPosition;      // 0xC
    bool m_ForBoats;                    // 0x14
    DockPoint* m_DockPoints;            // 0x18
    int m_NumDockPoints;                // 0x1C
    bool m_Active;                      // 0x20
};