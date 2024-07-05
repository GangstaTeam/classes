//  Size:           0x20
//  Total Size:     0x40

class WheeledVehicleCoverProperties : public ScriptObject
{
public:
    CoverObject::EType mFrontType; // 0x20
    CoverObject::EType mRearType;  // 0x24
    float mDistFromFront;          // 0x28
    float mDistFromRear;           // 0x2C
    float mFrontAngleMinDegrees;   // 0x30
    float mFrontAngleMaxDegrees;   // 0x34
    float mRearAngleMinDegrees;    // 0x38
    float mRearAngleMaxDegrees;    // 0x3C
};