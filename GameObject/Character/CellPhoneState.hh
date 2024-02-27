//  Size:           0x8
//  Total Size:     0x38

class CellPhoneState : public GameSetObject
{
public:
    enum CellPhoneStates
    {
        CELLPHONESTATE_None = 0x0,
        CELLPHONESTATE_PickUp,
        CELLPHONESTATE_Listen,
        CELLPHONESTATE_HangUp
    };

    CellPhoneStates mCellPhoneState;            // 0x30
    bool mUserCanTerminate;                     // 0x34
};