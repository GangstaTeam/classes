//  Size:           0x38

class TimeTriggeredSampleRequest
{
public:
    RDJExpiryTimer mTalkTargetValidUntil;       // 0x0
    SoundManager::Vocal mVocal;                 // 0x4
    SharedInt mTimeAtWhichSampleTriggered;      // 0x30
    unsigned int mAssociatedActorID;            // 0x34
};