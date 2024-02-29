//  Size:           0x34
//  Total Size:     0x38

class StartupManager : public FlowClient
{
public:
    char m_StartupMission[32];                  // 0x4
    int m_State;                                // 0x24
    HUDCallout2 *m_HUDCallout;                  // 0x28
    char _Pad0x2C[7];                           // 0x2C
    bool m_UnknownBool1;                        // 0x33
    bool m_UnknownBool2;                        // 0x34
    char _Pad0x35[3];                           // 0x35
};