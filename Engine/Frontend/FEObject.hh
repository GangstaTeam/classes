//  Size:           0x8
//  Total Size:     0x28

class FEObject : public ScriptObject
{
public:
    pure3d::frontend::Drawable *m_pDrawable; // 0x20
    bool m_bUpdatingDisplayList;             // 0x24
};