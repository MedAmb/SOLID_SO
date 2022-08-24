#include "StrategySetup.h"

#include "Cercle.h"
#include "Square.h"

#include "DrawStrategy.h"



namespace SOLID{

    bool StrategySetup::setup(std::vector<std::shared_ptr<Shape>>& shapes)
    {
        for(int i = 0; i < 1000; i++)
        {
            int random = m_randomNumberGenerator(0, 1);

            if(random == 0)
            {
                shapes.push_back(std::make_shared<Cercle>(m_randomNumberGenerator(0, 100), Draw{}));
            }
            else
            {
                shapes.push_back(std::make_shared<Square>(m_randomNumberGenerator(0, 100), Draw{}));
            }
        }

        return true;
    }

    bool StrategySetup::draw(const std::shared_ptr<Shape>& shape) 
    {
        return shape->draw();
    }

}