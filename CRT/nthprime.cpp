#include<iostream>
#include<math.h>
using namespace std;
int tprime(int n){
      if(n<2)
      return 0;

      for(int i=2;i<=sqrt(n);i++){
      if(n%i==0){
         return 0;
      }
      }
   return 1;
}

int main() {
   int num,pcount=0,count=1;
   cout<<"enter the no.\n";
   cin>>num;
  
   while(num)
   {
      if(tprime(count)){
         pcount++;
      }
      if(pcount==num){
         break;
      }
      count++;
   }
   cout<<"prime no. is"<<count;

return 0;
}