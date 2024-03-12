//  Size:           0x28
//  Total Size:     0x48

class AIStimulusTable : public ScriptObject
{
public:
    smVector<StimulusEvent*> mEventTable;                       // 0x20
    smVector<StimulusEventData> mEventDataTable;                // 0x30
    char *mOverrideTables;                                      // 0x40
    container::BitField *mSenseTypes;                           // 0x44
};