// #include<iostream>
// using namespace std;
// int fact(int n){
//     int f=1;
//     for(int i=1 ; i<=n ;i++){
//      f=f*i;
//     }
// return f;
// }
// int main() {
//     int n,f;
//     cout<<"Enter The Number\n";
//     cin>>n;
//    f = fact(n);
//     cout<<"Your factorial is "<<f<<endl;
// return 0;
// }

// // Or Using the Recursive call
#include<iostream>
using namespace std;
int fact(int n){
    if(n==1)
    return 1;
    else
    {
        return n*fact(n-1);
    }
}
int main(){
  int n;
  cout<<"Enter The Number\n";
  cin>>n;
 cout<<"your no. is "<<fact(n);
}