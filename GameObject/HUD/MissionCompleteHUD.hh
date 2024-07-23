//  Size:           0x94
//  Total Size:     0xF8

class MissionCompleteHUD : public HUDElement2
{
public:
    enum ETextFields
    {
        ETextFields_REP,
        ETextFields_EXOTICS,
        ETextFields_TURFS,
        ETextFields_BALLS,
        ETextFields_DRUGS,
        ETextFields_CASH,
        ETextFields_MAX
    };

    enum EUpdateOrder
    {
        EUpdateOrder_NONE = -1,
        EUpdateOrder_REP,
        EUpdateOrder_EXOTICS,
        EUpdateOrder_TURF,
        EUpdateOrder_BALLS,
        EUpdateOrder_DRUGS,
        EUpdateOrder_BONUS_DRUGS,
        EUpdateOrder_CASH,
        EUpdateOrder_BONUS_CASH,
        EUpdateOrder_DONE,
        EUpdateOrder_MAX
    };

    enum EUpdateSubState
    {
        EUpdateSubState_NONE = -1,
        EUpdateSubState_FADE_TO_255,
        EUpdateSubState_APPLY_GAIN,
        EUpdateSubState_FADE_TO_200,
        EUpdateSubState_DONE
    };

    NumericTextField* mNumericFields[6];    // 0x64
    FETextObject* mTallyTexts[6];           // 0x7C
    FETextObject* mMissionValue;            // 0x94
    HUDFadeAnimation* mFadeAnimations[8];   // 0x98
    HUDFadeAnimation* mBarFade;             // 0xB8
    HUDFadeAnimation* mTallyFade;           // 0xBC
    FESpriteObject* mRepLetters[8];         // 0xC0
    FESpriteObject* mMissionValueIcon;      // 0xE0
    GenericBarMeter* mRepBar;               // 0xE4
    EUpdateOrder mCurrentUpdateStage;       // 0xE8
    EUpdateSubState mCurrentUpdateSubState; // 0xEC
    float mElapsedTime;                     // 0xF0
    bool mForceAdvanceStage;                // 0xF4
};