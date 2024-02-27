//  Size:           0x8
//  Total Size:     0x38

class CameraState : public GameSetObject
{
public:
    enum CameraStates
    {
        CAMERASTATE_Navigation = 0x0,
        CAMERASTATE_Navigation_Chainsaw,
        CAMERASTATE_TargetLocked,
        CAMERASTATE_MeleeTarget,
        CAMERASTATE_FreeLook,
        CAMERASTATE_Cal50,
        CAMERASTATE_Sniper,
        CAMERASTATE_Debug,
        CAMERASTATE_Dead,
        CAMERASTATE_FixedDirection,
        CAMERASTATE_NumStates
    };

    CameraStates mCameraState;                  // 0x30
    bool mTriggeredTargetLockSound;             // 0x34
};