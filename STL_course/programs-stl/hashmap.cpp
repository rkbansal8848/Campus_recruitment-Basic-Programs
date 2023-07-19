#include<iostream> 
#include<unordered_map>
using namespace std;
int main() {
    //insert
    unordered_map<string,int> omap;
     pair <string,int> ma("abc",1);
     omap.insert(ma);
    omap["def"]=2;

    //find or access
    cout<<omap["def"]<<endl;
    cout<<omap.at("abc");

    //check if key is present or not
    //map cannot have duplicate key
    if(omap.count("ghi")>0){
      cout<<"yes key is present";
    }

//size
cout<<omap.size()<<endl;
//erase
omap.erase("abc");


return 0;
}