#include "DrawVisitor.h"


namespace SOLID {

    bool DrawVisitor::visit([[maybe_unused]] const Cercle& cercle) const
    {
        return true;
    }

    bool DrawVisitor::visit([[maybe_unused]] const Square& square) const
    {
        return true;
    }
}