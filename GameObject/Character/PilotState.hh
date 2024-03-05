//  Size: * Unknown*

class PilotState
{
public:
    EState m_State;                                         // 0x0
    EState m_NextState;                                     // 0x4
    ESubState m_SubState;                                   // 0x8
    int m_AnimationType;                                    // 0xC
    uint8_t m_SeatIndex;                                    // 0x10

    ScriptObjectPointer<VehicleObject*>     m_Vehicle;      // 0x90
};