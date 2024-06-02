//  Size:           0x64
//  Total Size:     0x88

class EffectsTemplate : public Template
{
public:
    char* mGoreBloodExplosionParticleEffectName;                         // 0x24
    char* mGrenadeExplosionParticleEffectName;                           // 0x28
    char* mHeadShotParticleEffectName;                                   // 0x2C
    char* mBloodPoolShaderName;                                          // 0x30
    char* mBloodFootPrintShaderName;                                     // 0x34
    char* mHeavyShotParticleEffectName;                                  // 0x38
    char* mLightShotParticleEffectName;                                  // 0x3C
    char* mSandFootPrintEffect;                                          // 0x40
    char* mDustFootPrintEffect;                                          // 0x44
    char* mWaterFootPrintEffect;                                         // 0x48
    char* mFlyUpBirdsEffectName;                                         // 0x4C
    char* mFlyStraightBirdsEffectName;                                   // 0x50
    char* mCircleBirdsEffectName;                                        // 0x54
    char* mLittersEffectName;                                            // 0x58
    char* mFishesEffectName;                                             // 0x5C
    renderer::RenderableHandle* mGoreBloodExplosionParticleEffectHandle; // 0x60
    renderer::RenderableHandle* mGrenadeExplosionParticleEffectHandle;   // 0x64
    renderer::RenderableHandle* mHeadShotParticleEffectHandle;           // 0x68
    renderer::RenderableHandle* mBloodPoolDecalHandle;                   // 0x6C
    renderer::RenderableHandle* mBloodFootPrintDecalHandle;              // 0x70
    renderer::RenderableHandle* mHeavyShotParticleEffectHandle;          // 0x74
    renderer::RenderableHandle* mLightShotParticleEffectHandle;          // 0x78
    renderer::RenderableHandle* mSandFootPrintParticleEffectHandle;      // 0x7C
    renderer::RenderableHandle* mDustFootPrintParticleEffectHandle;      // 0x80
    renderer::RenderableHandle* mWaterFootPrintParticleEffectHandle;     // 0x84
};