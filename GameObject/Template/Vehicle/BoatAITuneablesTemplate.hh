//  Size:           0x20
//  Total Size:     0x44

class BoatAITuneablesTemplate : public VehicleAITuneablesTemplate
{
public:
    float m_NoticeDistance;            // 0x24
    float m_PatrolEngageDistance;      // 0x28
    float m_DefendEngageDistance;      // 0x2C
    float m_DefendWithdrawDistance;    // 0x30
    float m_AttackDistanceClose;       // 0x34
    float m_AttackDistanceFar;         // 0x38
    float m_AttackCircleDistanceClose; // 0x3C
    float m_AttackCircleDistanceFar;   // 0x40
};