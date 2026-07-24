class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        int n = arr.size();
        if(k>n){
            return -1;
        }
        
        long long  sum = accumulate(arr.begin(), arr.end(), (long long)0);
        long long start = *max_element(arr.begin(),arr.end());
        long long end = sum;
        
      
        long long ans =-1;
        
        while(start<=end){
            long long count = 1;
             long long  pages =0;
            
            
            long long mid = start + ((end-start)/2);
            for(int i=0;i<n;i++){
            
                pages += arr[i];
                if(pages > mid){
                    count++; //this one is for next student as the pages value overcomes the mid value
                    pages = arr[i];
                }
                
            }
            
            if(count <=k){
                ans = mid;
                end = mid-1;  ///decreasing the search space 
                
                
            }
            else{
                start = mid+1;
            }
                

            
            
            
        }
        return ans;
    }
};