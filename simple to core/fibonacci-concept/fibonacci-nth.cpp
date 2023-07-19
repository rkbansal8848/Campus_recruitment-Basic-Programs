#include<iostream>
using namespace std;
int fibonacci(int n){
    int x=0,y=1,z=0,ans;
    for(int i=0;i<n;i++){
        ans=z;
        x=y; y=z; z=x+y;
    }
    return ans;
}
int main() {
   cout << "enter the nth number ";
    int n;
    cin >> n;
   cout<< fibonacci(n);
    return 0;
}