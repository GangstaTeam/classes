//  Size:           0x4C

class PoseAttachmentInfo
{
public:
    uint32_t m_uGameObjectID;        // 0x0
    uint32_t m_uJointIndex;          // 0x4
    math::Matrix m_vOffsetTransform; // 0x8
    bool m_bHasOffset;               // 0x48
};