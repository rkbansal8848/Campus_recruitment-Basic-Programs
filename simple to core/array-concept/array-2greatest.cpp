//Second largest element in the array

// #include<iostream>
// #include<cstring>
// #include<algorithm>
// using namespace std;
// int main() {
//     int n=5;
//     int ans;
//     int ar[n]={5,3,4,5,6};
//     sort(ar,ar+4);
//     for(int i=0;i<n-1;i++){
//          ans=ar[i];
//     }
//     cout<<ans;
// return 0;
// }


#include<iostream>
using namespace std;
#include<climits>
int main() {
     int n=5;
    int ar[n]={5,3,4,5,6};
    int large=INT_MIN;
    int secl=INT_MIN;

    for(int i=0;i<n;i++){
        if(ar[i]>large){ secl=large; large=ar[i]; }
        else if(ar[i]>secl && ar[i]!=large) { secl=ar[i]; }

    }
    if(secl==INT_MIN)  { cout<<"there is no second largest element\n"; }
    else cout<<"second largest element is "<<secl;
return 0;
}