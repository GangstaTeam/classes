//  Size:           0x18

class FEObjectGroup
{
public:
    container::ArrayDynamic m_FEOGroup;     // 0x0
    FEGroupObject *m_FEGroupObject;         // 0x10
    core::MemoryAllocator m_UseAllocator;   // 0x14
};