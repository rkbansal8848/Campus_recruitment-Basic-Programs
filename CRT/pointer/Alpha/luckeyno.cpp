//NOte no should be four digit and if <0 invalid no
#include <iostream>
using namespace std;
int isdiv(int n)
{
    if (n % 3 == 0)
    {
        return 1;
    }
    else if (n % 5 == 0)
    {
        return 1;
    }
    else if (n % 7 == 0)
    {
        return 1;
    }
    else
        return 0;
}

// int isdiv(int n)
// {
//     if (n % 3 == 0 || n %5 == 0 || n % 7 == 0)
//     {
//         return 1;
//     }
//     else
//         return 0;
// }

int main()
{
    int n, sum = 0, check,count=0;
    cin >> n;
    while (n!=0)
    {
        sum += n % 10;
        n = n / 10;
        ++count;
    }
    check = isdiv(n);
    if (check && count==4 && n>0)
    {
        cout << "Lucky number";
    }
    else if(!count==4){
        cout << "Not my lucky number";
    }
    else//-ve number and 0 number
        cout << "Invalid no.";
    return 0;
}