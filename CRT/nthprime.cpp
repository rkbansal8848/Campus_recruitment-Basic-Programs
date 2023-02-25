#include <iostream>
#include<math.h>
using namespace std;
int main()
{

    int n,p=2,j=0,count=1;
    bool flag=false;
    cout<<"Please enter the index \n";
    cin>>n;
    
    if (n==1)
    {
       cout<<"Your "<<n<<" prime no. is "<<n+1;
    }
    else{
        //n/2 is not optimized
        //sqrt(n) is optimized
    for (int i = 3; i <= n; i++)
    {
        if (p % i == 0)
        {
            flag=true;
        }
        else {
                count++;   
           }   
            ++p;
       }
     
       cout<<"Your "<<n<<" prime no. is "<<count;
    }   


    return 0;
}