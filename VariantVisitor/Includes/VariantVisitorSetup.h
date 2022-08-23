#ifndef __VISITOR_SETUP_H__
#define __VISITOR_SETUP_H__

#include "ISetup.h"

namespace SOLID{

    class VariantVisitorSetup : public ISetup{
    public:
        explicit VariantVisitorSetup(std::function<int (int, int)> randomNumberGenerator) : ISetup(randomNumberGenerator) {}
        virtual bool setup(std::vector<std::shared_ptr<Shape>>&) override;
        virtual bool draw(const std::shared_ptr<Shape>&) override;
    };
}

#endif