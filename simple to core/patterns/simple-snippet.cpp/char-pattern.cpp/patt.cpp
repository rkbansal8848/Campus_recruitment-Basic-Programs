// // Simple Pattern with Incremental Alphabets
// #include<iostream>
// using namespace std;
// int main() {
//          int n=5;
//          char s='a';
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//           cout<<s;
//         }
//         s++;
//         cout<<"\n";
//     }
// return 0;
// }


// 2.Simple Pattern with Incremental Alphabets
#include<iostream>
using namespace std;
int main() {
         int n=5;
    for(int i=1;i<=n;i++){
        char s='a';
        for(int j=1;j<=i;j++){
          cout<<s++;
        }
        cout<<"\n";
    }
return 0;
}