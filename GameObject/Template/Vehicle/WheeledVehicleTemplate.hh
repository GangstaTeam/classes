//  Size:           0x18
//  Total Size:     0x104

class WheeledVehicleTemplate : public VehicleTemplate
{
public:
    WheeledVehicleAttributes mWheeledAttributes;                                        // 0xEC
    ScriptObjectPointer<WheeledVehicleArtTemplate*> mWheeledVehicleArtTemplate;         // 0xFC
    ScriptObjectPointer<WheeledVehicleCoverProperties*> mWheeledVehicleCoverProperties; // 0x100
};