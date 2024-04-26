//  Size:           0x114
//  Total Size:     0x178

class MapHUD2 : public HUDElement2
{
public:
    enum E_MAP_STATE
    {
        EMODE_MINIMAP = 0,
        EMODE_MAXIMAP
    };

    enum E_TRANS_STATE
    {
        EMTState_NONE = 0,
        EMTState_ACTIVATING,
        EMTState_DEACTIVATING
    };

    struct EventPosting
    {
        int event;
        int param;
    };

    pure3d::VectorCamera* m_p3dcam;                 // 0x64
    FESpriteObject* m_pDirectionIcon;               // 0x68
    FESpriteObject* m_pOrientationIcon;             // 0x6C
    FEBoxObject* m_pMapBacking;                     // 0x70
    FEP3DObject* m_pTPGeo;                          // 0x74
    FETextObject* m_pDescriptor;                    // 0x78
    FERoundedRectangleObject* m_pDescriptorBacking; // 0x7C
    FESpriteObject* m_pMapCircle;                   // 0x80
    BehaviourAnimPulse* m_pBehaviourAnimPulse;      // 0x84
    short m_MapX;                                   // 0x88
    short m_MapY;                                   // 0x8A
    short m_MapW;                                   // 0x8C
    short m_MapH;                                   // 0x8E
    short m_focalCenterX;                           // 0x90
    short m_focalCenterY;                           // 0x92
    ActionMap* m_pMaxiMapActionMap;                 // 0x94
    E_TRANS_STATE m_TransitionState;                // 0x98
    E_MAP_STATE m_mapMode;                          // 0x9C
    E_CH_ALIGNMENT m_viewAlignment;                 // 0xA0
    E_CH_ALIGNMENT m_prevViewAlignment;             // 0xA4
    BehaviourAnimFade* m_pFadeBehaviour;            // 0xA8
    BehaviourAnimScale* m_pScaleBehaviour;          // 0xAC
    BehaviourAnimTranslate* m_pTranslateBehaviour;  // 0xB0
    FEObjectGroup* m_pMapScalingGroup;              // 0xB4
    FEObjectGroup* m_pFadeGroup;                    // 0xB8
    math::Vector m_playerPos;                       // 0xBC
    math::Vector m_playerDir;                       // 0xC8
    math::Vector m_cameraPos;                       // 0xD4
    math::Vector m_cameraDir;                       // 0xE0
    math::Vector m_MaxiMapConstraintVecs[3];        // 0xEC
    math::Vector m_blendToLocation;                 // 0x110
    float m_fConstraintRadius[3];                   // 0x11C
    float m_fMinZoom;                               // 0x128
    float m_fMaxZoom;                               // 0x12C
    float m_fMinInteriorHeight;                     // 0x130
    float m_fMaxInteriorHeight;                     // 0x134
    float m_fMinVehicleHeight;                      // 0x138
    float m_fMaxVehicleHeight;                      // 0x13C
    float m_fMinBoatHeight;                         // 0x140
    float m_fMaxBoatHeight;                         // 0x144
    float m_fPanningScalar;                         // 0x148
    bool m_bOrientNorth;                            // 0x14C
    float m_fCurrentCamHeight;                      // 0x150
    float m_fCurrBlend;                             // 0x154
    float m_fBlendAccum;                            // 0x158
    float m_fBlendFactor;                           // 0x15C
    bool m_bIsBlending;                             // 0x160
    bool m_bAllowInput;                             // 0x161
    bool m_bIsMiniShown;                            // 0x162
    bool m_bIsLegendShown;                          // 0x163
    bool m_bCanLegendBeShown;                       // 0x164
    bool m_bFocusOnTony;                            // 0x165
    EventPosting m_EventPosting;                    // 0x168
    char* m_shutDownCallback;                       // 0x16C
    const char* m_currentDescriptor;                // 0x170
};