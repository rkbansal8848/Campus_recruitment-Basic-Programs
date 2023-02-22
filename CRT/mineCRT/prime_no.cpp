// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
//     int n,count=0;
//     cout<<"Enter Your Number\n";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             ++count;
//         }
//     }
//     if(count==2)
//         cout<<"Prime no.\n";
//     else
//     cout<<"Composite no.\n";
// return 0;
// }

// // OR 
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
//     int n,count=0;
//     cout<<"Enter Your Number\n";
//     cin>>n;
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//             ++count;
//         }
//     }
//     if(count==1)
//         cout<<"not Prime no.\n";
//     else if(count!=1 && n!=1)
//     cout<<"prime no.\n";
//     else if(n==1)
//     cout<<"not Prime no.";
// return 0;
// }

// // OR optimized
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n,count=0;
    cout<<"Enter Your Number\n";
    cin>>n;
    if(n==1){
    cout<<"not a prime no.";
    }
   else
   { for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            ++count;
        }
    }
    if(count==1)
        cout<<"not Prime no.\n";
    else
    cout<<"prime no.\n";
   }
return 0;
}
