//  Size:           0x44

class GenericMenuClient
{
public:
    void* vfptr;                                                 // 0x0
    container::ArrayDynamic<GenericMenuItemData*> mMenuItemData; // 0x4
    GenericMenu mMenu;                                           // 0x14
    int mDataToItemOffset;                                       // 0x38
    bool mWrap;                                                  // 0x3C
    core::MemoryAllocator mUseAllocator;                         // 0x40
};