// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {   vector<char> vect{'P','Q','R','S'};
//     string str(vect.begin(),vect.end());
//     cout<<str<<endl;
//     return 0;
//  }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<char> v{'P','Q','R','S'};
    reverse(v.begin(),v.end());
    for(auto e:v){
        cout<<v[e];
    }

return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     string s = "Hello World!";
//     vector<char> v{'f','f'};
//     copy(s.begin(), s.end(),back_inserter(v));
 
//     for (const char &c: v) {
//         std::cout << c;
//     }
 
//     return 0;
// }





  
// int main()
// {
//     std::string s = "Hello World!";
 
//     std::vector<char> v;
//     std::copy(s.begin(), s.end(), std::back_inserter(v));
 
//     for (const char &c: v) {
//         std::cout << c;
//     }
 
//     return 0;
// }