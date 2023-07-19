#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    string str="abcd";
    reverse(str.begin(),str.end());
    cout<<str<<endl;
 

cout<<"________________________________________________________________________________________\n";
char str2[]="hello";
string s(str2);
 reverse(s.begin(),s.end());
cout<<s;


return 0;
}