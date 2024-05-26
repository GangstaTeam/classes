//  Size:           0xC44

class renderer::TimeOfDay
{
public:
    uint32_t m_uMiliseconds;                // 0x30
  
    int m_iSpeed;                           // 0x3C
    bool m_bIsUpdating;                     // 0x40

    bool m_bIsRaining;                      // 0x44
};
