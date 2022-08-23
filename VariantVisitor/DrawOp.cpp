#include "DrawOp.h"


namespace SOLID {

    bool Draw::operator()([[maybe_unused]] const Cercle& cercle)
    {
        return true;
    }

    bool Draw::operator()([[maybe_unused]] const Square& square)
    {
        return true;
    }
}