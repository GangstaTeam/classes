//  Size:           0xCC

class SpawnMixer
{
public:
    container::ArrayDynamic<TrafficConfigStackElement*> m_TrafficConfigStack;           // 0x0
    container::ArrayDynamic<TrafficConfigStackElement*> m_TrafficConfigArray;           // 0x10
    container::ArrayDynamic<SubzoneTrafficTrigger*> m_SubzoneTrafficTriggerArray;       // 0x20
    container::ArrayDynamic<int> m_BoatLoadObjectIndices;                               // 0x30
    container::ArrayDynamic<int> m_CarLoadObjectIndices;                                // 0x40
    int m_CallForCharacterIndex;                                                        // 0x50
    int m_CallForCarIndex;                                                              // 0x54
    int m_CallForBoatIndex;                                                             // 0x58
    container::ArrayDynamic<CVLoadObject*> m_CVLoadObjectArray[ESpawnTemplateType_MAX]; // 0x5C
    CVLoadObject* m_NextTrafficTemplates[ESpawnTemplateType_MAX];                       // 0x7C
    CVLoadObject* m_LastTrafficTemplates[ESpawnTemplateType_MAX];                       // 0x84
    CVLoadObject* m_NextDriverTrafficTemplate;                                          // 0x8C
    CVLoadObject* m_NextRareUniqueTrafficTemplates[ESpawnTemplateType_MAX];             // 0x90
    CVLoadObject* m_NextRareUniqueDriverTemplate;                                       // 0x98
    CVLoadObject* m_RecycleTrafficTemplate[ESpawnTemplateType_MAX];                     // 0x9C
    SubzoneTrafficTrigger* m_CurrentSubzoneTrafficTrigger;                              // 0xA4
    TrafficConfig* m_LastTrafficConfig;                                                 // 0xA8
    TrafficConfig* m_CurrentTrafficConfig;                                              // 0xAC
    int m_FreeSlotsBelowAmbientUsage;                                                   // 0xB0
    int m_NumOutstandingLoadRequests[ESpawnTemplateType_MAX];                           // 0xB4
    uint32_t m_RareUniqueDisabledMask;                                                  // 0xBC
    bool m_AllowVisibleInstanceRemoval;                                                 // 0xC0
    bool m_TransitionalTrafficActive[ESpawnTemplateType_MAX];                           // 0xC1
    float m_RareUniqueEvictionTimer[ESpawnTemplateType_MAX];                            // 0xC4
};