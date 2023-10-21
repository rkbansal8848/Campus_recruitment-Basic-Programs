#include<iostream>
#include<algorithm>
using namespace std;
int main() {

int ar[]={1,2,3,4,5,6,7};
int size=sizeof(ar) / sizeof(ar[0]); // 28/4=7 
reverse(ar,ar+7); // ar gives starting address , ar+7 gives end address
for(auto s:ar){
    cout<<s<<" ";
}

}

