#include<iostream>
using namespace std;
int lcm(int a, int b){
    int i;
for(i=a>b?a:b;i<a*b;i++){
        if(i%a==0 and i%b==0)
        break;
    }
    return i;
}

int hcf(int a, int b){
    int i;
for(i=a<b?a:b;i>=1;i--){
        if(a%i==0 and b%i==0)
        break;
    }
    return i;
}

int main() {
  
    int a,b;
  cin>>a>>b;
    //LCM
  cout<<"LCM is "<<lcm(a,b)<<endl;
  //HCF
  cout<<"HCF is "<<hcf(a,b)<<endl;
    
return 0;       
}       