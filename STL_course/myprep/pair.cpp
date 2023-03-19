#include<iostream>
using namespace std;
int main() {
    pair <int,string> p;
    p.first=3;
    p.second="rk";
    cout<<p.first<<endl<<p.second<<endl;
    pair<int,pair<int,string>> p1;
    p1.first=30;
    p1.second.second="22";
    cout<<p1.first<<endl;
    cout<<p1.second.second;




return 0;
}