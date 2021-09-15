#include "Progression.h"

class Absolute : public Progression
{
public:
    Absolute();

    Absolute(long first, long second);
    ~Absolute(){};

protected:
    long second;
    long nextValue();
    long firstValue();

};
