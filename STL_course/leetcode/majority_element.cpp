//Brute force Method:
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    { 
        int flag=0,repeat=1,ans;
    
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                if(a[i]==a[j]) ++repeat;
            }
        if(repeat>size/2) 
        {
            ans=a[i];
            flag=1;
            
            break;
        }
        repeat=0;
        }
    if(flag==0)return -1;
    else return ans;
        
    }
};



int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends

//Boyer-Moore Voting algorithm
