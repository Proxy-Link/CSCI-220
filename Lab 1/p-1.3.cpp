#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    
    int n = 0;
    int people[n];
    int birthday;
    float trialCount;
    bool share = false;


    srand(time(NULL));

    cout << "Enter number of people: ";
    cin >> n;

    for(float trial = 1; trial <= 10; ++trial)
    {
        for(int i = 0; i < n; ++i)
        people[n] = rand() % 365;

        for(int i = 0; i < n; ++i)
        {
            for(int j = i + 1; i<n; ++j)
            {
                if (people[i] == people[j])
                {
                    share = true;
                    ++trialCount;
                } 
            }
        }
        cout << "probability of shared birthday: " << trialCount/trial;
    }

    
    


}






