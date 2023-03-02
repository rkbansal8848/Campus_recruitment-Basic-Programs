#include<iostream>
#include<cstring>
using namespace std;

int cpalin(string s){
    int i;
 int l=s.size();
 for(i=0;i<l/2;i++){
   if(s[0]!=s[l-1-i]){
    return 0;
    break;
   }
 }
 if(i==l/2){
 return 1;
 }


}

int main() {
    int n=4,pcount=0;
    string s[n];

    for(int i=0;i<n;i++){
        cin>>s[i];
    }
  
  for(int i=0;i<n;i++){
    if(cpalin(s[i])==1){
    ++pcount;
    }
  }
  cout<<"Palindrome count is "<<pcount;


return 0;
}