

/// this is the brute force answers 

class Solution {
  public:
    int aggressiveCows(vector<int> &arr, int k) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        
        int ans =0;
        
        for(int dist =1;dist<=arr[n-1]-arr[0];dist++){
            int cows =1;
            int last =arr[0];
            
            for(int i =1;i<n;i++){
                if(arr[i]-last >=dist){
                    cows++;
                    last = arr[i]; // the place where i  last tied the cows 
                    
                }
                
               
            }
             if(cows>=k){
                    ans = dist;
                }
                else{
                    break;
                }
            
            
        }
        
       
        
        
        
        return ans;
    }
};