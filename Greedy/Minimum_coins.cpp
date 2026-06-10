class Solution {
  public:
    int findMin(int n) {
        
        vector<int> currency = {10,5,2,1};
        
        int i = 0;
        int notes =0;
        int  ans = 0;
        
        
        while(n){
            notes = n / currency[i];
            
            while(notes--){
                ans++;
                
            }
            n = n%currency[i];
            
            i++;
        }
        return ans;
    }
};