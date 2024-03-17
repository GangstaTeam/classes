//  Size:           0x28

class FlowTime
{
public:   
    unsigned int uMicroseconds;                 // 0x0
    unsigned int uMilliseconds;                 // 0x4
    float fMilliseconds;                        // 0x8
    float fSeconds;                             // 0xC
    unsigned int uRawMicroseconds;              // 0x10
    unsigned int uRawMilliseconds;              // 0x14
    float fRawMilliseconds;                     // 0x18
    unsigned int fRawSeconds;                   // 0x1C
    unsigned int m_uRawMilisecondsFraction;     // 0x20
    unsigned int m_uMilisecondsFraction;        // 0x24
};