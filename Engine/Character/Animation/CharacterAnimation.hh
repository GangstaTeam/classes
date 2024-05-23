//  Size:           0x230

class CharacterAnimation
{
public:
    Character* m_pCharacterEngine;                  // 0x8
    pure3d::CharacterPose *m_pCharacterPose;        // 0xC

    math::Vector m_Velocity;                        // 0x10C

    pure3d::Name m_UpperBodyStateName;              // 0x144
    pure3d::Name m_AnimationStateName;              // 0x148

    int m_iStatePriority;                           // 0x154
    int m_iRequestPriority;                         // 0x158
    int m_iRequestID;                               // 0x15C

    LocoRing m_LocomotionRing;                      // 0x170

    bool m_bIsLocomoting : 1;                       // 0x22C
    // + 2
    bool m_bIsAnimating : 1;                        // 0x22C
};