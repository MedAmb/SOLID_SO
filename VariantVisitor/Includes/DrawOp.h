#ifndef __DRAW_OP_H__
#define __DRAW_OP_H__


namespace SOLID {

    class Cercle;
    class Square;

    class Draw {
    public:
        explicit Draw() = default;
        ~Draw() = default;
        bool operator()(const Cercle& cercle);
        bool operator()(const Square& square);
    };
}

#endif