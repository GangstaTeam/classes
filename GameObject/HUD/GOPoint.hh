//  Size:           0x18
//  Total Size:     0x48

class GOPoint : public GameSetObject
{
public:
    ScriptObjectPointer<ScriptObject*> mGameObject; // 0x30
    const char* mTBEDescriptor;                     // 0x34
    uint32_t mGroupID;                              // 0x38
    int mIcon;                                      // 0x3C
    int mClipElev;                                  // 0x40
    char mState;                                    // 0x44
    bool mPersist : 1;                              // 0x45
    bool mFlipped : 1;                              // 0x45
    bool mDrawElev : 1;                             // 0x45
    bool mbIsPosObj : 1;                            // 0x45
};