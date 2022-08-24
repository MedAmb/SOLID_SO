#ifndef __CERCLE_H__
#define __CERCLE_H__

#include "Shape.h"

namespace SOLID
{
    class Cercle;

    using cercleDrawStrategy = std::function<bool(const Cercle&)>;

    class Cercle : public Shape
    {
    public:
        explicit Cercle(int radius, cercleDrawStrategy ds) : Shape(), m_Radius(radius), m_Ds(std::move(ds)) {}
        virtual ~Cercle() = default;
        bool draw() const override { return m_Ds(*this); }
    private:
        int m_Radius;
        cercleDrawStrategy m_Ds;
    };

    
}

#endif


