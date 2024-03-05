//  Size:           0x558
//  Total Size:     0x578

class AIBehavior : public ScriptObject
{
public:
    void* __LOSUpdateListenerVfptr;                                 // 0x20
    ScriptObjectPointer<GameSet*> mProjectileSet;                   // 0x24
    unsigned int mCharacterID;                                      // 0x28

    ScriptObjectPointer<CharacterObject*> mCharacter;               // 0x84
    smVector<CharacterLOSInfo*> mCharacterLOSTable;                 // 0x88

    ScriptObjectPointer<CharacterObject*> mEngageTarget;            // 0x224

    unsigned int mTargetToEngageID;                                 // 0x24C
    ScriptObjectPointer<CharacterObject*> mTargetToEngage;          // 0x250

    // mCoverState
    // .m_ShootAnimationComplete                                    // 0x2F0

    ScriptObjectPointer<GameObject*> mDestroyObject;                // 0x31C
    
    bool mUseDestroyObjectFiringLocation;                           // 0x568
};