#include <iostream>
#include <memory>

#include "Cercle.h"

namespace SOLID
{
    bool draw(std::shared_ptr<Cercle> const& cercle)
    {
        std::cout << "Drawing a cercle with radius " << cercle->getRadius() << std::endl;
        return true;
    }
}