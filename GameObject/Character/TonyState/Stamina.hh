//  Size:           0x10
//  Total Size:     0x40

class Stamina : public GameSetObject
{
public:
    float mCurrentStamina;                      // 0x30
    float mTune_MaxStaminaSec;                  // 0x34
    float mTune_StaminaRecoveryRate;            // 0x38
    float mTune_MinimumStartSprintSec;          // 0x3C
};