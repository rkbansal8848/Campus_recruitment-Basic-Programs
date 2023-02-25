// #include<iostream>
// using namespace std;

// int main() {

//     int n,value,pos=0,count=0;
//     cout<<"Enter the no. of elements\n";
//     cin>>n;
//     int A[n];
//     cout<<"enter the array elements\n";
//     for(int i=0;i<n;i++){
//     cin>>A[i];
//    }

//    cout<<"enter the value to search\n";
//    cin>>value;

//    //find the first time occur position
//    for(int i=0;i<n;i++){
//     if(A[i]==value){
//       pos=i;
//       if(A[i]==value)
//       break;
//     }
//    }

//   //find the count for the value
//   for(int i=0;i<n;i++){
//     if(A[i]==value){
//       ++count;
//     }
//   }
//   cout<<"First time occur postion is "<<pos+1<<endl;
//   cout<<"occurence is "<<count; 
// return 0;
// }


// or Optimized Searching with only one for loop
#include<iostream>
using namespace std;

int main() {
     int pos;
    int n,value,count=0;
    cout<<"Enter the no. of elements\n";
    cin>>n;
    int A[n];
    cout<<"enter the array elements\n";
    for(int i=0;i<n;i++){
    cin>>A[i];
   }

   cout<<"enter the value to search\n";
   cin>>value;

   //find the first time occur position
   for(int i=0;i<n;i++){
    if(A[i]==value){
      ++count;
    }
    if(count==1){
        pos=i;
    }
   }

  cout<<"First time occur postion is "<<pos+1<<endl;
  cout<<"occurence is "<<count; 
return 0;
}
