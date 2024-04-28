//  Size:           0x94
//  Total Size:     0x6EC

class ActiveHelicopterObject : public ActiveVehicleObject
{
public:
    ScriptObjectPointer<HelicopterObject*> mHelicopterObject;     // 0x658
    ScriptObjectPointer<HelicopterTemplate*> mHelicopterTemplate; // 0x65C
    HelicopterEngine mHelicopterEngine;                           // 0x660
    PlayerHelicopterIntentionCalculator mPlayerIntention;         // 0x6D8
    bool mWaitingForSecondExplosion;                              // 0x6E8
};