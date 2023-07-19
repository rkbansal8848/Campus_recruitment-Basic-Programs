
#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector <int> v;
	v.push_back(23);
		v.push_back(33);
			v.push_back(43);
		
			for(int i=0;i<v.size();i++){
				cout<<v[i]<<" ";
			}
}