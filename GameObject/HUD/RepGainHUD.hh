//  Size:           0xDC
//  Total Size:     0x140

class RepGainHUD : public HUDElement2
{
public:
    enum EUpdateState
    {
        EUpdateState_CAMERAMOVE,
        EUpdateState_SHRINKBAR,
        EUpdateState_FADECOLOURS,
        EUpdateState_MOVETONEXTCHAR,
        EUpdateState_EXPANDBAR,        
        EUpdateState_DONE,
        EUpdateState_ADMIREHUD,
        EUpdateState_SHOWINFO,
        EUpdateState_EXTRA,
        EUpdateState_PHONECALL,
        EUpdateState_BACKTOGAMECAM
    };

    struct RepGainData
    {
        int x;
        int w;
    };

    RepGainData mPositionData[8];     // 0x64
    FESpriteObject* mRepLetters[8];   // 0xA4
    FEBoxObject* mRepBar;             // 0xC4
    FELayerObject* mRepLettersLayer;  // 0xC8
    FELayerObject* mRepBackLayer;     // 0xCC
    FELayerObject* mRepInfoLayer;     // 0xD0
    FETextObject* mRepExtraText;      // 0xD4
    FETextObject* mRepTitleText;      // 0xD8
    FESpriteObject* mRepItemIcon[4];  // 0xDC
    FETextObject* mRepItemTitle[4];   // 0xEC
    FETextObject* mRepItemText[4];    // 0xFC
    FEObjectGroup* mBackGroup;        // 0x10C
    FEObjectGroup* mLetterGroup;      // 0x110
    HUDFadeAnimation* mBackFadeIn;    // 0x114
    HUDFadeAnimation* mLetterFadeIn;  // 0x118
    bool mbAdvanceStage;              // 0x11C
    int mStage;                       // 0x120
    float mElapsedTime;               // 0x124
    int mCurrentRepLevel;             // 0x128
    short mBarW;                      // 0x12C
    short mBarH;                      // 0x12E
    short mBarX;                      // 0x130
    short mBarY;                      // 0x132
    short mOrigBarW;                  // 0x134
    short mOrigBarH;                  // 0x136
    short mOrigBarX;                  // 0x138
    short mOrigBarY;                  // 0x13A
    EUpdateState mCurrentUpdateState; // 0x13C
};