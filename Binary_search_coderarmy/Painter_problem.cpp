
#include 


class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        long long n = arr.size();
        long long start = *max_element(arr.begin(),arr.end());
        long long end = accumulate(arr.begin(),arr.end(),(long long)0);
        long long ans =-1;
        
        
        while(start<=end){
            long long count = 1;
            long long length= 0;
            
            long long  mid = start + ((end-start)/2);
            
            for(int i = 0;i<n;i++){
                length +=arr[i];
                
                if(length>mid){
                    count++;
                    length=arr[i];
                    
                }
            }
          if(count <= k){
    ans = mid;
    end = mid - 1;
}
else{
    start = mid + 1;
}
            
            
            
        }
        
        
        return ans;
        
    }
};