// // tringle with space
// #include<iostream>
// using namespace std;
// int main() {
//      int n=5;
//     for(int i=1;i<=n;i++){
//         for(int k=1;k<=n-i;k++)
//         cout<<" ";
//         for(int j=1;j<=i;j++){
//           cout<<"*";
//         }
//         cout<<"\n";
//     }
// return 0;
// }

// reverse triangle with space
#include<iostream>
using namespace std;
int main() {
      int n=5;
    for(int i=n;i>=1;i--){
        for(int k=n-i;k>=1;k--)
        cout<<" ";
        for(int j=i;j>=1;j--){
          cout<<"*";
        }
        cout<<"\n";
    }
return 0;
}