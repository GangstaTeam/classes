//  Size:           0x430
//  Total Size:     0x494

class SystemDialogBox : public HUDElement2
{
public:
    ScrollingTextBox m_ScrollingTextBox; // 0x64
    FETextObject* m_HeaderText;          // 0xE4
    T_DLGOPTION m_DialogOption[4];       // 0xE8
    eDialogOptions m_CurrentSelection;   // 0x138
    eDialogOptions m_AcceptedSelection;  // 0x13C
    int m_SelectedIndex;                 // 0x140
    core::Key m_Keys[2];                 // 0x144
    bool m_bRestorePauseState;           // 0x14C
    bool m_bProcessInput;                // 0x14D
    bool m_bResetOnClosure;              // 0x14E
    bool m_bAcceptStartButton;           // 0x14F
    float m_currentDelay;                // 0x150
    float m_resolverDelay;               // 0x154
    float m_indicatorVal;                // 0x158
    T_DIALOG_RESTOREDATA m_RestoreData;  // 0x15C
};