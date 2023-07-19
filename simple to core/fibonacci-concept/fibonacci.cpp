// print the Fibonacci series up to user no.

#include <iostream>
using namespace std;

void fibonacci(int n)
{
     int x = 0, y = 1, z=0;
    for (int i = 0; i < n; i++)
    {
        cout << z<<" ";
        x = y;
        y = z;
        z = x + y;
        
    }
}

int main()
{
    cout << "enter the number \n";
    int n;
    cin >> n;
    fibonacci(n);
    return 0;
}