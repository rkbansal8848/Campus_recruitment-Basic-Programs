//Generate prime no. for a range

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
    cout << "Enter the range for the prime numbers\n";
    int n1,n2;
    cin >> n1;
    cin >> n2;
    cout<<"no. are\n";
    for(int i=n1;i<=n2;i++){
        int ans=primecheck(i);
        if(ans==1){
            cout<<i<<" ";
            
        }
    }
    return 0;
}