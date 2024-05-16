//  Size:           0x48
//  Total Size:     0xC0

class CallForVehicleSpawnObject : public SpawnObject
{
public:
    SpawnObjectData mVehicleSpawnData;  // 0x78
    SpawnObjectData mDriverSpawnData;   // 0x94
    CVLoadObject* mVehicleTemplateInfo; // 0xB0
    CVLoadObject* mDriverTemplateInfo;  // 0xB4
    int mFailedCounter;                 // 0xB8
    bool mAquiredUsage;                 // 0xBC
};