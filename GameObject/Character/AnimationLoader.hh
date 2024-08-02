//  Size:           0x8
//  Total Size:     0x28

class AnimationLoaderObject : public ScriptObject
{
public:
    ResourceManager::ResourceListId mResourceListId; // 0x20
    InventoryId mInventoryId;                        // 0x22
    char mIsLoaded;                                  // 0x24
};