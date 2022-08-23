#include "VariantVisitorSetup.h"

#include "Cercle.h"
#include "Square.h"

#include "DrawOp.h"

namespace SOLID{

    bool VariantVisitorSetup::setup(std::vector<std::shared_ptr<Shape>>& shapes)
    {
        for(int i = 0; i < 1000; i++)
        {
            int random = m_randomNumberGenerator(0, 1);

            if(random == 0)
            {
                shapes.push_back(std::make_shared<Cercle>(m_randomNumberGenerator(0, 100)));
            }
            else
            {
                shapes.push_back(std::make_shared<Square>(m_randomNumberGenerator(0, 100)));
            }
        }

        return true;
    }

    bool VariantVisitorSetup::draw(const std::shared_ptr<Shape>& shape) 
    {
        std::visit([](auto&& arg) { Draw()(arg); }, *shape);
        return true;
    }

}