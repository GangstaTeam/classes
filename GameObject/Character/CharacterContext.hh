//  Size:           0x68

class CharacterContext
{
public:
    void* vfptr;                                      // 0x0
    CharacterContextActionData m_Data[2];             // 0x4
    int m_NextDataIndex;                              // 0x44
    int m_ContextPropertiesIterator;                  // 0x48
    CharacterObject* m_CharacterObject;               // 0x4C
    uint32_t m_PlayerLockTicket;                      // 0x50
    int m_InternalPromptHUDMessage;                   // 0x54
    uint32_t m_MessageSuppressionMask;                // 0x58
    uint32_t m_LastAppliedMessageSuppressionMask;     // 0x5C
    float m_ClosestBoatDistanceSqr;                   // 0x60
    bool m_CloseToShore;                              // 0x64
};
