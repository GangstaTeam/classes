//  Size:           0x1A8
//  Total Size:     0x254

class NISCamera : public CameraObject
{
public:
    enum CamMode
    {
        Idle,
        Point1,
        Point2,
        Anim
    };

    enum OrientMode
    {
        World = 0,
        Object,
        Joint,
        Facing,
        MaxOrientMode
    };

    enum BlendMode
    {
        Linear = 0,
        EaseIn,
        EaseOut,
        EaseInOut,
        MaxBlendMode
    };

    class RefPoint 
    {
    public:
        bool            mDynamic;
        int             mObjectID;
        int             mJointID;
        OrientMode      mOrient;
        math::Vector    mOffset;
        math::Vector    mPosition;
    };

    class CamData 
    {
    public:
        RefPoint        mCamPos;
        RefPoint        mTargetPos;
        float           mFOV;
        bool            mAttached;
        math::Matrix    mCamTransform;
    };

    CamMode mMode;                                           // 0xAC
    BlendMode mBlendMode;                                    // 0xB0
    int mSetMask;                                            // 0xB4
    bool mSetSecondCam;                                      // 0xB8
    bool mReflectAnim;                                       // 0xB9
    bool mOrbitPath;                                         // 0xBA
    bool mNeedsPostCollision;                                // 0xBB
    float mRotateDirection;                                  // 0xBC
    math::Vector mSaveTarget;                                // 0xC0
    CamData mCam1;                                           // 0xCC
    CamData mCam2;                                           // 0x164
    NISCameraAdvanceBehaviour* mpControllerAdvanceBehaviour; // 0x1FC
    pure3d::Animation* mpAnimation;                          // 0x200
    pure3d::CameraAnimationController* mpAnimControl;        // 0x204
    pure3d::VectorCamera* mpAnimCam;                         // 0x208
    float mDuration;                                         // 0x20C
    float mElapsed;                                          // 0x210
    math::Matrix mRotateAnim;                                // 0x214
};