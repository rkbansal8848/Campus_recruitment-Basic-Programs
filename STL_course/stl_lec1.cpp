 #include<iostream>
 #include<string>
 
 using std::cout;
 using std::endl;
 using std::cin;
 using namespace std;
 namespace stdm{
 int rk=190;
 int show(){
 	return 100;
 	
 }
 string sc="hello";
 }
// using namespace stdm;
 
 int main(){
 	int a[10]={1,2,3};
 	char c[10]="rkbansal";
 	char *c2="rk";
 	int rk=45;
 	cout<<stdm::rk<<endl;
 	cout<<stdm::sc<<endl;
 	cout<<c<<endl;
 	cout<<a[2]<<endl;
	cout<<c2; 
 }