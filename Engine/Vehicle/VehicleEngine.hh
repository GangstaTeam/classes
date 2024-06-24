//  Size:           0x5D4

class VehicleEngine
{
public:
    enum EVehicleDestructionState
    {
        VEHICLEDESTRUCTIONSTATE_BURNING = 3,
        VEHICLEDESTRUCTIONSTATE_DESTROYED
    };

    bool m_bCreated;                                        // 0x4
    ScriptObjectPointer<GameObject*> m_GameObject;          // 0x8
    
    bool m_bVisible;                                        // 0x11

    renderer::RenderableHandle *m_pRenderableHandle;        // 0x14
  
    int m_iRoomIndex;                                       // 0x1C
    CollidableHandle* m_pCollidableHandle;                  // 0x20
    ravenphysics::CollisionObject* m_pCollisionObject;      // 0x24
    ravenphysics::RigidBody* m_pRigidBody;                  // 0x28
    
    math::Matrix m_xTransform;                              // 0x34
    float m_fHealth;                                        // 0x74
    float m_fHealthCallbackThresholdPercent;                // 0x78
    float m_fBodyDamageScale;                               // 0x7C
    float m_fWheelDamageScale;                              // 0x80

    WheelFrictionState m_WheelFrictionState;                // 0x88
    WheelFrictionState m_WheelFrictionState2;               // 0x108

    ScriptObjectPointer<CharacterObject*> m_InputControl;   // 0x1A8
    VehicleThrustState m_ThrustState;                       // 0x1AC
    VehicleMotionState m_MotionState;                       // 0x1B8
    VehicleCruiseControlState m_CruiseControlState;         // 0x254

    VehicleLocomotion* m_pLocomotion;                       // 0x2A8
    PoseAttachmentCollection m_AttachmentCollection;        // 0x2AC
    bool m_bSirenEnabled;                                   // 0x474
    bool m_bHornEnabled;                                    // 0x475

    IVehicleSirenListener* m_pSirenListener;                // 0x478
    
    VehicleZoneCollisionEngine* m_pZoneCollisionEngine;     // 0x504

    VehicleBuoyancyState m_BuoyancyState;                   // 0x52C
    pure3d::Ocean *m_pOcean;                                // 0x568

    EVehicleDestructionState m_DestructionState;            // 0x578

    bool m_bIsPlayerControlled;                             // 0x5BA
};