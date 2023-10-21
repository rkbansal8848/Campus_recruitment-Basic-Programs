#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    // string s="hello";
    // reverse(s.begin(),s.end());
    // cout<<s;

    char s[]={'h','e','l'};
    string s1(s);
    reverse(s1.begin(),s1.end());
    for(int i=0;i<s1.size();i++){
        s[i]=s1[i];
    }
   for(auto p:s){
    cout<<p<<" ";
   }
return 0;
}