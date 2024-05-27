//  Size:           0xC44

class renderer::EnvManager
{
public:
    uint32_t m_uTimeOfDayMiliseconds;                // 0x30
  
    int m_iTimeOfDaySpeed;                           // 0x3C
    bool m_bTimeOfDayIsUpdating;                     // 0x40

    bool m_bIsRaining;                               // 0x44
};
