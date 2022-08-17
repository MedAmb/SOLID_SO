#ifndef __ENUMSETUP_H__
#define __ENUMSETUP_H__

#include "ISetup.h"

namespace SOLID{

    class Shape;

    class EnumSetup : public ISetup{
    public:
        explicit EnumSetup(std::function<int (int, int)> randomNumberGenerator) : ISetup(randomNumberGenerator) {}
        bool setup(std::vector<std::shared_ptr<Shape>>&) override;
        bool draw(const std::shared_ptr<Shape>&) override;
    };
}

#endif