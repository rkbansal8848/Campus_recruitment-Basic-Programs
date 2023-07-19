#include<bits/stdc++.h>
#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	pair <int,string> p;
	p=make_pair(3,"abc");
	p={4,"not"};
	pair <int,string> p1=p;
	p1.first;
//	cout<<p1.first<<endl; 
//	cout<<p.first;
//	pairs are used to maintain the relations between two values.
// ex of the two values;
int a[]={1,2,3};
int b[]={2,3,4};

pair<int,int> pray[3];
pray[0]={1,2};
pray[1]={2,3};
pray[2]={3,4};
for(int i=0;i<3;i++){
	cout<<pray[i].first<<" "<<pray[i].second<<endl;
}
swap(pray[0],pray[2]);
cout<<"______________________________________________________________________________________"<<endl;
for(int i=0;i<3;i++){
	cout<<pray[i].first<<" "<<pray[i].second<<endl;
}
//cout<<pray[0];//this is wrong;
cout<<pray[0].first;//this is right 


}









