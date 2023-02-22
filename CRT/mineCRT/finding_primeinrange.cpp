#include<iostream>
#include<math.h>
using namespace std;// 10 to 100 total 21 prime number
int prime(int n,int n2){
    int c=0,count=0;
    while(n<=n2){

    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            ++c;
        }
    }
     if(c==2)
       { ++count;}
 ++n;
 c=0;
  }
   
 return count;
}
int main() {
    int n1,n2;
    cout<<"Enter the range\n";
    cin>>n1;
    cin>>n2;
    cout<<"Total prime no.s are "<<prime(n1,n2);
return 0;
}