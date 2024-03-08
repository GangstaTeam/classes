//  Size:           0x44
//  Total Size:     0xEC

class VehicleObject : GameSimObject
{
public:
    bool mToBeCulled;                           // 0xA8
    VehicleTemplate* mVehicleTemplate;          // 0xAC
    int mDrugs;                                 // 0xB0
    CVLoadObject* mCVLoadObject;                // 0xB4
    float mCachedDistanceFromCameraSqr;         // 0xB8
    float mSpawnSpeed;                          // 0xBC
    bool mLODActive;                            // 0xC0
    ActiveVehicleObject* m_ActiveObject;        // 0xC4
    EVehicleType mVehicleType;                  // 0xC8
    VehicleAI *mAIBehaviour;                    // 0xCC
    unsigned int mAIBehaviorID;                 // 0xD0
    unsigned int mAITaskGroupID;                // 0xD4
    unsigned int mAICurrentTaskID;              // 0xD8
    unsigned int mAITargetID;                   // 0xDC
    int m_UnknownInt_0xE0;                      // 0xE0
    int mEngagedDoor;                           // 0xE4
    unsigned char mCharacterSpawnUsage;         // 0xE8
    bool mMainCharacterWasLastDriver : 1;       // 0xE9
    bool mAbandonedVehicle : 1;                 // 0xE9
    bool mIsPoliceVehicle : 1;                  // 0xE9
    bool mIsFadingForDelete : 1;                // 0xE9
    bool mIsNISControlled : 1;                  // 0xE9
    bool mNPCsCanSteal : 1;                     // 0xE9
    bool mAttackedByMelee : 1;                  // 0xE9
    bool mCameraFadeOutRequest : 1;             // 0xE9
    bool mCameraFadeOutFaded : 1;               // 0xEA
};