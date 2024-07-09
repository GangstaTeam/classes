//  Size:           0x124

class WheeledVehicleEngine
{
public:
    VehicleEngine* mVehicleEngine;                  // 0x0
    WheeledVehicleAttributes* m_pVehicleAttributes; // 0x4
    WheeledVehicleIntention m_Intention;            // 0x8
    float m_fMaxWheelTurnAngle;                     // 0x20

    bool m_bWaterContact;                           // 0x2D

    float m_fWaterContactTimer;                     // 0x30
    float m_fFlippedTimer;                          // 0x34
    float m_fStoppedTimer;                          // 0x38

    PropSkidmarkAttributes* m_pSkidmarkAttributes;  // 0x58
};