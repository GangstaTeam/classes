//  Size:           0x124

class WheeledVehicleEngine
{
public:
    VehicleEngine* mVehicleEngine;                  // 0x0

    WheeledVehicleIntention m_Intention;            // 0x8
    float m_fMaxWheelTurnAngle;                     // 0x20

    float m_fStoppedTimer;                          // 0x38
};