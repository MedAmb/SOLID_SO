#ifndef __SQUARE_H__
#define __SQUARE_H__

#include "Shape.h"

namespace SOLID
{
    class Square : public Shape
    {
    public:
        Square(int side) : Shape(), m_Side(side) {}
        virtual ~Square() = default;
        bool draw() override;
    private:
        int m_Side;
    };


}

#endif


