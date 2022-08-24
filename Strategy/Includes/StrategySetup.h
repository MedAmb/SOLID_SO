#ifndef __VISITOR_SETUP_H__
#define __VISITOR_SETUP_H__

#include "ISetup.h"

namespace SOLID{

    class Shape;

    class StrategySetup : public ISetup{
    public:
        explicit StrategySetup(std::function<int (int, int)> randomNumberGenerator) : ISetup(randomNumberGenerator) {}
        bool setup(std::vector<std::shared_ptr<Shape>>&) override;
        bool draw(const std::shared_ptr<Shape>&) override;
    };
}

#endif