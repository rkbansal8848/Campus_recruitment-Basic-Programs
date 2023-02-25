#include<bits/stdc++.h>
using namespace std;
//how to check if all array elements are same;
void bsort(int A[],int n){
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
}
int main() {int count=0;
    int A[]={3,4,9,9};
    bsort(A,4);
    int gt=A[4-1];
    int check=A[0];
    //if all elements of the array are same
    
    for(int i=0;i<4;i++){
         if(check==A[i]){
            
         }
        if(A[i]>gt){
        gt=A[i];
        if(A[i]==A[i+1]){
            ++count;
        }
        }
    }
    cout<<"Second greatest is \n"<<gt-count;
return 0;
}