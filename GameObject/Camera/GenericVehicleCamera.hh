//  Size:           0xF4
//  Total Size:     0x1A0

class GenericVehicleCamera : public CameraObject
{
public:
    enum VehicleType
    {
        TYPE_INVALID = 0,
        TYPE_BOAT,
        TYPE_WHEELED,
        TYPE_AIRPLANE
    };

    struct Inputs
    {
        float mRightStickX;
        float mRightStickY;
        bool mForward;
        bool mReverse;
        bool mLookBack;
        bool mSwitchCamera;
    };

    Inputs mInputs;                         // 0xAC
    float mTune_TargetModeLockForwardSpeed; // 0xB8
    float mTune_FollowForwardButtonTime;    // 0xBC
    float mTune_FollowMinSpeed;             // 0xC0
    float mTune_MaxHeight;                  // 0xC4
    float mSettings_Current_Pitch;          // 0xC8
    float mSettings_Current_CameraDistance; // 0xCC
    float mSettings_Current_YOffset;        // 0xD0
    float mSettings_Current_PivotShift;     // 0xD4
    float mSettings_Current_RollFactor;     // 0xD8
    int mCameraIndex;                       // 0xDC
    float mPolarAngleH;                     // 0xE0
    float mPolarAngleV;                     // 0xE4
    float mPolarAngleH_last;                // 0xE8
    float mPolarAngleV_last;                // 0xEC
    float mPolarAngleSpeedH;                // 0xF0
    float mPolarAngleSpeedV;                // 0xF4
    float mLastVehicleHeading;              // 0xF8
    float mVehicleSlowPitch;                // 0xFC
    float mFOVSmoothed;                     // 0x100
    int mSnapObject;                        // 0x104
    VehicleType mSnapObjectVehicleType;     // 0x108
    math::Vector mSnapVelocitySmoothed;     // 0x10C
    math::Vector mSnapAccelerationSmoothed; // 0x118
    float mVehicleRoofHeight;               // 0x124
    float mVehicleCentreHeight;             // 0x128
    float mVehicleFrontDistance;            // 0x12C
    float mVehicleRearDistance;             // 0x130
    math::Vector mLastPosition;             // 0x134
    math::Vector mLastDirection;            // 0x140
    math::Vector mSaveTarget;               // 0x14C
    float mLastRoll;                        // 0x158
    float mLastZoomFactor;                  // 0x15C
    float mForwardHoldTime;                 // 0x160
    bool mReset;                            // 0x164
    bool mLastLookBackState;                // 0x165
    bool mLastSwitchCameraState;            // 0x166
    bool mAimHold;                          // 0x167
    bool mBackingUp;                        // 0x168
    bool mTargetIsHeli;                     // 0x169
    GameSimObject* mTargetObj;              // 0x16C
    bool m_UseFakeStick;                    // 0x170
    float m_FakeStickX;                     // 0x174
    float m_FakeStickY;                     // 0x178
    bool m_UseStaticCam;                    // 0x17C
    int m_StaticCamLocator;                 // 0x180
    math::Vector m_StaticCamOffset;         // 0x184
    bool m_UseStaticCamTarget;              // 0x190
    math::Vector m_StaticCamTarget;         // 0x194
};