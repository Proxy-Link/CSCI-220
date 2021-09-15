#include <iostream>
#include "Progression.h"

using namespace std;



void Progression::printProgression(int n) { // print n values
cout << firstValue(); // print the first
for (int i = 2; i <=n; i++)
 // print 2 through n
cout << "" << nextValue();
cout << endl;
}

long Progression::firstValue() 
{ // reset
cur = first;
return cur;
} 

long Progression::nextValue() 
{
return ++cur;
}