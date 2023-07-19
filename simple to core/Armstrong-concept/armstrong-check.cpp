// Check if no. is armstrong or not
#include<iostream>
#include<cmath>
using namespace std;
int count(int n){int ans=0; while(n>0){n/=10;ans++;} return ans;}

int armst(int n){
    if(n<0) return 0;
    int org=n,x,digit=count(n),ans=0;
    while(n>0){
        x=n%10;
         ans+=pow(x,digit);
        n/=10;
    }
    if(ans==org) return 1;
    else return 0;

}
int main() {
    cout<<"Enter\n";
    int n; cin>>n;

    cout<<armst(n);

return 0;
}