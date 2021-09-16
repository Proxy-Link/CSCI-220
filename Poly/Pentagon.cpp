#include "Pentagon.h"
#include "math.h"

Pentagon::Pentagon()
{

}

float Pentagon::area()
{
    
    area = (1/4) (sqrt(5*(5+2*sqrt(5))))*pow(side[2],2);
    return area;
}

float Pentagon::perimeter()
{
    
    for (size_t i = 0; i < 4; i++)
    {
        perimeter += side[i];
    }

    return perimeter;
}
