//  Size:           0x18
//  Total Size:     0x80

class ErrorHandlerHUD : public HUDElement2, public SubscriberInterface
{
public:
    SystemDialogBox* mSystemDialog;            // 0x68
    T_DIALOG_RESTOREDATA* mpDialogRestoreData; // 0x6C
    bool mCatchError;                          // 0x70
    bool mErrorCaught;                         // 0x71
    int mErrorIndex;                           // 0x74
    DBKey mErrorKey;                           // 0x78
    bool mControllerUnplugWait;                // 0x7C
};