#include <iostream>
#include "Absolute.h"
#include "math.h"

using namespace std;

Absolute::Absolute()
{

    first = 2;
    second = 200;
        

}

Absolute::Absolute(long first, long second)
{
    this->first = first;
    this->second = second;
}

long Absolute::nextValue()
{
    cur = abs(first - second);
    return cur;
}