#include <vector>
#include <memory>
#include <functional>

#include "Shape.h"

namespace SOLID{
    class ISetup{
    public:
        explicit ISetup(std::function<int (int, int)> randomNumberGenerator) : m_randomNumberGenerator(randomNumberGenerator) {}
        virtual std::vector<std::shared_ptr<Shape>> setup() = 0;

    protected:
        std::function<int (int, int)> m_randomNumberGenerator;
    };
}