//  Size:           0x20
//  Total Size:     0x44

class VibeTemplate : public Template
{
public:
    int mPriority;      // 0x24
    int mPulse1TimeMS;  // 0x28
    float mPulse1Gain1; // 0x2C
    float mPulse1Gain2; // 0x30
    int mPulse2TimeMS;  // 0x34
    float mPulse2Gain1; // 0x38
    float mPulse2Gain2; // 0x3C
    bool mLoop;         // 0x40
};