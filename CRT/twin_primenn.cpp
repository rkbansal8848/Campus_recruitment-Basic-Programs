#include<iostream>
#include<math.h>
using namespace std;

void add(int x){
   cout<<x<<endl;
    // cout<<x;
    // cout<<",";
    // cout<<x+2<<endl;
}

int main() {
     int n=3,j=0;
    bool flag=true;

    while(n<=20){
    for (int i = 2; i < sqrt(n); i++)
    {
        if ((n % i == 0))
        { 
        flag=false;
        }
        
        if(flag)
        {
         add(n);
        }
        ++n;
       }
        ++n;
    }  
     
return 0;
}