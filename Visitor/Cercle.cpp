#include <iostream>
#include <memory>

#include "Cercle.h"
#include "Visitor.h"

namespace SOLID
{
    bool Cercle::accept(const Visitor& visitor)
    {
        return visitor.visit(*this);
    }
}