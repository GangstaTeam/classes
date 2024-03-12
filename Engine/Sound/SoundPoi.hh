//  Size:           0x14

class SoundPoi
{
public:
    SoundPoi *mpNext;                       // 0x0
    SoundPoi *mpPrev;                       // 0x4
    SoundPoiTemplate *mpSoundPoiTemplate;   // 0x8
    math::Vector *mpPosition;               // 0xC
    bool mIsEnabled;                        // 0x10
};