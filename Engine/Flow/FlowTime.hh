//  Size:           0x28

class FlowTime
{
public:   
    uint32_t uMicroseconds;                 // 0x0
    uint32_t uMilliseconds;                 // 0x4
    float fMilliseconds;                    // 0x8
    float fSeconds;                         // 0xC
    uint32_t uRawMicroseconds;              // 0x10
    uint32_t uRawMilliseconds;              // 0x14
    float fRawMilliseconds;                 // 0x18
    uint32_t fRawSeconds;                   // 0x1C
    uint32_t uRawMilisecondsFraction;       // 0x20
    uint32_t uMilisecondsFraction;          // 0x24
};