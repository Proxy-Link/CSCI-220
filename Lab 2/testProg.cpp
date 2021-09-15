#include <iostream>

#include "Absolute.h"

using namespace std;

int main()
{
    int n;
    Absolute ab(0,0);
    
    
    cout << "Enter n";
    cin >> n;
    ab.printProgression(n);
}