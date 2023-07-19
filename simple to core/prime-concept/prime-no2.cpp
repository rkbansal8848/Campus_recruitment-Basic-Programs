// Generate all prime numbers up to a given limit.

#include <iostream>
#include <math.h>
using namespace std;

int primecheck(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}

int main()
{
    cout << "how many first prime no.s you want\n";
    int n;
    cin >> n;
    cout<<"no. are\n";
    for(int i=1;n>0;i++){
        int ans=primecheck(i);
        if(ans==1){
            cout<<i<<" ";
            n--;
        }
    }
    return 0;
}