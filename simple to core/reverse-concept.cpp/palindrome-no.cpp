#include<iostream>
using namespace std;
int palindromecheck(int n){
   int x,reverse=0,org=n;
   while(n>0){
    x=n%10;
    reverse=(reverse*10)+x;
    n=n/10;
   }
   if(org==reverse) return 1;
   else return 0;

}
int main() {
    cout<<"Enter the number ";
    int n; cin>>n; int ans=palindromecheck(n);
    if(ans==1) cout<<"palindrome";
    else cout<<"not a palindrome";
return 0;
}