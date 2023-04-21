
class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        
    int len=arr.size();
    for(int i=0;i<len;i=i+k){
        int start=i;
        int end=min(i+k-1,len-1);
        while(start<=end){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
    }
        
        
    }
};