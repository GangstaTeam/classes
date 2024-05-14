//  Size:           0x9C
//  Total Size:     0xCC

class TODObject : public GameSetObject
{
public:
    bool mPauseTimeOfDay;            // 0x30
    float mTimeOfDaySpeed;           // 0x34
    uint32_t mHours;                 // 0x38
    uint32_t mMinutes;               // 0x3C
    float mPrelitLumTimes[6];        // 0x40
    int mHoldTimeLength[6];          // 0x58
    int mTransitionTimeLength[6];    // 0x70
    char* mAttachedClearEnvParam[6]; // 0x88
    char* mAttachedRainyEnvParam[6]; // 0xA0
    bool mEnableRaining;             // 0xB8
    float mRainPercentage;           // 0xBC
    int mRainStartTransitFrames;     // 0xC0
    int mRainEndTransitFrames;       // 0xC4
    bool mApplyEnvDataOnly;          // 0xC8
};