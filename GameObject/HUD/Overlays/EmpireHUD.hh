//  Size:           0x14
//  Total Size:     0x80

class EmpireHUD : public HUDElement2, public SubscriberInterface, public GenericScrollerInterface
{
public:
    GenericMenuClient* mMenu;   // 0x6C
    GenericScroller* mScroller; // 0x70
    FETextObject* mMissionDesc; // 0x74
    EHUDElement mNextModal;     // 0x78
    bool mPlayedExitSound;      // 0x7C
    bool mInDistribution;       // 0x7D
};