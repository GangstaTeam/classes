//  Size:           0xC
//  Total Size:     0x10

class StatePropSnapToWaterBehaviour : public StatePropBehaviour
{
public:
    StatePropEngine* mStatePropEngine;                 // 0x4
    const StatePropSnapToWaterAttributes* mAttributes; // 0x8
    bool mEnabled;                                     // 0xC
};