//  Size:           0x1B4

class Character
{
public:
    CharacterObject* m_CharacterObject;             // 0x50
    math::Vector m_ForwardAxis;                     // 0x54
    math::Matrix m_Matrix;                          // 0x60

    renderer::RenderableHandle *m_Renderable;       // 0xAC
 
    CollidableHandle *m_WorldCollidable;            // 0xB8
    CollidableHandle *m_ObjectCollidable;           // 0xBC
    CollidableHandle *m_BulletCollidable;           // 0xC0

    CharacterAnimation* m_CharacterAnimation;       // 0x178
  
    math::Vector m_Translation;                     // 0x1A4
};