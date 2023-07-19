#include<iostream>
#include<vector>
using namespace std;

void printvec(vector<int> v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}
int main(){
//	vector is similar to the array 
// vector is a type of dynamic array
int a[3];
vector<int> v;//0 size right now
int n;
cout<<"enter the array size"<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
	int x;
	cin>>x;
    v.push_back(x); //O(1)
}
printvec(v);





//vector<pair<int,int> > v;



	
}