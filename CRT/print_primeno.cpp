#include<iostream>
#include<math.h>
using namespace std;
void add(int n){
    cout<<n;
}
void primec(int n){
    if(n==1){

    }
    else
    bool f=true;
    for(int i=2;i<=sqrt(n);i++){
     if(n%i==0){
     f=false;
     }
    }
  if(f){
    cout<<n<<endl;
  }

}
int main() {
    int n=2;
    while(n<=20){
    primec(n);
    ++n;
    }
return 0;
}