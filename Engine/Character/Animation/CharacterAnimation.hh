//  Size:           0x230

class CharacterAnimation
{
public:
    Character* m_pCharacterEngine;                  // 0x8
    pure3d::CharacterPose *m_pCharacterPose;        // 0xC

    math::Vector m_Velocity;                        // 0x10C

    pure3d::Name m_UpperBodyStateName;              // 0x144
    pure3d::Name m_AnimationStateName;              // 0x148
    pure3d::Name m_LocomotionTypeName;              // 0x14C
    int m_iLocomotionTypePriority;                  // 0x150
    int m_iStatePriority;                           // 0x154
    int m_iRequestPriority;                         // 0x158
    int m_iRequestID;                               // 0x15C
    Loco m_Locomotion;                              // 0x160

    LocoRing m_LocomotionRing;                      // 0x170
    
    math::Vector m_vLowerBodyDirection;             // 0x17C
    
    math::Vector m_vUpperBodyDirection;             // 0x1B0

    bool m_bIsLocomoting : 1;                       // 0x22C (1)

    bool m_bIsAnimating : 1;                        // 0x22C (4)

    bool m_bUpperBodyFacing : 1;                    // 0x22C (32)

    bool m_bUpperBodyRotationLocomotion : 1;        // 0x22C (128)

    bool m_bUpperBodyRotationAnimation : 1;         // 0x22D (1)

    bool m_bMotionRequestEnabled : 1;               // 0x22E (8)
};