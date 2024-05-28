//  Size:           0x10
//  Total Size:     0x30

class VehicleAI : public ScriptObject
{
public:
    uint32_t mVehicleID;                // 0x20
    uint32_t mEngageTargetID;           // 0x24
    float mDesiredSpeedKmh;             // 0x28
    VehicleEngine::PhysicsLODType mLOD; // 0x2C
};