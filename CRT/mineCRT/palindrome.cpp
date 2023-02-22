#include<iostream>
using namespace std;
int main() {
    int rev=0,old,n;
    cout<<"Enter The Number\n";
    cin>>n;
    old=n;
    for(int i=1;n>0;i++){
    //Reverse Logic
    rev=(rev*10)+n%10;
    n=n/10;
    }
    if(old==rev)
    cout<<"yes it is a palindrome\n";
    else
    cout<<"Not a Palindrome\n";

return 0;
}