//  Size:           0x9C
//  Total Size:     0xBC

class RageModeGraphAnim : public ScriptObject
{
public:   
    float mCurrentTime;                                             // 0x20
    bool mRGBMode;                                                  // 0x24
    ScriptObjectPointer mTintRed;                                   // 0x28
    ScriptObjectPointer mTintGreen;                                 // 0x2C
    ScriptObjectPointer mTintBlue;                                  // 0x30
    ScriptObjectPointer mAlpha;                                     // 0x34
    ScriptObjectPointer mZoom;                                      // 0x38
    ScriptObjectPointer mSaturation;                                // 0x3C
    ScriptObjectPointer mContrast;                                  // 0x40
    ScriptObjectPointer mBrightness;                                // 0x44
    ScriptObjectPointer mContrastmidpoint;                          // 0x48
    ScriptObjectPointer mFogStart;                                  // 0x4C
    ScriptObjectPointer mFogEnd;                                    // 0x50
    ScriptObjectPointer mDOF;                                       // 0x54
    ScriptObjectPointer mEnvironment;                               // 0x58
    ScriptObjectPointer mCamera;                                    // 0x5C
    bool mColourEffectsEnabled;                                     // 0x60
    renderer::ColourEffectsParameters mColourEffectsParameters;     // 0x64
    renderer::FogParameters mFogParameters;                         // 0x80
    renderer::DOFParameters mDOFParameters;                         // 0xA0
    bool mBlindRageOn;                                              // 0xB8
};