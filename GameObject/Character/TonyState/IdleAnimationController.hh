//  Size:           0x10

class IdleAnimationController
{
public:
    CharacterObject* m_CharacterObject;                     // 0x0
    unsigned int m_IdleTime;                                // 0x4
    unsigned int m_RandStartTime;                           // 0x8
    bool m_Idling : 1;                                      // 0xC
};