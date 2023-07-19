 #include<iostream>
 #include<array>
 using namespace std;
 int main(){
 	array<int,3> ar;
	//garbage in the main function but it is assinged to the zero when it is in the global scope
   array <int,4> a={1,2,3,4l};
   array <int,5> b= {3};
   array <int,4> c;
//   for(int i=0;i<5;i++){
//   	cout<<b[i]<<" ";
//   }
//   cout<<"___________________________________________________________________________________"<<endl;
//    for(int i=0;i<5;i++){
//   	cout<<c[i]<<" ";
//   }
//   for(auto i :a){
//   	cout<<i<<" ";
//   }
//   c.fill(89);
//    for(auto i :c){
//   	cout<<i<<" ";
//   }
//   cout<<endl;
//   cout<<c.at(3);
   //iterators
   // begin(),end(), rbegin(), rend()
//   begin() --> 
   cout<<a.begin();
 }
 