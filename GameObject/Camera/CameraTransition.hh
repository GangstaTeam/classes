//  Size:           0x10

class CameraTransition
{
public:
    enum TransitionType 
    { 
        Cut = 0,
        Blend
    };

    enum TransitionBlendMode 
    { 
        Linear = 0,
        EaseIn,
        EaseOut,
        EaseInOut
    };

    void *vfptr;                                            // 0x0
    TransitionType mType;                                   // 0x4
    TransitionBlendMode mBlendMode;                         // 0x8
    float mDuration;                                        // 0xC
};