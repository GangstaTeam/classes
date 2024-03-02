//  Size:           0x1C

class TargetSetModule
{
public:
    ScriptObjectPointer<TargetSet*> m_pTargetSet;   // 0x0
    unsigned int m_ChosenTargetID;                  // 0x4
    unsigned int m_ChosenTargetTimeStamp;           // 0x8
    unsigned int m_OverrideStartTime;               // 0xC
    unsigned int m_CmdSeqID;                        // 0x10
    int m_PickTargetType;                           // 0x14
    bool m_bOverrideChosenTarget;                   // 0x18
};