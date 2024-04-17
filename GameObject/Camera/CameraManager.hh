//  Size:           0xD0
//  Total Size:     0x100

class CameraManager : public GameSetObject
{
public:
    enum ControlState
    {
        CHARACTER_FOLLOW,
        CHARACTER_LOCK,
        CHARACTER_FREELOOK,
        CHARACTER_GUN,
        CHARACTER_DEAD,
        WHEELED_VEHICLE,
        BOAT,
        NIS,
        DRAMATIC,
        MAX_CONTROL_STATES
    };

    enum CameraShakeType
    {
        Shake_X = 0,
        Shake_Y,
        Shake_Z,
        Shake_RX,   // pitch
        Shake_RY,   // yaw
        Shake_RZ,   // roll
        Shake_NTYPE
    };

    struct Shake
    {
        float   mTime;          // elapsed time so far (s)
        float   mDuration;      // total duration (s)
        float   mFrequency;     // frequency (Hz)
        float   mAmplitude;     // peak amplitude (m)
        float   mRandom;        // randomness factor ([0..1])
    };

    BlendCamera* mBlendCamera;                           // 0x30
    DramaticCamera* mDramaticCamera;                     // 0x34
    Shake mShake[Shake_NTYPE];                           // 0x38
    pure3d::Camera* mGameCamera;                         // 0xB0
    float mLastCollisionDistance;                        // 0xB4
    ScriptObjectPointer<ActionMap*> mCurrentActionMap;   // 0xB8
    ScriptObjectPointer<GameSimObject*> mControlObject;  // 0xBC
    ScriptObjectPointer<VehicleObject*> mVehicleObject;  // 0xC0
    CameraObject* mControlStates[MAX_CONTROL_STATES];    // 0xC4
    ControlState mCurControlState;                       // 0xE8
    void* mCallback;                                     // 0xEC
    void* mpCallbackData;                                // 0xF0
    float mTuneCollisionTestHeight;                      // 0xF4
    float mTuneCollisionPathHeight;                      // 0xF8
    bool mAlternateActionMapEnabled;                     // 0xFC
    bool mAutoEnd;                                       // 0xFD
    bool mBlendInProgress;                               // 0xFE
};