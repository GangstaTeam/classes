//  Size:           0x18
//  Total Size:     0x44C

class DWHenchman : public ScriptCharacter
{
public:
    enum EHenchmanState
    {
        EHenchmanState_NONE = -1,
        EHenchmanState_FOLLOW_TONY = 0,
        EHenchmanState_COMBAT,
        EHenchmanState_TAUNT_MELEE,
        EHenchmanState_PEDESTRIAN,
        EHenchmanState_DEFEND_POSITION,
        EHenchmanState_MAX
    };

    float m_FollowTonyDistance;                                 // 0x434
    float m_FollowTonyDistanceCombat;                           // 0x438
    EHenchmanState m_State;                                     // 0x43C
    ScriptObjectPointer<CharacterObject*> m_TonyMeleeTarget;    // 0x440
    unsigned int m_CommandSequenceID;                           // 0x444
    bool m_AIOverridenByScript;                                 // 0x448
    bool m_OverridePutAwayGun;                                  // 0x449
};