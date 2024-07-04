//  Size:           0xAC
//  Total Size:     0xEC

class VehicleTemplate : public StreamedTemplate
{
public:
    VehicleAttributes mAttributes;                                                         // 0x40
    char* mArtTemplateName;                                                                // 0x54
    char* mPlayerPhysicsTemplateName;                                                      // 0x58
    char* mAIPhysicsTemplateName;                                                          // 0x5C
    char* mDamagePropertiesName;                                                           // 0x60
    char* mCharacterEntryTemplateName;                                                     // 0x64
    StringTableEntry mCameraPropertiesName[3];                                             // 0x68
    StringTableEntry mCameraPropertiesCombatName;                                          // 0x74
    char* mTransmissionPropertiesName;                                                     // 0x78
    char* mDamagePropagationPropertiesName;                                                // 0x7C
    char* mZoneDamagePropertiesName;                                                       // 0x80
    char* mZoneEffectPropertiesName;                                                       // 0x84
    char* mWaterSprayPropertiesName;                                                       // 0x88
    char* mAITuneablesTemplateName;                                                        // 0x8C
    ScriptObjectPointer<VehicleArtTemplate*> mArtTemplate;                                 // 0x90
    ScriptObjectPointer<VehiclePhysicsTemplate*> mPlayerPhysicsTemplate;                   // 0x94
    ScriptObjectPointer<VehiclePhysicsTemplate*> mAIPhysicsTemplate;                       // 0x98
    ScriptObjectPointer<VehicleDamageProperties*> mDamageProperties;                       // 0x9C
    ScriptObjectPointer<VehicleCharacterEntryTemplate*> mCharacterEntryTemplate;           // 0xA0
    ScriptObjectPointer<VehicleCameraProperties*> mCameraProperties[3];                    // 0xA4
    ScriptObjectPointer<VehicleCameraProperties*> mCameraPropertiesCombat;                 // 0xB0
    ScriptObjectPointer<VehicleDamageTransmitProperties*> mTransmissionProperties;         // 0xB4
    ScriptObjectPointer<VehicleDamagePropagationProperties*> mDamagePropagationProperties; // 0xB8
    ScriptObjectPointer<VehicleZoneDamagePropertiesCollection*> mZoneDamageProperties;     // 0xBC
    ScriptObjectPointer<VehicleZoneEffectProperties*> mZoneEffectProperties;               // 0xC0
    ScriptObjectPointer<VehicleWaterSprayProperties*> mWaterSprayProperties;               // 0xC4
    ScriptObjectPointer<VehicleAITuneablesTemplate*> mAITuneablesTemplate;                 // 0xC8
    bool mTargetable;                                                                      // 0xCC
    bool mCanShootFromVehicle;                                                             // 0xCD
    char* mSoundName;                                                                      // 0xD0
    CVLoadObject* mRequiredDriver;                                                         // 0xD4
    VehicleWaterSprayLocatorAttributes mWaterSprayLocatorAttributes;                       // 0xD8
    VehicleExhaustLocatorAttributes mExhaustLocatorAttributes;                             // 0xE4
};