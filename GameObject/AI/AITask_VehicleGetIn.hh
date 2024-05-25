//  Size:           0x1C
//  Total Size:     0x68

class AITask_VehicleGetIn : public AITask_CodeAbstract
{
public:
    uint32_t m_VehicleOrSetID;            // 0x4C
    uint32_t m_CandidateVehicleID;        // 0x50
    math::Vector m_ClosestPointToVehicle; // 0x54
    bool m_IsSet;                         // 0x60
    bool m_NeedRoadPath;                  // 0x61
    bool m_ThrowOutOccupantOnly;          // 0x62
    uint8_t m_Seat;                       // 0x63
    uint8_t m_EnterSeat;                  // 0x64
};