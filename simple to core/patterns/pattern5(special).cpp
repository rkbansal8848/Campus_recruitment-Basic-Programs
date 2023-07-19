#include<iostream>
using namespace std;
int main() {
    char n='e';
    for(char i='a';i<=n;i++){
        for(char j=i;j<=n;j++){ 
            cout<<j;
        }
        cout<<"\n";
    }
return 0;
}