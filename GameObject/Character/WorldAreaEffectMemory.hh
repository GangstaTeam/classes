//  Size:           0x28

class WorldAreaEffectMemory
{
public:
    RDJElapsedTimer mTimeSinceSomeoneFired;   // 0x0
    math::Vector mPosAtWhichSomeoneLastFired; // 0x8
    RDJElapsedTimer mTimeSinceSirenActive;    // 0x14
    math::Vector mPosAtWhichSirenLastActive;  // 0x1C
};