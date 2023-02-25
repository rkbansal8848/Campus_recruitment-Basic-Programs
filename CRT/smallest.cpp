#include<iostream>
using namespace std;//Q use swap for s
int small(int A[],int n){
    int s=A[0];
    for(int i=0;i<n;i++){
     if(A[i]<s)
     s=A[i];
    }
 return s;
}
int main() {
    int A[5]={4,5,2,1,9};
    cout<<"Smallest no. is "<<small(A,5);
return 0;
}