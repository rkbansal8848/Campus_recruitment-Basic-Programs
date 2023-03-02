//learn bitwise operator applications

//bit manipulation programming  s=O(1),t=O(n)
#include<iostream>
using namespace std;
int main() {int n,count=0;

    // cout<<(7 & 1);
    cin>>n;
    while(n!=0){
        if(n&1==1){
            ++count;
        }
     n=n>>1;
    }
    cout<<count;
return 0;
}   

