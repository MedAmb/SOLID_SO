#ifndef __ISETUP_H__
#define __ISETUP_H__

#include <vector>
#include <memory>
#include <functional>

#include "Shape.h"

namespace SOLID{
    class ISetup{
    public:
        explicit ISetup(std::function<int (int, int)> randomNumberGenerator) : m_randomNumberGenerator(randomNumberGenerator) {}
        virtual bool setup(std::vector<std::shared_ptr<Shape>>&) = 0;
        virtual bool draw(const std::shared_ptr<Shape>&) = 0;
        virtual ~ISetup() = default;

    protected:
        std::function<int (int, int)> m_randomNumberGenerator;
    };
}

#endif