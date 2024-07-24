//  Size:           0x4C
//  Total Size:     0xF8

class BlendCamera : public CameraObject
{
public:
    struct CameraData
    {
        math::Vector    camPos;
        math::Vector    targetPos;
        float           aimAngleH
        float           aimAngleV;
        float           roll;
        float           fov;
    };

    CameraObject* mBlendCam[2];   // 0xAC
    bool mLive0;                  // 0xB4
    bool mFirstUpdate;            // 0xB5
    bool mOrbitPath;              // 0xB6
    float mRotateDirection;       // 0xB8
    float mBlendTime;             // 0xBC
    CameraData mCam0Data;         // 0xC0
    CameraTransition mTransition; // 0xE8
};