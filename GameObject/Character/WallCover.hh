//  Size:           0xB8
//  Total Size:     0xE8

class WallCover : public GameSetObject
{
public:
    struct WallCoverInfo
    {
        math::Vector point;
        math::Vector normal;
        bool collided;
    };

    enum WallCoverState
    {
        WALLCOVER_None = 0x0,
        WALLCOVER_EnteringWallCover,
        WALLCOVER_InCover_West,
        WALLCOVER_InCover_East,
        WALLCOVER_OutOfCover_East,
        WALLCOVER_OutOfCover_East_RotatingOut,
        WALLCOVER_OutOfCover_East_RotatingIn,
        WALLCOVER_OutOfCover_West,
        WALLCOVER_OutOfCover_West_RotatingOut,
        WALLCOVER_OutOfCover_West_RotatingIn,
        WALLCOVER_ExitingCover,
    };

    WallCoverState mWallCoverState;                         // 0x30
    int mWallCoverInfoUpdateIndex;                          // 0x34
    WallCoverInfo mWallCoverInfo[4];                        // 0x38
    math::Vector mCharacterDirectionBeforeLeavingCover;     // 0xA8
    math::Vector mCharacterPositionBeforeLeavingCover;      // 0xB4
    float mTune_ShoulderHeight;                             // 0xC0
    float mTune_ShoulderWidth;                              // 0xC4
    float mTune_RaycastLengthInCover;                       // 0xC8
    float mTune_RaycastLengthOutOfCover;                    // 0xCC
    float mTune_DistanceToWall;                             // 0xD0
    CharacterObject* mCharacterObject;                      // 0xD4
    unsigned int mRotateInTimer;                            // 0xD8
    unsigned int mRemainOutOfCoverTimer;                    // 0xDC
    unsigned int mAimingTimer;                              // 0xE0
    bool mIsReadyToShoot;                                   // 0xE4
    bool mIsAiming;                                         // 0xE5
    bool mCloseToWall;                                      // 0xE6
    bool mInitialRayCast;                                   // 0xE7
};