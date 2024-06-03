//  Size:           0x1B4

class Character
{
public:
    enum EWorldCollisionOffset
    {
        WORLDCOLLISIONOFFSET_Disabled = 0,
        WORLDCOLLISIONOFFSET_Rotated,
        WORLDCOLLISIONOFFSET_Unrotated
    };

    CharacterObject* m_pParentObject;                                   // 0x50
    math::Vector m_vForwardAxis;                                        // 0x54
    math::Matrix m_Transform;                                           // 0x60

    renderer::RenderableHandle* m_pRenderable;                          // 0xAC
    renderer::RenderableHandle* m_pShadowRenderable;                    // 0xB0
 
    CollidableHandle* m_pWorldCollidable;                               // 0xB8
    CollidableHandle* m_pObjectCollidable;                              // 0xBC
    CollidableHandle* m_pBulletCollidable;                              // 0xC0
  
    math::Vector m_vLastFrameCollisionAdjust;                           // 0xE8

    float m_fHeightAdjust;                                              // 0xF8

    int m_iCollisionOffsetType;                                         // 0x100
    math::Vector m_vCollisionOffset;                                    // 0x104
    uint16_t m_uCurrentGroundMeshTriIndex;                              // 0x110
    ravenphysics::CollisionObject* m_pGroundCollisionObject;            // 0x114

    SoundManager::SoundPlayerHandle* m_pSoundHandle;                    // 0x174
    CharacterAnimation* m_pCharacterAnimation;                          // 0x178
    CharacterFightTree *m_pMasterFightTree;                             // 0x17C
    PoseAttachmentCollection* m_pAttachments;                           // 0x180

    Character* m_pGrappleSlaveCharacter;                                // 0x188

    container::ArrayDynamic<uint8_t>* m_pJointEnumToIndex;              // 0x190

    bool m_bVehicleCollisionEnabled : 1;                                // 0x198 (2)

    bool m_bGroundCollisionEnabled : 1;                                 // 0x198 (16)

    math::Vector m_vTranslation;                                        // 0x1A4

};