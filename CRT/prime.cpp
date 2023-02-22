#include <iostream>
#include<math.h>
using namespace std;
int main()
{

    int n,j=0,track;
    bool flag=false;
    cout<<"Please enter the number\n";
    cin>>n;
    if(n<0){
        cout<<"Invalid Input"<<endl;
        exit(main());//main program is exited
    }
    if (n==1)
    {
       cout<<"Yes it is a prime no." /* code */;
    }
    else{
        //n/2 is not optimized
        //sqrt(n) is optimized
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag=true;
            track=i+j;
        }
       }
            
        if(flag){
            cout << "Not a prime no."<<endl;
        }
        else
        cout<<"yes it is a prime no.";
    }   
    return 0;
}