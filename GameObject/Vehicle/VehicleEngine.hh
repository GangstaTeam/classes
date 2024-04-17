//  Size: * Unknown*

class VehicleEngine
{
public:
    CollidableHandle* m_CollidableHandle;               // 0x20

    ravenphysics::RigidBody* m_RigidBody;               // 0x28
    
    VehicleZoneCollisionEngine* m_ZoneCollision;        // 0x504

    bool m_IsPlayerControlled;                          // 0x5BA
};