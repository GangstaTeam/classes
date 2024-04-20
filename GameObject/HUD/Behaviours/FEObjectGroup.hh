//  Size:           0x18

class FEObjectGroup
{
public:
    container::ArrayDynamic<T_FEObjectData> GroupObjects; // 0x0
    FEGroupObject* m_FEGroupObject;                       // 0x10
    core::MemoryAllocator m_UseAllocator;                 // 0x14
};