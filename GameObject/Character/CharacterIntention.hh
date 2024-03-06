//  Size:           0xBC

class CharacterIntention
{
public:
    short m_ButtonStates[32];                               // 0x0
    float m_LocomotionRingSpeeds[4];                        // 0x40
    math::Vector m_MotionDirection;                         // 0x50
    math::Vector m_FacingDirection;                         // 0x5C
    math::Vector m_CalculatedLookAtDirection;               // 0x68
    math::Vector m_BulletDirection;                         // 0x74
    math::Vector m_BulletStartPosition;                     // 0x80
    LookRequest _mLookRequest;                              // 0x8C
    int m_LocoRing;                                         // 0xB0
    float m_SpeedScale;                                     // 0xB4
    char mPedestrianNavigationOverride;                     // 0xB8
    bool mHasPedestrianFled : 1;                            // 0xB9
    bool m_bUseBulletStartPosition : 1;                     // 0xB9
    bool m_bGunUp : 1;                                      // 0xB9
    bool m_bFacing : 1;                                     // 0xB9
};