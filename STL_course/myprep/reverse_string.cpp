#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    char a[]="abcd";
    string s(a);
    reverse(s.begin(),s.end());

return 0;
}

// class Solution {
// public:
//     void reverseString(vector <char> s) {
//     string st(s.begin(),s.end());
//     reverse(st.begin(),st.end());
//     copy(st.begin(), st.end(),back_inserter(s));

//     }
// };