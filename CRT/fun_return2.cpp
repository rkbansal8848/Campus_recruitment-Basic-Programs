#include<iostream>
using namespace std;
double* adf(int A[],int n){
    double sum=0,avg=0;
    double *ptr=new double[2];
 for(int i=0;i<n;i++){
    sum+=A[i];
   }
   avg=sum/n;
   ptr[0]=sum;
   ptr[1]=avg;
  return ptr;
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

    double *ptr=adf(A,n);
    cout<<endl;
    cout<<"_____________________________________________________________________________"<<endl;

    cout<<"your sum is "<<ptr[0]<<endl;
    cout<<"your average is "<<ptr[1];
return 0;
}