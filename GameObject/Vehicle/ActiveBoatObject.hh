//  Size:           0x144
//  Total Size:     0x79C

class ActiveBoatObject : public ActiveVehicleObject
{
public:
    ScriptObjectPointer<BoatObject*> mBoatObject;     // 0x658
    ScriptObjectPointer<BoatTemplate*> mBoatTemplate; // 0x65C
    BoatEngine mBoatEngine;                           // 0x660
    PlayerBoatIntentionCalculator mPlayerIntention;   // 0x788
};