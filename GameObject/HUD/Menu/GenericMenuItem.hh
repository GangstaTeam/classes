//  Size:           0x34

class GenericMenuItem
{
public:
    void* vfptr;                        // 0x0
    bool mSelectable;                   // 0x4
    bool mEnabled;                      // 0x5
    FEObjectGroup* mGroup;              // 0x8
    HUDFadeAnimation mHUDFadeAnimation; // 0xC
    FEBoxObject* mSelectionBox;         // 0x30
};