//  Size:           0x60

class ravenphysics::CollisionObject
{
public: 
    void *vfptr;                                        // 0x0

    math::Vector m_vMin;                                // 0x8
    math::Vector m_vMax;                                // 0x14
    
    ravenphysics::CollisionVolume** m_pVolumes;         // 0x24

    uint16_t m_nNumVolumes;                             // 0x30
};