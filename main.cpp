#include "EnumSetup.h"
#include "Shape.h"

#include <iostream>
#include <chrono>


int randomNumberGenerator(int min, int max)
{
    return rand() % (max - min + 1) + min;
}


int main()
{

    std::vector<std::shared_ptr<Shape>> shapes;

    std::shared_ptr<ISetup> Setup = std::make_shared<ISetup>(EnumSetup(randomNumberGenerator));

    shapes = Setup->setup();


    int begin = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();

    for(auto& shape : shapes)
    {
        shape->draw();
    }

    int end = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();

    std::cout << "Time: " << end - begin << "ms" << std::endl;


}