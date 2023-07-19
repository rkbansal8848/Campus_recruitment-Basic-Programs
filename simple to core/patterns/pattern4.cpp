#include<iostream>
using namespace std;
int main() {
    for(int i=1;i<=5;i++){
        char s='a';
        for(char j=1;j<=i;j++){ 
            cout<<s;
            s++;
        }
        cout<<"\n";
    
    }
return 0;
}