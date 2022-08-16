#include "ISetup.h"

namespace SOLID{

    class Shape;

    class EnumSetup : public ISetup{
    public:
        explicit EnumSetup(std::function<int (int, int)> randomNumberGenerator) : ISetup(randomNumberGenerator) {}
        std::vector<std::shared_ptr<Shape>> setup() override;
    };

}