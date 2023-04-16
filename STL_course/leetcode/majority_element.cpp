// //Brute force Method:
// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//   public:
//      // Function to find majority element in the array
//     // a: input array
//     // size: size of input array
//     int majorityElement(int a[], int size)
//     { 
//         int flag=0,repeat=1,ans;
    
//         for(int i=0;i<size;i++){
//             for(int j=i+1;j<size;j++){
//                 if(a[i]==a[j]) ++repeat;
//             }
//         if(repeat>size/2) 
//         {
//             ans=a[i];
//             flag=1;
            
//             break;
//         }
//         repeat=0;
//         }
//     if(flag==0)return -1;
//     else return ans;
        
//     }
// };



// int main(){

//     int t;
//     cin >> t;

//     while(t--){
//         int n;
//         cin >> n;
//         int arr[n];
        
//         for(int i = 0;i<n;i++){
//             cin >> arr[i];
//         }
//         Solution obj;
//         cout << obj.majorityElement(arr, n) << endl;
//     }

//     return 0;
// }

// // } Driver Code Ends

//Boyer-Moore Voting algorithm

// Two steps:
// 1. Finding the Candidate Element
// Identifying the element occuring the most no. of times
// time complexity O(n)
//  Basic idea is that if we cancel out each occurene of an elemnent e with all the other
// elements that are different from the e then e will will exist till end if it is 
// the mojority element.
// moore Voting algorithm
// @ findCandidate(a[],size)
//  maj_index=0;count=1;
//  for i =1 to size-1
//  if a[maj_index] == a[i] count++;
//  else count--;
//  if count==0
//  maj_index=i;
//  count =1;
//  return a[maj_index];
// 2.check if candidate appears more than the > size/2;

//   source code

int majorityElement(int a[], int size)
    {    //Candidate
        int maj_index=0,count=1,cans;
        for(int i=1;i<size;i++){
            if(a[maj_index]==a[i]) ++count;
            else --count;
            if(count==0){maj_index=i;count=1;}
        }
        cans=a[maj_index];
        //check
        count=0;
        for(int i=0;i<size;i++){
            if(cans==a[i]){count++;}
        }
        //returning after the checking
        if(size==1) return a[0];
        else if(count>size/2){return cans;}
        else return -1;
   }