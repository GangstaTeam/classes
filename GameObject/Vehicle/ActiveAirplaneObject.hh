//  Size:           0xA8
//  Total Size:     0x700

class ActiveAirplaneObject : public ActiveVehicleObject
{
public:
    ScriptObjectPointer<AirplaneObject*> mAirplaneObject;     // 0x658
    ScriptObjectPointer<AirplaneTemplate*> mAirplaneTemplate; // 0x65C
    AirplaneEngine mAirplaneEngine;                           // 0x660
    PlayerAirplaneIntentionCalculator mPlayerIntention;       // 0x6E0
    bool mWasDropContextEnabled;                              // 0x6FC
};