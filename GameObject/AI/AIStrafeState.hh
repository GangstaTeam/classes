//  Size:           0x24
//  Total Size:     0x34

class AIStrafeState : public StateMachine
{
public:
    AIBehavior* m_pAI;                                          // 0x10
    ProcessData* m_pProcessData;                                // 0x14
    float m_fTimer;                                             // 0x18
    float m_fUnobstructedTimer;                                 // 0x1C
    float m_fDuration;                                          // 0x20
    math::Vector m_vStrafeVector;                               // 0x24
    bool m_bStrafeLeft;                                         // 0x30
    bool m_bSwitchedDirections;                                 // 0x31
};