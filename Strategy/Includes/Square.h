#ifndef __SQUARE_H__
#define __SQUARE_H__

#include "Shape.h"

namespace SOLID
{
    class Square;

    using squareDrawStrategy = std::function<bool(const Square&)>;

    class Square : public Shape
    {
    public:
        Square(int side, squareDrawStrategy ds) : Shape(), m_Side(side), m_Ds(std::move(ds)) {}
        virtual ~Square() = default;
        bool draw() const override { return m_Ds(*this); }
    private:
        int m_Side;
        squareDrawStrategy m_Ds;
    };


}

#endif


