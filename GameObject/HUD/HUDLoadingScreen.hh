//  Size:           0x30
//  Total Size:     0x98

class HUDLoadingScreen : public HUDElement2, public SubscriberInterface
{
public:
    HUDImageStreamer* m_surrogateStreamer;                          // 0x68
    float m_swapTime;                                               // 0x6C
    FEBoxObject* m_LoadingDots[3];                                  // 0x70
    FETextObject* m_TMText;                                         // 0x7C
    FETextObject* m_LoadingText;                                    // 0x80
    FETextObject* m_HintText;                                       // 0x84
    InventoryId m_HintsTextBibleInventoryId;                        // 0x88
    ResourceManager::ResourceListId m_HintsTextBibleResourceListId; // 0x8A
    int m_CurrentDot;                                               // 0x8C
    float m_ElapsedTime;                                            // 0x90
    bool m_FadeOut : 1;                                             // 0x94
    bool m_Deactivating : 1;                                        // 0x94
    bool m_VibrationWasDisabled : 1;                                // 0x94
};