#ifndef __SHAPE_H__
#define __SHAPE_H__

namespace SOLID
{
    enum eShapeType {
        eCercle,
        eSquare
    };

    class Shape
    {
    public:
        explicit Shape(eShapeType type) : m_type(type) {}
        virtual ~Shape() = default;
        eShapeType getType() const noexcept { return m_type; }

    private:
        eShapeType m_type;
    };
}

#endif