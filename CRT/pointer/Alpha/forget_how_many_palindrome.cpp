#include<iostream>
#include<cstring>
#include<string>
#include<typeinfo>
using namespace std;
int tpalin(char a[]){
int l=strlen(a),i;
for(i=0;i<l/2;i++){
    if(a[i]!=a[l-1-i]){
        return 0;
        break;
    }
}    
if(i==l/2)                                  
return 1;

}

struct str{
    public:
    string s;
};
int main() {string s;
 int n=5,count=0,v=0,i=0,pcount=0;
 str a[n];
 for(int i=0;i<n;i++){
    cin>>a[i].s;
 }
//  cout<<typeid(a[0].s).name();


tpalin(bg);

//  while(i<n){
     
//     v=tpalin(a[i].s);
//     if(v==1){
//         ++pcount;
//     }
//  }
//   cout<<"no. of palindrome is "<<pcount;


// //printing
// for(int i=0;i<n;i++){
//     cout<<a[i].s<<" ";
//  }


return 0;
}