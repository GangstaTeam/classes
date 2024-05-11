//  Size:           0x1B4

class Character
{
public:
    CharacterObject* m_pCharacterObject;                                // 0x50
    math::Vector m_vForwardAxis;                                        // 0x54
    math::Matrix m_Transform;                                           // 0x60

    renderer::RenderableHandle *m_pRenderable;                          // 0xAC
 
    CollidableHandle *m_pWorldCollidable;                               // 0xB8
    CollidableHandle *m_pObjectCollidable;                              // 0xBC
    CollidableHandle *m_pBulletCollidable;                              // 0xC0
  
    math::Vector m_vLastFrameCollisionAdjust;                           // 0xE8

    float m_fHeightAdjust;                                              // 0xF8

    uint16_t m_uCurrentGroundMeshTriIndex;                              // 0x110
    ravenphysics::CollisionObject *m_pGroundCollisionObject;            // 0x114

    SoundManager::SoundPlayerHandle* m_pSoundHandle;                    // 0x174
    CharacterAnimation* m_pCharacterAnimation;                          // 0x178
  
    math::Vector m_vTranslation;                                        // 0x1A4
};