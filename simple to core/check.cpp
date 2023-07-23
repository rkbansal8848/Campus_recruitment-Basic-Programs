#include<iostream>
using namespace std;
int main() {
    // int a=5;
    // int &b=a;
    // b=8;
    // cout<<a<<endl;
    // b=a;
    // cout<<b;

    int a=5;
    int *p=&a;
    int c=*p;
    cout<<c;
    

return 0;
}