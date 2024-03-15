//  Size:           0x48
//  Total Size:     0xF8

class OceanObject : public RCObject
{
public:
    pure3d::Ocean *mpOcean;             // 0xB0
    char *mTemplateName;                // 0xB4
    char *mTuningTemplateName;          // 0xB8
    float mReflectionRedScale;          // 0xBC
    float mReflectionGreenScale;        // 0xC0
    float mReflectionBlueScale;         // 0xC4
    float mReflectionAlphaScale;        // 0xC8
    float mWaterColourRed;              // 0xCC
    float mWaterColourGreen;            // 0xD0
    float mWaterColourBlue;             // 0xD4
    float mDetailOpacity;               // 0xD8
    float mDetailTextureScale;          // 0xDC
    float mFoamMinHeight;               // 0xE0
    float mFoamMaxHeight;               // 0xE4
    float mFoamMaxOpacity;              // 0xE8
    float mSpecularHighlight;           // 0xEC
    float mSpecularBrightness;          // 0xF0
    int mRoomIndex;                     // 0xF4
};