//  Size:           0x270

class HUDImageStreamer
{
public:
    container::ArrayDynamic<char[32]> m_Resources;      // 0x0

    char m_Path[256];                                   // 0x18

    int m_State;                                        // 0x218
    Streamer m_Streamers[3];                            // 0x21C
   
    InventoryId m_InventoryId;                          // 0x268
    char m_Count;                                       // 0x26A
};