//  Size:           0xC
//  Total Size:     0x34

class FETextObject : public FEObject
{
public:
    pure3d::frontend::Polygon *m_pPolygon;  // 0x28
    short m_Width;                          // 0x2C
    short m_Height;                         // 0x2E
    short m_X;                              // 0x30
    short m_Y;                              // 0x32
};