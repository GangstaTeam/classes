//  Size:           0x10
//  Total Size:     0x30

class GameSetObject : public ScriptObject
{
public:
    uint16_t mGameSets[4];                      // 0x20
    char Pad0x28[8];                            // 0x28
};