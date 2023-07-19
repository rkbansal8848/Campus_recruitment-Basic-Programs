//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct ty{
	int a;
	int b;
//	ty(){ //if ty t --> then error is produced
//	}
	ty(int a_,int b_){
		a=a_;
		b=b_;
	}
};

int main(){
	ty t(20,78);
	ty t2(100,200);
	cout<<t.a<<endl<<t.b<<endl;
	cout<<t2.a<<endl<<t2.b;
	
}