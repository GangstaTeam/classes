//  Size:           0x108
//  Total Size:     0x12C

class VehicleArtTemplate : public Template
{
public:
    VehicleArtAttributes mAttributes;                                           // 0x24
    VehicleArtModelAttributes mArtModelAttributes;                              // 0x34
    ScriptObjectPointer<VehicleBehaviourTemplate*> mPluginTemplates[5];         // 0xE4
    ScriptObjectPointer<VehicleZoneMeshProperties*> mZoneMeshProperties;        // 0xF8
    char* mShinyShaderPropertiesName;                                           // 0xFC
    char* mDullShaderPropertiesName;                                            // 0x100
    ScriptObjectPointer<VehicleShaderProperties*> mShinyShaderProperties;       // 0x104
    ScriptObjectPointer<VehicleShaderProperties*> mDullShaderProperties;        // 0x108
    char* mTargetingLocatorsName;                                               // 0x10C
    ScriptObjectPointer<VehicleTargetingLocatorProperties*> mTargetingLocators; // 0x110
    char* mPluginTemplateNames[5];                                              // 0x114
    char* mZoneMeshPropertiesName;                                              // 0x128
};