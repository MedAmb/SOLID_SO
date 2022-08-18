#include "OOPSetup.h"

#include "Cercle.h"
#include "Square.h"

namespace SOLID{

    bool OOPSetup::setup(std::vector<std::shared_ptr<Shape>>& shapes)
    {
        for(int i = 0; i < 1000; i++)
        {
            int random = m_randomNumberGenerator(0, 1);

            if(random == 0)
            {
                shapes.push_back(std::make_shared<Cercle>(Cercle(m_randomNumberGenerator(0, 100))));
            }
            else
            {
                shapes.push_back(std::make_shared<Square>(Square(m_randomNumberGenerator(0, 100))));
            }
        }

        return true;
    }

    bool OOPSetup::draw(const std::shared_ptr<Shape>& shape) 
    {
        return shape->draw();
    }

}