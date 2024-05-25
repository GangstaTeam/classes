//  Size:           0x5D4

class VehicleEngine
{
public:
    bool m_bCreated;                                        // 0x4
    ScriptObjectPointer<GameObject*> m_GameObject;          // 0x8

    renderer::RenderableHandle *m_pRenderableHandle;        // 0x14
  
    int m_iRoomIndex;                                       // 0x1C
    CollidableHandle* m_pCollidableHandle;                  // 0x20
    ravenphysics::CollisionObject* m_pCollisionObject;      // 0x24
    ravenphysics::RigidBody* m_pRigidBody;                  // 0x28
    
    float m_fHealth;                                        // 0x74
    
    WheelFrictionState m_WheelFrictionState;                // 0x88
    WheelFrictionState m_WheelFrictionState2;               // 0x108

    ScriptObjectPointer<CharacterObject*> m_InputControl;   // 0x1A8
    VehicleThrustState m_ThrustState;                       // 0x1AC
    VehicleMotionState m_MotionState;                       // 0x1B8

    PoseAttachmentCollection m_AttachmentCollection;        // 0x2AC

    VehicleZoneCollisionEngine* m_pZoneCollisionEngine;     // 0x504

    VehicleBuoyancyState m_BuoyancyState;                   // 0x52C
    pure3d::Ocean *m_pOcean;                                // 0x568

    bool m_bIsPlayerControlled;                             // 0x5BA
};