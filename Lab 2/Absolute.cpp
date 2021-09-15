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

long Absolute::firstValue() 
{ // reset
    cur = first;
    return cur;
} 

long Absolute::nextValue()
{
    cur = abs(first - second);
    return cur;
}