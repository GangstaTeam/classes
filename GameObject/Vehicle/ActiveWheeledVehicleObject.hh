//  Size:           0x168
//  Total Size:     0x7C0

class ActiveWheeledVehicleObject : public ActiveVehicleObject
{
public:
    ScriptObjectPointer<WheeledVehicleTemplate*> mWheeledVehicleTemplate; // 0x658
    PlayerWheeledVehicleIntentionCalculator mPlayerIntention;             // 0x65C
    WheeledVehicleEngine mWheeledVehicleEngine;                           // 0x67C
    uint32_t mCoverObjects[4];                                            // 0x7A0
    math::Vector mPositionWhenCoverObjectsCreated;                        // 0x7B0
    bool mCoverObjectsCreated;                                            // 0x7BC
};