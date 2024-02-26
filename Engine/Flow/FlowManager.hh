//  Size:           0x150
//  Total Size:     0x178

class FlowManager
{
public:
    FlowTime m_Time;                            // 0x0
    unsigned int m_Unknown1;                    // 0x28
    unsigned int m_GameTimeInMiliseconds;       // 0x2C
    unsigned int m_Unknown2;                    // 0x30
    unsigned int m_Unknown3;                    // 0x34
    unsigned int m_Unknown4;                    // 0x38
    unsigned int m_Unknown5;                    // 0x3C
    unsigned int m_Unknown6;                    // 0x40
    EFlowState m_State;                         // 0x44
    EFlowState m_NextState;                     // 0x48
    float m_TimeScale;                          // 0x4C
    unsigned int m_SubState;                    // 0x50
    float m_TimeScaleValues[5];                 // 0x54
    int m_TimeScaleIndex;                       // 0x68
    char Pad0x6C[8];                            // 0x6C
    char m_PauseGameReason[256];                // 0x74
    char Pad0x174[3];                           // 0x174
    bool m_PauseGame;                           // 0x177
};