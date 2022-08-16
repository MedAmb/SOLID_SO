#include "EnumSetup.h"

#include "Circle.h"
#include "Square.h"

namespace SOLID{

    std::vector<std::shared_ptr<Shape>> EnumSetup::setup()
    {
        std::vector<std::shared_ptr<Shape>> shapes;

        for(int i = 0; i < 1000; i++)
        {
            int random = m_randomNumberGenerator(0, 1);

            if(random == 0)
            {
                shapes.push_back(std::make_shared<Circle>(Circle()));
            }
            else
            {
                shapes.push_back(std::make_shared<Square>(Square()));
            }
        }

        return shapes;
    }

}