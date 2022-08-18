#ifndef __CERCLE_H__
#define __CERCLE_H__

#include "Shape.h"

namespace SOLID
{
    class Cercle : public Shape
    {
    public:
        explicit Cercle(int radius) : Shape(), m_Radius(radius) {}
        virtual ~Cercle() = default;
        bool accept(const Visitor&) override;
    private:
        int m_Radius;
    };

    
}

#endif


