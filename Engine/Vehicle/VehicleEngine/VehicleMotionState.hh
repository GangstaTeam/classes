//  Size:           0x9C

class VehicleMotionState
{
public:
    math::Vector m_fVelocityCM;                 // 0x0
    float m_fSpeedCM;                           // 0xC
    math::Vector m_vecLocalAxisSpeeds;          // 0x10
    math::Vector m_vecLocalAxisSpeedsKmh;       // 0x1C

    math::Vector m_vecHeadsUpAngularSpeeds;     // 0x88

    float m_fHorizontalAngleOfIncidence;        // 0x98
};