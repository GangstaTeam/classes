//  Size:           0x1B4

class Character
{
public:
    CharacterObject* m_pCharacterObject;                                // 0x50
    math::Vector m_ForwardAxis;                                         // 0x54
    math::Matrix m_Transform;                                           // 0x60

    renderer::RenderableHandle *m_pRenderable;                          // 0xAC
 
    CollidableHandle *m_pWorldCollidable;                               // 0xB8
    CollidableHandle *m_pObjectCollidable;                              // 0xBC
    CollidableHandle *m_pBulletCollidable;                              // 0xC0
  
    float m_HeightAdjust;                                               // 0xF8

    ravenphysics::CollisionObject *m_pGroundCollisionObject;            // 0x114

    SoundManager::SoundPlayerHandle* m_pSoundHandle;                    // 0x174
    CharacterAnimation* m_pCharacterAnimation;                          // 0x178
  
    math::Vector m_Translation;                                         // 0x1A4
};