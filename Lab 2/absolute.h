#include "Progression.h"

class Absolute : public Progression
{
public:
    Absolute();

    Absolute(long first, long second);

protected:
    long second;
    long nextValue();
};
