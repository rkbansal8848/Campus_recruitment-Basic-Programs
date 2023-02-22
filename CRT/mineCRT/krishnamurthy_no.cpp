#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=1 ; i<=n ;i++){
     f=f*i;
    }
return f;
}
int main() {
    int n,f,old,result=0;// I/P =145 is a Krishnamurthy no.
    cout<<"Enter The Number\n";
    cin>>n;
    old=n;
    for(int i=1;n>0;i++){
     result+=fact(n%10);
     n=n/10;
    }
   if(old==result){
    cout<<"Krishnamurty no.\n";
   }
   else
   cout<<"NOt a Krishnamurty no.\n";
return 0;
}