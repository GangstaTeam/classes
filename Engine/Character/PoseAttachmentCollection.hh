//  Size:           0x1C8

class PoseAttachmentCollection
{
public:
    enum eAttachment
    {
        ATTACHMENT_0 = 0,
        ATTACHMENT_1,
        ATTACHMENT_2,
        ATTACHMENT_3,
        ATTACHMENT_4,
        ATTACHMENT_5,
        MAX_ATTACHMENTS
    };

    PoseAttachmentInfo m_Info[MAX_ATTACHMENTS];       // 0x0 
};