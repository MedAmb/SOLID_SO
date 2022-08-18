#ifndef __SHAPE_H__
#define __SHAPE_H__

namespace SOLID
{
    class Visitor;
    
    class Shape
    {
    public:
        Shape() = default;
        virtual ~Shape() = default;
        virtual bool accept(const Visitor&) = 0;
    };
}

#endif