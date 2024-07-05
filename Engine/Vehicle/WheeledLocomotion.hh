//  Size:           0x14
//  Total Size:     0x1C

class WheeledLocomotion : public VehicleLocomotion
{
public:
    WheeledVehicleEngine* m_pWheeledEngine; // 0x8
    int m_iNumWheels;                       // 0xC
    WheelController* m_pWheels;             // 0x10
};