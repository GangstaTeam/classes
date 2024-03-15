//  Size:           0x3C
//  Total Size:     0x60

class OceanTuningTemplate : public Template
{
public:
    float mMinWaveLength;                       // 0x24
    float mMaxWaveLength;                       // 0x28
    float mAmplitudeToWaveLengthRatio;          // 0x2C
    float mWindDirectionMean;                   // 0x30
    float mWindDirectionVariance;               // 0x34
    float mSpeedScaleFactor;                    // 0x38
    float mReflectionTintRed;                   // 0x3C
    float mReflectionTintGreen;                 // 0x40
    float mReflectionTintBlue;                  // 0x44
    float mReflectionTintAlpha;                 // 0x48
    float mWaterColourRed;                      // 0x4C
    float mWaterColourGreen;                    // 0x50
    float mWaterColourBlue;                     // 0x54
    float mDetailOpacity;                       // 0x58
    float mDetailTextureScale;                  // 0x5C
};