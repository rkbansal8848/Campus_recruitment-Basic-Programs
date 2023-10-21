#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5};
    // auto keyword lets the compiler figure out the correct type for you, so you don't have to explicitly specify it
    // Using a standard for loop with iterators
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        std::cout << *it << " ";
    }
    // for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
    //     std::cout << *it << " ";
    // }

    return 0;
}