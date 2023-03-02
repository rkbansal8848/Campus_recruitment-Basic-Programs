#include<iostream>
#include<algorithm>
using namespace std;
int largencount(int a[],int n){

 int largen=a[n-1],count=0;
 for(int i=0;i<n;i++){
  if(largen==a[i]){
    ++count;
    }
  }
  return count;
}

int main() {
    int n=5,min,result;
    int a[n]={3,4,2,5,5};
    sort(a,a+4);
    result=n-1;
    min=largencount(a,n);
    cout<<a[result-min];
    // cout<<"Second Greatest no. is "<<a[result-min];
return 0;
}