#ifndef __SQUARE_H__
#define __SQUARE_H__

#include "Shape.h"

namespace SOLID
{
    class Square : public Shape
    {
    public:
        Square(int side) : Shape(SOLID::eShapeType::eSquare),
                             m_Side(side)
        {
        }
        virtual ~Square() = default;
        int getSide() const noexcept { return m_Side; }

    private:
        int m_Side;
    };

    bool draw(std::shared_ptr<Square> const& square);
}

#endif


