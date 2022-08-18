#ifndef __OOP_SETUP_H__
#define __OOP_SETUP_H__

#include "ISetup.h"

namespace SOLID{

    class Shape;

    class OOPSetup : public ISetup{
    public:
        explicit OOPSetup(std::function<int (int, int)> randomNumberGenerator) : ISetup(randomNumberGenerator) {}
        bool setup(std::vector<std::shared_ptr<Shape>>&) override;
        bool draw(const std::shared_ptr<Shape>&) override;
    };
}

#endif