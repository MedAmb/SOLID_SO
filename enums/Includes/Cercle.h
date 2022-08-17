#ifndef __CERCLE_H__
#define __CERCLE_H__

#include "Shape.h"

namespace SOLID
{
    class Cercle : public Shape
    {
    public:
        Cercle(int radius) : Shape(SOLID::eShapeType::eCercle),
                              m_Radius(radius)
        {
        }
        virtual ~Cercle() = default;
        int getRadius() const noexcept { return m_Radius; }
    private:
        int m_Radius;
    };

    bool draw(std::shared_ptr<Cercle> const& cercle);
}

#endif


