//  Size:           0xC

class CrouchState
{
public:
    enum ECrouchLocomotionState
    {
        ECrouchLocomotionState_None = 0x0,
        ECrouchLocomotionState_AllWay,
        ECrouchLocomotionState_Run
    };

    CharacterObject* mCharacterObject;                      // 0x0
    ECrouchLocomotionState mCrouchLocomotionState;          // 0x4
    unsigned int mCrouchStartTime;                          // 0x8
};