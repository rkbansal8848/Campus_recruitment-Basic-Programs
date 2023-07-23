#include<iostream>
// Without using the 3rd variable
using namespace std;
int main() {
    int a=4;
    int b=3;
    //swapping
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a;
    cout<<endl<<b;
return 0;
}