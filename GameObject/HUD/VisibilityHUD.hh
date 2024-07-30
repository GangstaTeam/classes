//  Size:           0x14
//  Total Size:     0x78

class VisibilityHUD : public HUDElement2
{
public:
    FELayerObject* m_VisibilityLayer;           // 0x64
    FEP3DObject* m_VisibilityMeterFrame;        // 0x68
    pure3d::FrameController* m_FrameController; // 0x6C
    int m_CurrentPoints;                        // 0x70
    short m_MaxMeterPoints;                     // 0x74
};