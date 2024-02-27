//  Size:           0x10
//  Total Size:     0x40

class ActionState : public GameSetObject
{
public:
    enum Actions
    {
        ACTIONSTATE_None = 0x0,
        ACTIONSTATE_WallCover,
        ACTIONSTATE_Taunt,
        ACTIONSTATE_Taunt_NoAnim,
        ACTIONSTATE_Count
    };

    Actions mActionState;                       // 0x30
    unsigned int mWallCoverActivateTimer;       // 0x34
    unsigned int mTauntTimer;                   // 0x38
    bool mTauntAllowFire;                       // 0x3C
    bool mTauntIsFiring;                        // 0x3D
};