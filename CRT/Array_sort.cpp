#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int A[]={3,4,2,5};
   //sort(starting array address,ending array address)
  // sort(A,A+4);
  int l=sizeof(A)/sizeof(A[0]);
  sort(A,A+l);
  for(int i=0;i<4;i++){
    cout<<A[i]<<" ";
  }
return 0;
}