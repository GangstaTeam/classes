//  Size:           0x4
//  Total Size:     0x44

class FEGroupObject : public GameGroup
{
public:
    void* m_pData;          // 0x40
    // This basically holds pointer to pure3d::frontend::Layer/Page/Screen...
};

class FELayerObject : public FEGroupObject
{
public:

};

class FEPageObject : public FEGroupObject
{
public:

};

class FEScreenObject : public FEGroupObject
{
public:

};
