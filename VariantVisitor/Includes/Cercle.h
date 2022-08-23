#ifndef __CERCLE_H__
#define __CERCLE_H__

namespace SOLID
{
    class Cercle
    {
    public:
        explicit Cercle(int radius) : m_Radius(radius) {}
        virtual ~Cercle() = default;
    private:
        int m_Radius;
    };

    
}

#endif


