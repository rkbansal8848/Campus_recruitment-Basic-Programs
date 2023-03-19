
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// class Solution {
// public:
//    void reverseString(vector <char> &s) {
//     reverse(s.begin(),s.end());
//     }
// };

// int main() {
//     vector <char> a{'a','b','c'};
//     Solution s;
//     s.reverseString(a);
//     for(char & t:a){
//         cout<<t;
//     }
// return 0;
// }

// #include <iostream>
// #include <vector>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     char input, ch;
//     vector<char> c;
//     cout<<"enter the characters";
//     for (int i = 0; i > -1; i++)
//     {
//         cin >> input;
//         c.push_back(input);
//         cout << "want to continue" << endl;
//         cout << "y/n" << endl;
//         cin >> ch;
//         if (ch == 'n')
//         {
//             break;
//         }
//     }
//      reverse(c.begin(),c.end());
//     for (char &d : c)
//     {
//         cout << d << " ";
//     }

//     return 0;
// }

//reversing using two pointers 
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
    vector<char> c{'a','b','c'};
    int i=0,j=c.size()-1;
    while(i<=j){
    char t=c[i];
    c[i]=c[j];
    c[j]=t;
    ++i;--j;
    }
    for(char &t:c){
        cout<<t<<' ';
    }

return 0;
}