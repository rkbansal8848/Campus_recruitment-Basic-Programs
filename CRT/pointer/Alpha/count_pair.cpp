#include<iostream>
using namespace std;
int main() {
    int n=5,lb=0,ub=n-1;
    int A[n],pair=0,i=0,check;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
  cout<<"Your pairs are\n";
    while(lb<ub && i<n){
        check=A[i];
      while(check==A[i]){
      ++pair;
      }
      i++;
    }
   cout<<pair;
   
return 0;
}