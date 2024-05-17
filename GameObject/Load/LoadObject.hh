//  Size:           0xC
//  Total Size:     0x2C

class LoadObject : public GameSetObject
{
public:
    char* m_TemplateName;    // 0x20
    Template* m_Template;    // 0x24
    ResourceId m_ResourceId; // 0x28
};