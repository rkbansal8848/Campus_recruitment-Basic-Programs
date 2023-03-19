//unordered map
#include<iostream>
#include<unordered_map>
using namespace std;
int main() {
    unordered_map<string,int> p;
    pair<string,int> p1={"rk",3};
    p.insert(p1);
    cout<<p.at("rk");


return 0;
}