#include<iostream>
#include<string.h>

using namespace std;
int main() {
    char s[]="abcd";
    int len=sizeof(s)/sizeof(char);//include null character
    cout<<"length for char array "<<len-1<<endl;
    cout<<"length for char array "<<strlen(s);

    cout<<"\n--------------------------------------------------------------------------\n";
    string s1="hello";
    cout<<s1.size();

return 0;
}