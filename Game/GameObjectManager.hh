//  Size:           0x40

class GameObjectManager
{
public:
    void *vfptr;                                // 0x0
    GameGroup *m_PermanentDataGroup;            // 0x4
    GameGroup *m_CameraGroup;                   // 0x8
    GameSet *m_GameExplosionSet;                // 0xC
    GameGroup *m_GraphAnimGroup;                // 0x10
    GameGroup *m_GameFirePoolGroup;             // 0x14
    GameSet *m_UpdateGUISet;                    // 0x18
    GameSet *m_PCTargetingSet;                  // 0x1C
    GameSet *m_GameProjectileSet;               // 0x20
    GameSet *m_GameSoundObjectsSet;             // 0x24
    GameSet *m_UpdatePreSimSet;                 // 0x28
    GameSet *m_UpdatePostSimSet;                // 0x2C
    GameSet *m_UpdateSoundPauseSet;             // 0x30
    GameSet *m_UpdatePauseSet;                  // 0x34
    GameSet *m_InvincibleDuringNISCameraSet;    // 0x38
    void *m_UnknownPtr;                         // 0x3C
};