//  Size:           0x1CC
//  Total Size:     0x244

class CharacterInVehicleSpawnObject : public SpawnObject
{
public:
    SpawnObjectData mVehicleSpawnData;           // 0x78
    CVLoadObject* mVehicleTemplateInfo;          // 0x94
    VehicleObject* mVehicleObject;               // 0x98
    bool mVehicleHasAcquiredResources;           // 0x9C
    VehiclePersistentHealthState mVehicleHealth; // 0xA0
    math::Vector mVehiclePosition;               // 0x11C
    math::Vector mVehicleDirection;              // 0x128
    SpawnObjectData mCharacterSpawnData[4];      // 0x134
    CVLoadObject* mCharacterTemplateInfo[4];     // 0x1A4
    CharacterObject* mCharacterObject[4];        // 0x1B4
    bool mCharacterHasAcquiredResources[4];      // 0x1C4
    bool mCharacterInVehicle[4];                 // 0x1C8
    int mCharacterHealth[4];                     // 0x1CC
    math::Vector mCharacterPosition[4];          // 0x1DC
    math::Vector mCharacterDirection[4];         // 0x20C
    float mSpawnDistance;                        // 0x23C
    bool mRestoreHealth;                         // 0x240
};