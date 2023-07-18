// #include<iostream>
// using namespace std;

// int pc(string s){
//     if(s.length()==1){
//         return 0;
//     }
//     int l=s.length();
//     for(int i=0;i<l/2;i++){
//         if(s[i]!=s[l-i-1]) return 0;
//     }
//     return 1;
// }

// int main() {
//     cout<<"Enter the string\n";
//     string s;
//     getline(cin,s);
//     cout<<pc(s);
    
// return 0;
// }


// palindrome number
#include<iostream>
#define max 100
using namespace std;

int pc(string s){
     if(s.length()==1){
        return 0;
     }
    int l=s.length();
    for(int i=0;i<l/2;i++){
        if(s[i]!=s[l-i-1]) return 0;
    }
    return 1;
}
//TRICK
// char arr[] = {'h', 'e', 'l', 'l', 'o'};
    // string s(arr, sizeof(arr));

int main() {
    int n;
        cout<<"Enter the number\n";
        cin>>n;
        string s=to_string(n);
   cout<<pc(s);
return 0;
}