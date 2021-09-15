#include <iostream>
#include "Progression.h"
#include "Absolute.h"

using namespace std;

int main()
{
    int n;
    long first, second;
    Progression p;
    Absolute ab(first, second);
    
    
    cout << "Enter n";
    cin >> n;
    p.printProgression(n);
}