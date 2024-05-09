//  Size:           0x230

class CharacterAnimation
{
public:
    Character* m_CharacterEngine;                   // 0x8

    math::Vector m_Velocity;                        // 0x10C

    pure3d::Name m_AnimationStateName;              // 0x148

    LocoRing m_LocomotionRing;                      // 0x170

    bool m_bIsLocomoting : 1;                       // 0x22C
};