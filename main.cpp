#include "Shape.h"

#ifdef ENUM
#include "EnumSetup.h"
using SETUP = SOLID::EnumSetup;
#endif

#ifdef OOP
#include "OOPSetup.h"
using SETUP = SOLID::OOPSetup;
#endif

#ifdef VSTOR
#include "VisitorSetup.h"
using SETUP = SOLID::VisitorSetup;
#endif

#include <iostream>
#include <chrono>
#include <vector>
#include <memory>

int randomNumberGenerator(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

int main()
{

    std::vector<std::shared_ptr<SOLID::Shape>> shapes;

    auto Setup = std::make_shared<SETUP>(randomNumberGenerator);

    Setup->setup(shapes);

    auto begin = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();

    for(int i = 0; i < 1000000; ++i)
    {
        for (auto &shape : shapes)
        {
            Setup->draw(shape);
        }
    }

    auto end = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();

    std::cout << "Time: " << end - begin << "ms" << std::endl;
}