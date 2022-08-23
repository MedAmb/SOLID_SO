#ifndef __SQUARE_H__
#define __SQUARE_H__

namespace SOLID
{
    class Square
    {
    public:
        Square(int side) : m_Side(side) {}
        virtual ~Square() = default;
    private:
        int m_Side;
    };


}

#endif


