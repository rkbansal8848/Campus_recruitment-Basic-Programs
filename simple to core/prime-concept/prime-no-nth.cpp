// Find the nth prime number

#include <iostream>
#include <cmath>
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
    cout << "Enter the index for prime no.\n";
    int n1;
    cin >> n1;
    cout<<"no. are\n";
    for(int i=2;n1>0;i++){
        int ans=primecheck(i);
        if(ans==1){
            cout<<i<<" ";
            n1--;
        }
    }
    return 0;
}