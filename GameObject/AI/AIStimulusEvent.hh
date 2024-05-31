//  Size:           0x50

class AIStimulusEventAbstract
{
public:
    const AIStimulusTable::StimulusEvent* mpEventInTable; // 0x0
    uint32_t mStimulusEventID;                            // 0x4
    RDJString mStimulusData;                              // 0x8
    uint32_t mStimulusTimestamp;                          // 0x2C
    SmartPosition mSmartPosition;                         // 0x30
    math::Vector mOriginalPosition;                       // 0x44
};

//=======================================================

class AIStimulusEvent : public AIStimulusEventAbstract
{
public:
};