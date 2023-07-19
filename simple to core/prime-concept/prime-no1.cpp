// Check if a number is prime or not.
// prime no. is only divisible by 1 and itself.
// 1 is not a prime no. as only one factor by which it is divisible.

// trial division algorithm
// #include<bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int primecheck(int n)
{
    if (n <= 1) return 0;
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return 0;
        }
        return 1;
    }
}

int main()
{
    cout << "enter the no.";
    int n;
    cin >> n;
    int ans = primecheck(n);
    if (ans == 1)
    {
        cout << "Yes it is a prime no.\n";
    }
    else
    {
        cout << "not a prime no.\n";
    }
    return 0;
}
