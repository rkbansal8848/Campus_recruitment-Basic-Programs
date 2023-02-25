#include<iostream>
#include<math.h>
using namespace std;
int prime(int n){//i<n or i<=sqrt(n)
   for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
        return 0;
    }
   }
   
   return 1;
}
int main() {
    int n1,n2,sum;
    cout<<"enter the start and end no.\n";
    cin>>n1;
    cin>>n2;
    cout<<"......................................................................."<<endl;
   if(n1<=1){
    n1=2;
   }
   for(int i=n1;i<n2;i++){
    if(prime(i) && prime(i+2)){
        cout<<i<<" "<<i+2<<endl;
    }
   }

    
return 0;
} 