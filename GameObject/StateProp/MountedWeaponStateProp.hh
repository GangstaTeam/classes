//  Size:           0x28
//  Total Size:     0x188

class MountedWeaponStateProp : public WeaponStateProp
{
public:
    bool mNPCMountable;                                      // 0x160
    ScriptObjectPointer<VehicleObject*> mVehicleObject;      // 0x164
    ScriptObjectPointer<CharacterObject*> mNPCTryingToMount; // 0x168
    math::Vector mExitPosition;                              // 0x16C
    float mRotationArcDegrees;                               // 0x178
    float mHalfRotationArcRadians;                           // 0x17C
    bool m_AttachedToVehicle;                                // 0x180
    MortarTemplate* mMortarTemplate;                         // 0x184
};