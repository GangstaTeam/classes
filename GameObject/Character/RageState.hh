//  Size:           0xB4
//  Total Size:     0xE4

class RageState : public GameSetObject
{
public:
    enum RageStateEnum
    {
        RAGESTATE_None = 0x0,
        RAGESTATE_Intro,
        RAGESTATE_On,
        RAGESTATE_On_StartFade,
        RAGESTATE_Outro
    };

    RageStateEnum m_State;                              // 0x30
    unsigned int mRageMeterAtMaxDontDecreaseTimer;      // 0x34
    unsigned int m_RageIntroTimer;                      // 0x38
    float m_Tune_RageMeterMax;                          // 0x3C
    float m_Tune_RageMeterPulseLevel;                   // 0x40
    float m_Tune_RageOnDecay;                           // 0x44
    float m_Tune_RageOffDecay;                          // 0x48
    float mTune_MinTriggerLevel;                        // 0x4C
    float m_Tune_FrameRateMultiplier;                   // 0x50
    float m_Tune_TonyFrameRateMultiplier;               // 0x54
    float m_Tune_FireRateMult;                          // 0x58
    float m_Tune_DamageMultiplier;                      // 0x5C
    int m_Tune_HealthBonus;                             // 0x60
    int m_Tune_EnemyKilledHealthBonus;                  // 0x64
    int m_Tune_AddRageHealthLevel;                      // 0x68
    math::Vector mTune_PistolPosition;                  // 0x6C
    math::Vector mTune_UziPosition;                     // 0x78
    math::Vector mTune_RiflePosition;                   // 0x84
    math::Vector mTune_SniperPosition;                  // 0x90
    math::Vector mTune_ShotgunPosition;                 // 0x9C
    math::Vector mTune_ChainsawPosition;                // 0xA8
    math::Vector mTune_ShoulderPosition;                // 0xB4
    math::Vector mTune_GrenadeLauncherPosition;         // 0xC0
    math::Vector mTune_M240Position;                    // 0xCC
    unsigned int mRageButtonHoldTimer;                  // 0xD8
    unsigned int mRageTimeStat;                         // 0xDC
    bool mRageMessageDisplayed;                         // 0xE0
    bool mScriptedRageMode;                             // 0xE1
    bool mRageButtonHoldStarted;                        // 0xE2
};