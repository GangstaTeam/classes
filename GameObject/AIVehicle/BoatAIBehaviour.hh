//  Size:           0x11C
//  Total Size:     0x14C

class BoatAIBehaviour : public VehicleAI
{
public:
enum EBoatAIState
    {
        EBoatAIState_NONE,
        EBoatAIState_GOTO,      // use the desired position (and direction) to move
        EBoatAIState_ATTACK,    // when enemy spotted, engage enemy until destroyed
        EBoatAIState_PATROL,    // patrols a given area, when enemy spoted, engage enemy until destroyed
        EBoatAIState_DEFEND,    // defends a position or object, when enemy spotted, engage until destroyed or until enemy retreats
        EBoatAIState_FLEE,      // flees from enemy until suitable distance away
        EBoatAIState_RACE,      // race to a destination
        EBoatAIState_CRASHED,   // dead
        EBoatAIState_MAX
    };

    enum EBoatAttackState
    {
        EBoatAttackState_NONE,
        EBoatAttackState_HOLD,
        EBoatAttackState_APPROACH,
        EBoatAttackState_RETREAT,
        EBoatAttackState_CIRCLE,
        EBoatAttackState_MAX
    };

    enum EBoatAttackType
    {
        EBoatAttackType_NONE = -1,
        EBoatAttackType_FIXEDMOUNT,
        EBoatAttackType_SWIVELMOUNT,
        EBoatAttackType_PULLALONGSIDE,
        EBoatAttackType_MAX
    };

    enum EBoatPatrolType
    {
        EBoatPatrolType_NONE = -1,
        EBoatPatrolType_LINEAR,             // follow path nodes in order
        EBoatPatrolType_NONLINEAR,          // follow path nodes out of order
        EBoatPatrolType_RANDOM,             // ignore path and pick random points near start position
        EBoatPatrolType_TRAFFIC,            // you're just background, buddy...
        EBoatPatrolType_TRAFFIC_DECIDING,   // you're just background, buddy...
        EBoatPatrolType_MAX
    };

    BoatObject* m_BoatObject;                                               // 0x30
    VehicleEngine* m_VehicleEngine;                                         // 0x34
    ActiveBoatObject* m_ActiveBoatObject;                                   // 0x38
    BoatEngine* m_BoatEngine;                                               // 0x3C
    const BoatAITuneablesTemplate* m_BoatAITuneablesTemplate;               // 0x40
    EBoatAIState m_BoatState;                                               // 0x44
    float m_StateTime;                                                      // 0x48
    EBoatAttackType m_AttackType;                                           // 0x4C
    EBoatAttackState m_AttackState;                                         // 0x50
    float m_AttackStateTime;                                                // 0x54
    float m_AttackStateTimeOut;                                             // 0x58
    math::Vector2 m_DesiredPosition;                                        // 0x5C
    math::Vector2 m_DesiredDirection;                                       // 0x64
    math::Vector2 m_StartPosition;                                          // 0x6C
    bool m_UseDesiredDirection;                                             // 0x74
    bool m_CanUseShallowWater;                                              // 0x75
    float m_DesiredCircleDistance;                                          // 0x78
    float m_MaxG;                                                           // 0x7C
    float m_CrashedTimer;                                                   // 0x80
    EBoatPatrolType m_PatrolType;                                           // 0x84
    uint32_t m_DefendTargetID;                                              // 0x88
    BoatPath m_BoatPath;                                                    // 0x8C
    ScriptObjectPointer<PathGroup*> m_OverridePathGroup;                    // 0x138
    uint32_t m_OverridePathGroupVersion;                                    // 0x13C
    uint32_t m_OverridePathNodeOffset;                                      // 0x140
    int m_NumOverridePathLaps;                                              // 0x144
    bool m_ApproachingEndOfPath;                                            // 0x148
    bool m_HasDefendEngageTarget;                                           // 0x149
    bool m_WorldObstacleAhead;                                              // 0x14A
};