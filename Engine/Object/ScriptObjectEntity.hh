//  Size:           0x4
//  Total Size:     0x10

template <typename T>
class ScriptObjectEntity : pure3d::Entity
{
public:
    ScriptObjectPointer<T*> m_ReferencedObject;     // 0xC
};