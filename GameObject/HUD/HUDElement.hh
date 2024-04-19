//  Size:           0x44
//  Total Size:     0x64

class HUDElement2 : public ScriptObject
{
public:
    enum ETransitionState
    {
        ETransitionState_NONE = -2,
        ETransitionState_DONE = -1,
        ETransitionState_IN,
        ETransitionState_IDLE,
        ETransitionState_OUT,
        ETransitionState_MAX,
    };

    enum ETransitionMode
    {
        ETransitionMode_NORMAL,
        ETransitionMode_SYSTEM,
        ETransitionMode_MAX
    };

    enum ERequestedOutState
    {
        ERequestedOutState_INVALID = -1,
        ERequestedOutState_DISABLED,
        ERequestedOutState_DEACTIVATED,
        ERequestedOutState_INVISIBLE,
        ERequestedOutState_MAX
    };

    ETransitionState mCurrentTransitionState;                                               // 0x20
    ETransitionMode mCurrentTransitionMode;                                                 // 0x24
    ERequestedOutState mRequestedOutState;                                                  // 0x28
    GenericAnimation *mTransitionAnimBehaviours[ETransitionMode_MAX][ETransitionState_MAX]; // 0x2C
    FEPageObject *mPage;                                                                    // 0x44
    EHUDElement mHUDElementID;                                                              // 0x48
    HUDElementRestoreData *mpRestoreData;                                                   // 0x4C
    float mTimeElapsed;                                                                     // 0x50
    char *mPageName;                                                                        // 0x54
    char *mProjectName;                                                                     // 0x58
    HUDImageStreamer *mImageStreamer;                                                       // 0x5C
    bool mUpdate : 1;                                                                       // 0x60
    bool mFlaggedForDestruction : 1;                                                        // 0x60
    bool mEnabled : 1;                                                                      // 0x60
    bool mActive : 1;                                                                       // 0x60
    bool mVisible : 1;                                                                      // 0x60
    bool mLoading : 1;                                                                      // 0x60
    bool m_bCheckOverlayLoadComplete : 1;                                                   // 0x60
};