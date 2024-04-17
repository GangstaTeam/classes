//  Size:           0x44
//  Total Size:     0x74

class GameObject : public GameSetObject
{
public:
    float m_RollRadians;                        // 0x30
    math::Matrix m_Transform;                   // 0x34
};