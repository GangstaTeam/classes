//  Size:           0x14
//  Total Size:     0x7C

class PauseMenuPage : public HUDElement2, public GenericScrollerInterface
{
public:
    GenericMenuClient* mMenu;     // 0x68
    GenericScrollbar* mScrollbar; // 0x6C
    GenericScroller* mScroller;   // 0x70
    int mPageID;                  // 0x74
    bool mInteractive;            // 0x78
};