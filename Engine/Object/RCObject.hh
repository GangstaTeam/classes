//  Size:           0x8
//  Total Size:     0xB0

class RCObject : public GameSimObject
{
public:
    renderer::RenderableHandle* m_pRenderable; // 0xA8
    CollidableHandle* m_pCollidable;           // 0xAC
};