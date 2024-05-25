//  Size:           0x18
//  Total Size:     0x38

class AITask : public ScriptObject
{
public:
    ScriptObjectPointer<CharacterObject*> mCharacter; // 0x20
    ScriptObjectPointer<AIBehavior*> mAIBehavior;     // 0x24
    int mWeight;                                      // 0x28
    int mMaxPossibleWeight;                           // 0x2C
    int mCharacterID;                                 // 0x30
    bool mDisabled;                                   // 0x34
    int8_t mMaxAlertStatus;                           // 0x35
    int8_t mMinAlertStatus;                           // 0x36
    bool mInVehicleTask : 1;                          // 0x37
    bool mAmbientGazeAllowed : 1;                     // 0x37
};