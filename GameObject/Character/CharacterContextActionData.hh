//  Size:           0x20

class CharacterContextActionData
{
public:
    CharacterContextType mType;                                 // 0x0
    math::Vector mExitPosition;                                 // 0x4
    const VehicleEntryPointAttributes* mEntryPoint;             // 0x10
    int mEntryJointIndex;                                       // 0x14
    uint32_t mMountedWeaponID;                                  // 0x18
    ScriptObjectPointer<VehicleObject*> mVehicleObject;         // 0x1C
};