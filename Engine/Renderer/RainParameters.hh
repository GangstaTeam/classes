//  Size:           0x58

class renderer::RainParameters
{
public:
    bool m_bAnimateRainBias;        // 0x4

    float m_fRainBias;              // 0x8
    float m_fRainBiasMin;           // 0xC
    float m_fRainBiasMax;           // 0x10
    float m_fRainDimFactor;         // 0x14
    float m_fSplashStartFactor;     // 0x18
    int m_iTNPeakNumMin;            // 0x1C
    int m_iTNPeakNumMax;            // 0x20
    int m_iLTNGapMin;               // 0x24
    int m_iLTNGapMax;               // 0x28
    float m_fLTNBrightness;         // 0x2C
    float m_fLTNBrightnessBiasMin;  // 0x30
    float m_fLTNBrightnessBiasMax;  // 0x34
    float m_fLTNRGBiasMin;          // 0x38
    float m_fLTNRGBiasMax;          // 0x3C
    math::Vector m_vStreaksOffset;  // 0x40
    math::Vector m_vSplashesOffset; // 0x4C
};