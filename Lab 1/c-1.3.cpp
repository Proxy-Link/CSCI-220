#include <iostream>
#include <vector>

using std::vector;

bool compare(vector<int> container);

bool compare(vector<int> container)
{
    
    std::sort(std::begin(container), std::end(container));
    auto position = std::adjacent_find(std::begin(container), std::end(container));
    if (position != std::end(container))
    { return false; }

    else { return true; }
}

int main()
{
    vector<int> container = {5, 2, 3, 4, 1, 8};
    
    bool arr = compare(container);

    if (arr == false)
    {
        std::cout << "Not all unique";
    }
    else
    {
        std::cout << "All unique";
    }


}
