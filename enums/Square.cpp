#include <iostream>
#include <memory>

#include "Square.h"

namespace SOLID
{
    bool draw(std::shared_ptr<Square> const& square)
    {
        std::cout << "Drawing a square with side " << square->getSide() << std::endl;
        return true;
    }
}