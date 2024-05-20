//  Size:           0x1C
//  Total Size:     0x3C

class ActionMap : public ScriptObject
{
public:
    ActionMap* m_pNext;                         // 0x20
    ActionMap* m_pPrev;                         // 0x24
    bool m_bBlockLocalEvents;                   // 0x28
    bool m_bBlockAllEvents;                     // 0x29
    bool m_bPushed;                             // 0x2A
    smVector m_Events;                          // 0x2C
};