 #include<iostream>
#include<vector>
 using namespace std;
 int main(){
// 	pair is used to maintain the relationship between two variables
// pair <int,int> p;
//  p={30,50};
//  p={20,40};
// // cout<<p.first<<" "<<p.second;
//  pair <int,int> p1[]={{2,3},{2,3}};
//  cout<<p1[0].first<<" "<<p1[0].second;
//  cout<<"\n_____________________________________________________________________________________________"<<endl;
// (Dynamic Array)vector is used as a sequence containers just like the arrays
//  Static deleted automatically after the scope is completed
// Dynamic Alocation need to be deleted by the User
//  vector <int> v; //Statically allocated;
// or
// vector<int> *vp=new vector<int>();  //Dynamically allocated;
 
vector <int> v;
v.push_back(10);
v.push_back(29);
cout<<v[0]<<endl;
cout<<v[1];
//note v[2]=2 should only used for updation and get function as remember 
//coding ninja video the [] are only used after push_back for 
//for the updation as push_back will check the size increase is 
//needed or not then will insert the element at last
// v.at()is safer to use 
// as v[p] will return the garbage buy just moving the pointer

int return_the_size=v.size();
//push_back to del use pop_back;
//v.capacity()
}