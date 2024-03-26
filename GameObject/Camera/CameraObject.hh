//  Size:           0x38
//  Total Size:     0xAC

class CameraObject : public GameObject
{
public:
    enum CamType 
    {
        Unknown = 0,
        CharacterCam,
        VehicleCam,
        PlaneCam,
        NISCam, 
        DramaticCam,
        BlendCam,
        DebugCam,
        N_Cam_Types
    };

    float mTune_FOV;                        // 0x74
    float mTune_NearPlane;                  // 0x78
    float mTune_FarPlane;                   // 0x7C
    CamType mCameraType;                    // 0x80
    pure3d::Camera *mCamera;                // 0x84
    ScriptObjectPointer mActionMap;         // 0x88
    CameraTransition mCamTransition[2];     // 0x8C
};