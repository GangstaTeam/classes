//  Size:           0x14
//  Total Size:     0x1C

class FightContext : public fight::Context
{
public:
    CharacterObject* m_pCharacterObject;       // 0x8
    Character* m_pCharacter;                   // 0xC
    CharacterAnimation* m_pCharacterAnimation; // 0x10
};