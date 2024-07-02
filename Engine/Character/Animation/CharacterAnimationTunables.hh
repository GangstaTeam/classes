//  Size:           0x48

class CharacterAnimationTunables
{
public:
    float m_fLocomotionRotationMaxSpeed;              // 0x0
    float m_fLocomotionRotationMaxSpeedOverflowRatio; // 0x4
    float m_fLocomotionPositionDeacceleration;        // 0x8
    float m_fLocomotionPositionAcceleration;          // 0xC
    float m_fLocomotionAnimationDeacceleration;       // 0x10
    float m_fLocomotionAnimationAcceleration;         // 0x14
    float m_fBlend_UpperBody_Default;                 // 0x18
    float m_fBlend_UpperBody_Crouch;                  // 0x1C
    float m_fBlend_UpperBody_Fire;                    // 0x20
    float m_fBlend_UpperBody_GunsDown;                // 0x24
    float m_fBlend_UpperBody_GunsUp;                  // 0x28
    float m_fBlend_UpperBody_LockedOn;                // 0x2C
    float m_fBlend_UpperBody_LockedOnFire;            // 0x30
    float m_fBlend_UpperBody_NoGun;                   // 0x34
    float m_fBlend_UpperBody_Mortar;                  // 0x38
    float m_fBlend_UpperBody_Reload;                  // 0x3C
    float m_fBlend_UpperBody_VehicleCombat;           // 0x40
    float m_fMaxIdleUpperBodyRotation;                // 0x44
};