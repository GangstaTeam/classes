//  Size:           0xA4

#define AUTOTARGETLIST_Size 8

class AutoTargetList
{
public:
    struct TargetInfo
    {
        ScriptObjectPointer<GameSimObject*> pTarget;  // 0x0
        float distance;                               // 0x4
        float dot;                                    // 0x8
        bool updated;                                 // 0xC
        bool hasLOS;                                  // 0xD
    }; // Size: 0x10

    TargetInfo m_AutoTargetList[AUTOTARGETLIST_Size];           // 0x0
    TargetInfo* m_SortedAutoTargetList[AUTOTARGETLIST_Size];    // 0x80
    int m_NextTargetToCheckForLOS;                              // 0xA0
};