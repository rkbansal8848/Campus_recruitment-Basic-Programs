#include<iostream>
using namespace std;
void bins(int A[],int n,int v){
    int pos,f=0;
 for(int i=0;i<n;i++){
    if(v==A[i]){
    pos=i;
    f=1;
    break;
    }     
    }
 if(f==0){
  cout<<"not found";
 }   
 else
 cout<<"your no. was found at "<<pos<<" position";
}

int main() {
     int n,value;
    cout<<"Enter the no. of elements\n";
    cin>>n;
    int A[n];
    cout<<"enter the array elements\n";
   for(int i=0;i<n;i++){
    cin>>A[i];
   }
   cout<<"enter the value to search";
   cin>>value;
  bins(A,n,value);
  
return 0;
}