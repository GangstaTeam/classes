//  Size:           0xF0
//  Total Size:     0x19C

class DramaticCamera : public CameraObject
{
public:
    struct AnimData
    {
        pure3d::Animation*  animation;
        float               rotateY;
        float               weight;
        bool                enableNormal;
        bool                enableMirror;
    };

    int mNumDramaticCams;                            // 0xAC
    AnimData mAnimData[4];                           // 0xB0
    float mElapsed;                                  // 0xF0
    float mHoldBeforeTime;                           // 0xF4
    float mAnimDuration;                             // 0xF8
    float mHoldAfterTime;                            // 0xFC
    pure3d::CameraAnimationController* mpController; // 0x100
    pure3d::VectorCamera* mpAnimCam;                 // 0x104
    bool mInUse;                                     // 0x108
    bool mReflectAnim;                               // 0x109
    bool mDynamic;                                   // 0x10A
    int mObjectID;                                   // 0x10C
    math::Vector mOffset;                            // 0x110
    math::Matrix mCharTransform;                     // 0x11C
    math::Matrix mRotateAnim;                        // 0x15C
};