#ifndef __VISITOR_H__
#define __VISITOR_H__

namespace SOLID {

    class Cercle;
    class Square;

    class Visitor {
    public:
        explicit Visitor() = default;
        virtual ~Visitor() = default;
        virtual bool visit(const Cercle& cercle) const = 0;
        virtual bool visit(const Square& square) const = 0;
    };
}

#endif