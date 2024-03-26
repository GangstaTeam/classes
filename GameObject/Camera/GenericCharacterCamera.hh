//  Size:           0x20C
//  Total Size:     0x2B8

class GenericCharacterCamera : public CameraObject
{
public:
    enum Mode
    {
        MODE_FOLLOW,
        MODE_LOCK,
        MODE_MELEETARGET,
        MODE_FIXEDDIRECTION,
        MODE_FREELOOK,
        MODE_GUN,
        MODE_DEAD,
        Mode_Max
    };

    struct ControllerInput
    {
        ScriptObjectPointer<ActionMap*> mActionMap;
        float mLeftStickX;
        float mLeftStickY;
        float mRightStickX;
        float mRightStickY;
        float mRightStickAccelX;
        float mRightStickX_last;
        float mRightStickY_last;
        bool mLockButton;
        bool mRecenterCamera;
    };

    ControllerInput mControllerInput;                        // 0xAC
    float mLastVehicleAngle;                                 // 0xD0
    float mTune_RotationAngleY_DefaultPitch;                 // 0xD4
    float mTune_RotationAngleY_CombatPitch;                  // 0xD8
    float mTune_RotationAngleY_RagePitch;                    // 0xDC
    floatMinMax mTune_RotationAngleY_MinMax;                 // 0xE0
    floatMinMax mTune_VehicleRotationAngleY_MinMax;          // 0xE8
    Mode mTune_Mode;                                         // 0xF0
    bool mTune_1stPerson;                                    // 0xF4
    math::Vector mTune_CharacterHeadPos;                     // 0xF8
    math::Vector mTune_CharacterGunPos;                      // 0x104
    math::Vector mTune_ExteriorDefaultPos;                   // 0x110
    math::Vector mTune_ExteriorCombatPos;                    // 0x11C
    math::Vector mTune_ExteriorLockedPos;                    // 0x128
    math::Vector mTune_InteriorDefaultPos;                   // 0x134
    math::Vector mTune_InteriorCombatPos;                    // 0x140
    math::Vector mTune_InteriorLockedPos;                    // 0x14C
    math::Vector mTune_MissileLauncherPos;                   // 0x158
    float mTune_ExteriorDefaultFOV;                          // 0x164
    float mTune_ExteriorCombatFOV;                           // 0x168
    float mTune_ExteriorLockedFOV;                           // 0x16C
    float mTune_InteriorDefaultFOV;                          // 0x170
    float mTune_InteriorCombatFOV;                           // 0x174
    float mTune_InteriorLockedFOV;                           // 0x178
    float mTune_RageFOV;                                     // 0x17C
    float mTune_FollowCamSpeed;                              // 0x180
    float mTune_FreeLookSpeedX;                              // 0x184
    float mTune_FreeLookSpeedY;                              // 0x188
    float mTune_GunSpeedX;                                   // 0x18C
    float mTune_GunSpeedY;                                   // 0x190
    float mTune_RageSpeedX;                                  // 0x194
    float mTune_RageSpeedY;                                  // 0x198
    float mTune_TargetNearReticlePullStrafe;                 // 0x19C
    float mTune_TargetUnderReticlePullStrafe;                // 0x1A0
    float mTune_TargetNearReticlePullPan;                    // 0x1A4
    float mTune_TargetUnderReticlePullPan;                   // 0x1A8
    float mTune_CameraOffsetSpeedTimeConstant;               // 0x1AC
    float mTune_EnterSniperModeAdjustCameraAngleXZ;          // 0x1B0
    float mTune_EnterSniperModeAdjustCameraAngleY;           // 0x1B4
    float mTune_SniperOffsetForward;                         // 0x1B8
    float mTune_SniperOffsetUp;                              // 0x1BC
    float mTune_RageCameraRattleXZ;                          // 0x1C0
    float mTune_RageCameraRattleY;                           // 0x1C4
    float mTune_Hack_LockedReticleAngleOffsetXZ;             // 0x1C8
    float mTune_Hack_LockedReticleAngleOffsetY;              // 0x1CC
    float mTune_AccelThreshold;                              // 0x1D0
    float mTune_AccelTime;                                   // 0x1D4
    float mTune_DecelTime;                                   // 0x1D8
    float mTune_StickMaxAccel;                               // 0x1DC
    float mTune_MinHeight;                                   // 0x1E0
    float mTune_MaxHeight;                                   // 0x1E4
    float mRotationAngleXZ_last;                             // 0x1E8
    float mRotationAngleY_last;                              // 0x1EC
    float mAngularSpeedXZ;                                   // 0x1F0
    float mAngularSpeedY;                                    // 0x1F4
    bool mEnterSniperMode;                                   // 0x1F8
    bool mExitSniperMode;                                    // 0x1F9
    float mEnterSniperModeAngleXZ;                           // 0x1FC
    float mEnterSniperModeAngleY;                            // 0x200
    float mPositionBlendTimer;                               // 0x204
    float mPositionBlendTimeConstant;                        // 0x208
    float mBarrelCreepXZ;                                    // 0x20C
    float mBarrelCreepY;                                     // 0x210
    float mBulletRattleTime;                                 // 0x214
    math::Vector mBulletRattleVector;                        // 0x218
    float mSniperDrift_DisplacementXZRad;                    // 0x224
    float mSniperDrift_DisplacementYRad;                     // 0x228
    float mSniperDrift_SpeedXZRadS;                          // 0x22C
    float mSniperDrift_SpeedYRadS;                           // 0x230
    bool mInterior;                                          // 0x234
    bool mRecenteringCamera;                                 // 0x235
    bool mFireRecenteringCamera;                             // 0x236
    bool mForceRecenter;                                     // 0x237
    math::Vector mRecenterDirection;                         // 0x238
    float mFOV;                                              // 0x244
    float mBasePitch;                                        // 0x248
    math::Vector mUnrotatedOffset;                           // 0x24C
    math::Vector mLastPosition;                              // 0x258
    math::Vector mMeleeTargetOffset;                         // 0x264
    math::Vector mSaveCameraTarget;                          // 0x270
    math::Vector mPrevCharTarget;                            // 0x27C
    int mSnapObject;                                         // 0x288
    ScriptObjectPointer<CharacterObject*> mCharacterObject;  // 0x28C
    math::Vector mLastTargetPosition;                        // 0x290
    float mTune_LockedTargetLag;                             // 0x29C
    bool mNewTarget;                                         // 0x2A0
    bool mResetFOV;                                          // 0x2A1
    bool mSnapToCharacter;                                   // 0x2A2
    bool mRequestSnapToCharacter;                            // 0x2A3
    bool mTonyShouldBeVisible;                               // 0x2A4
    bool mTutorialMode;                                      // 0x2A5
    float mTutorialPitchMin;                                 // 0x2A8
    float mTutorialPitchMax;                                 // 0x2AC
    float mTutorialHeadingMin;                               // 0x2B0
    float mTutorialHeadingMax;                               // 0x2B4
};