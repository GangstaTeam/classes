//  Size:           0x28
//  Total Size:     0x94

class PimpYourMansionHUD : public HUDElement2, public SubscriberInterface, public GenericScrollerInterface
{
public:
    GenericMenuClient* mPimpMenu; // 0x6C
    GenericScrollbar* mScrollbar; // 0x70
    GenericScroller* mScroller;   // 0x74
    int mSelectedCategoryIndex;   // 0x78
    FELayerObject* m_Layer;       // 0x7C
    FETextObject* m_CashText;     // 0x80
    FETextObject* m_PlaceText;    // 0x84
    float m_WaitTimerHack;        // 0x88
    int m_Cash;                   // 0x8C
    int m_CurrentItemPrice;       // 0x90
};