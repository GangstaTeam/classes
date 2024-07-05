//  Size:           0x10
//  Total Size:     0x84

class CoverObject : public GameObject
{
public:
    enum EType 
    {
        EType_CROUCH_STAND_TO_SHOOT,
        EType_STAND_LEAN_LEFT_TO_SHOOT,
        EType_STAND_LEAN_RIGHT_TO_SHOOT,
        EType_NONE
    };

    EType m_Type : 4;                   // 0x74
    uint32_t m_IndexInCoverManager : 7; // 0x74
    bool m_PropIsInstance : 1;          // 0x78
    uint32_t m_InstanceIndex : 12;      // 0x7C

    union                               // 0x80
    {
        uint32_t m_PropOrInstanceID;
        core::Key m_PropOrInstanceName;
    };
};