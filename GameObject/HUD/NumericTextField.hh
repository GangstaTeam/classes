//  Size:           0x60

class NumericTextField
{
public:
    void* vfptr;               // 0x0
    FETextObject* mTextObject; // 0x4
    int mCurrentValue;         // 0x8
    int mTransitionDifference; // 0xC
    int mTargetValue;          // 0x10
    bool mUpdating;            // 0x14
    bool mIsPlayingSound;      // 0x15
    char* mPrefix;             // 0x18
    char* mSuffix;             // 0x1C
    int mDigits[15];           // 0x20
    int mLastSigDigUpdated;    // 0x5C
};