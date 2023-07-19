#include<iostream>
using namespace std;
int main() {
    int n=5;
    int o=0;
    for(int i=1;i<=n;i++){
        for(int k=n;k>i;k--){
            cout<<" ";
        }
         for(int j=1;j<=i+o;j++){
         cout<<"*";
        
        }
    cout<<"\n";
    o=o+1;
    }
return 0;
}