#include "Polygon.h"

class Pentagon : public Polygon 
{
    public:
    Pentagon();

    protected:
    float area();
    float perimeter();
    long side[5];
};