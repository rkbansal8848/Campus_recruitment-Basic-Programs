
// // Q2. print the nth fibonacci number

#include<iostream>
using namespace std;
int main() {
    int n,x=0,y=1,z=0,count=1;
    cout<<"Please Enter the index \n";
    cin>>n;
 for(int i=1;count<n;i++){
    x=y;
    y=z;
    z=x+y;
    ++count;
 }
 cout<<"your "<<n<<" prime no. is "<<z; 
return 0;
}
