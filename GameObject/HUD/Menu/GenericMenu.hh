//  Size:           0x8

class GenericMenu
{
public:
    void* vfptr;                                          // 0x0
    container::ArrayDynamic<GenericMenuItem*> mMenuItems; // 0x4
    int mCurrentItem;                                     // 0x14
    GenericMenuCursor mCursor;                            // 0x18
    bool mActivated;                                      // 0x20
};