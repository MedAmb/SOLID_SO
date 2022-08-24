#ifndef __SHAPE_H__
#define __SHAPE_H__

#include <functional>

namespace SOLID
{    
    class Shape
    {
    public:
        Shape() = default;
        virtual ~Shape() = default;
        virtual bool draw() const = 0;
    };
}

#endif