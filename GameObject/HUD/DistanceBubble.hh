//  Size:           0x18
//  Total Size:     0x7C

class DistanceBubble : public HUDElement2
{
public:
    FEP3DObject* m_DistanceCircle; // 0x64
    char* m_DistanceCircleName;    // 0x68
    math::Vector m_CirclePosition; // 0x6C
    float m_Radius;                // 0x78
};