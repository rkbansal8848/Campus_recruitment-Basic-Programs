#include<iostream>
using namespace std;
int main() {
    int n=5;
    for(int i=1;i<=n;i++){
        for(int k=1;k<i;k++){
            cout<<" ";
        }
         for(int j=1;j<=i;j++){
         cout<<"*";
        }
    cout<<"\n";
    }
return 0;
}