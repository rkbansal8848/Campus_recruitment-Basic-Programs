// #include<iostream>
// using namespace std;
// int main() {
//     int n,x=0,y=1,z=0;
//     cout<<"Please Enter Number\n";
//     cin>>n;
//  for(int i=1;z<=n;i++){
//     cout<<z<<endl;
//     x=y;
//     y=z;
//     z=x+y;
//  }
// return 0;
// }

// // Q2. enter the n fibonacci series 

// #include<iostream>
// using namespace std;
// int main() {
//     int n,x=0,y=1,z=0,count=1;
//     cout<<"Please Enter total Number for series\n";
//     cin>>n;
//  for(int i=1;count<=n;i++){
//     cout<<z<<endl;
//     x=y;
//     y=z;
//     z=x+y;
//     count++;
//  }
// return 0;
// }

//  // or

#include<iostream>
using namespace std;
int main() {
    int n,x=0,y=1,z=0;
    cout<<"Please Enter total Number for series\n";
    cin>>n;
 for(int i=1;i<=n;i++){
    cout<<z<<endl;
    x=y;
    y=z;
    z=x+y;
 }
return 0;
}