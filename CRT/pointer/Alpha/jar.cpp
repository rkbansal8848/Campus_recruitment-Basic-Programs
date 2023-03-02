#include<iostream>
using namespace std;
int main() {
    int n,k,num;
    cin>>n>>k;
   cin>>num;
   if(num<=n){
    cout<<"NUMBER OF CANDIES SOLD:"<<num<<endl;
    cout<<"NUMBER OF CANDIES LEFT:"<<n-num<<endl;
   }
   else
   {
   cout<<"NUMBER OF CANDIES SOLD:"<<num<<endl;
   cout<<"NUMBER OF CANDIES LEFT:"<<n-num<<endl;
   }

return 0;
}