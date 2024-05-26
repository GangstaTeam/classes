//  Size:           0x78
//  Total Size:     0x84

class renderer::Renderable : public pure3d::Entity
{
public:
    pure3d::LightsChooser *m_pLightChooser;             // 0x10
    math::Matrix m_Transform;                           // 0x14

    float m_fFadeRate;                                  // 0x68
    float m_fAlpha;                                     // 0x6C

    float m_fFadeLevel;                                 // 0x74
    float m_fMilisecondsNotVisible;                     // 0x78
   
    bool m_bFadeOut : 1;                                // 0x80 (4)

    bool m_bDisableLOD : 1;                             // 0x80 (64)

    bool m_bInInterior : 1;                             // 0x81 (1)
};