#ifndef __DRAW_STRATEGY_H__
#define __DRAW_STRATEGY_H__

namespace SOLID {

    class Cercle;
    class Square;

    bool draw(const Cercle& c);
    bool draw(const Square& s);

    struct Draw {
        template<typename T>
        bool operator()(const T& drawable) const {
            return draw(drawable);
        }
    };
}

#endif