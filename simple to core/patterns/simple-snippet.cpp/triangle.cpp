// Simple Triangle Programs

// #include<iostream>
// using namespace std;
// int main() {
//     int n=6;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
// return 0;
// }

// reverse simple triangle
#include<iostream>
using namespace std;
int main() {
    int n=5;
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
          cout<<"*";
        }
        cout<<"\n";
    }
return 0;
}