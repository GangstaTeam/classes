//  Size:           0x44
//  Total Size:     0xEC

class EffectsObject : public GameSimObject
{
public:
    char* mTemplateName;                                        // 0xA8
    BloodPoolInfo* mBloodPoolInfo;                              // 0xAC
    int mMaxNumBloodPools;                                      // 0xB0
    float mFootPrintSize;                                       // 0xB4
    int mMaxNumBloodFootSteps;                                  // 0xB8
    float mGoreBloodExplosionParticleEffectSize;                // 0xBC
    float mHeadShotParticleEffectSize;                          // 0xC0
    float mLightShotParticleEffectSize;                         // 0xC4
    float mHeavyShotParticleEffectSize;                         // 0xC8
    bool mDebugHeadShot;                                        // 0xCC
    bool mDebugHeavyShot;                                       // 0xCD
    bool mDebugLightShot;                                       // 0xCE
    float mBloodPoolMaxRadius;                                  // 0xD0
    float mBloodPoolStepSize;                                   // 0xD4
    int mBloodPoolAnimUpdateEveryNFrames;                       // 0xD8 
    ScriptObjectPointer<EffectsTemplate*> mTemplate;            // 0xDC
    bool mDebugEffect;                                          // 0xE0
    char* mDebugEffectTemplateName;                             // 0xE4
    renderer::RenderableHandle* mDebugEffectRenderableHandle;   // 0xE8
};