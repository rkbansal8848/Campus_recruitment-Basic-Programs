//Modified Quick Sort
#include<iostream>
using namespace std;
int main() {
      int n;
    cout<<"Enter the no. of elements\n";
    cin>>n;
     int A[n];
    cout<<"enter the array elements\n";
   for(int i=0;i<n;i++){
    cin>>A[i];
   }
     int flag=0;
   for(int i=0;i<n-1;i++){
   //inside for for phases
    for(int j=0;j<n-i-1;j++){
        if(A[j+1]<A[j]){
            flag=1;
            int t=A[j+1];
            A[j+1]=A[j];
            A[j]=t;
        }
    }
    if(flag==0){
        break;
    }
   }
    cout<<"Your Sorted array is\n";
    for(int i=0;i<n;i++){
    cout<<A[i]<<" ";

   }
return 0;
}