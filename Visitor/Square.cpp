#include <iostream>
#include <memory>

#include "Square.h"
#include "Visitor.h"

namespace SOLID
{
    bool Square::accept(const Visitor& visitor)
    {
        return visitor.visit(*this);
    }
}