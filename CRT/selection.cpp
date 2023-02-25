//Selection Sort
#include<iostream>
using namespace std;
int small(int A[],int sn){
 int s=A[0],i=0;

  for(int i=0;i<sn;i++){
     if(A[i]<s){
     swap(s,A[i]);
      }
  } 
  return s;
}
int main() {
    int n;
    cout<<"Enter the no. of elements\n";
    cin>>n;
     int A[n];
    cout<<"enter the array elements\n";
   for(int i=0;i<n;i++){
    cin>>A[i];
   } 

//    for()
  small(A,n);
return 0;
}