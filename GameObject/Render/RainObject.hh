//  Size:           0x78
//  Total Size:     0x128

class RainObject : public RCObject
{
public:
    char* mRainTemplate;                 // 0xB0
    char* mSoundPoiTemplate;             // 0xB4
    bool mEnableRain;                    // 0xB8
    renderer::RainParameters mRainParam; // 0xBC
    SoundPoi mSoundPoi;                  // 0x114
};