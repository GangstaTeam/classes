//  Size:           0x14
//  Total Size:     0x4C

class AITask_CodeAbstract : public AITask
{
public:
    enum EPhysicalModeSynch
    {
        EPhysicalModeSynch_SYNCHING,
        EPhysicalModeSynch_SYNCHED
    };

    container::ArrayDynamic CapabilityModuleArray; // 0x38
    EPhysicalModeSynch mPhysicalModeSynch : 8;     // 0x48
    EPhysicalModeRules mPhysicalModeRules : 8;     // 0x48
};