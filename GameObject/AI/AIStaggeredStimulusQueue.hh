//  Size:           0x34

class AIStimulusEventAbstract
{
public:
    AIBehavior* m_pOwner;          // 0x0
    container::Deque m_Queue;      // 0x4
    container::Deque m_DeathQueue; // 0x18
    int m_TimeLastPromoted;        // 0x2C
    int m_TimeLastReceived;        // 0x30
};