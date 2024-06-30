//  Size:           0x1C
//  Total Size:     0x90

class FireObject : public GameObject
{
public:
    Fire mFire;                                       // 0x74
    ScriptObjectPointer<FireTemplate*> mFireTemplate; // 0x8C
};