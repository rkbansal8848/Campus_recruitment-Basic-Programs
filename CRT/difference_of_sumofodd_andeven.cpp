#include <iostream>
using namespace std;
int main()
  {
    int n, sume = 0, sumo = 0;
    int num;
    cin >> n;
    while (n > 0)
    {
        num = n % 10;
        if (num % 2 == 0)
        {
            sume += num;
        }
        else
        {
            sumo += num;
        }
        n = n /10;
    }
    cout << (sumo-sume);
    return 0;
}