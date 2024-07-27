//  Size:           0x3C
//  Total Size:     0xA4

class PauseMenu : public HUDElement2, public GenericScrollerInterface
{
public:
    container::ArrayDynamic<PauseMenuPage*> PauseMenuPages; // 0x68
    EPauseMenuPage mCurrentPage;                            // 0x78
    FESpriteObject* mRepLetters[8];                         // 0x7C
    GenericBarMeter* mRepBar;                               // 0x9C
    bool mPageRequested;                                    // 0xA0
};