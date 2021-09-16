#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
   long double amntCharged;
   long double amntGiven;
   long double fee;
   int currCounter = 0;

   vector <double> money = {100.0, 50.0, 20.0, 10.0, 5.0, 1.0, 0.25, 0.10, 0.05, 0.01};
   vector <string> currency = {"Hundreds", "fifties" , "twenties", "tens", "fives", "ones", "quarters", "dimes", "nickels", "pennies"};

    cout << "Enter amount charged: ";
    cin >> amntCharged;
    cout << "Enter amount given: ";
    cin >> amntGiven;

    fee = amntCharged - amntGiven;

    for(double x : money)
    {
       int dividend = fee/x;
       fee = fee - (x*dividend);

       if (dividend > 0)
       {
           cout << dividend << " " << currency[currCounter];
           
       }

       ++currCounter;
       
    }

    


}