#ifndef __DRAW_VISITOR_H__
#define __DRAW_VISITOR_H__

#include "Visitor.h"

namespace SOLID {

    class DrawVisitor : public Visitor {
    public:
        explicit DrawVisitor() = default;
        virtual ~DrawVisitor() = default;
        virtual bool visit(const Cercle& cercle) const override;
        virtual bool visit(const Square& square) const override;
    };
}

#endif