//  Size:           0x74
//  Total Size:     0xDC

class HUDScreenFX : public HUDElement2, public SubscriberInterface
{
public:
    enum EScreenFXType
    {
        EScreenFXType_RAGE,
        EScreenFXType_LETTERBOX,
        EScreenFXType_FADETRANSITION,
        EScreenFXType_RENDERFX,
        EScreenFXType_NONE
    };

    EScreenFXSubstate mCurrentState[4];                       // 0x68
    FELayerObject* mLetterboxLayer;                           // 0x78
    FEBoxObject* mLetterboxTop;                               // 0x7C
    FEBoxObject* mLetterboxBottom;                            // 0x80
    FEBoxObject* mFadePoly;                                   // 0x84
    FEObjectGroup* mFadeGroup;                                // 0x88
    BehaviourAnimFade* mFadeBehaviour;                        // 0x8C
    float mLetterboxTime;                                     // 0x90
    float mElapsedLetterboxTime;                              // 0x94
    float mElapsedFadeTime;                                   // 0x98
    float mElapsedRenderFxTime;                               // 0x9C
    renderer::ColourEffectsParameters mCurrentColourEffects;  // 0xA0
    renderer::ColourEffectsParameters mOriginalColourEffects; // 0xBC
    bool mOriginalColourEffectsEnabled;                       // 0xD8
    bool mOriginalTODEnabled;                                 // 0xD9
};