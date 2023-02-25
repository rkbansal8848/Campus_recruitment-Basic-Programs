#include<iostream>
using namespace std;
int main() {
    int n,sum;
    cout<<"enter the number";
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<"Yes this a perfect number";
    }
    else
    cout<<"Not a Prime no.";
return 0;
}