#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n,count=0;
    cout<<"Enter Your Number\n";
    cin>>n;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            ++count;
        }
    }
    if(count==2)
        cout<<"Prime no.\n";
    else
    cout<<"Composite no.\n";
return 0;
}