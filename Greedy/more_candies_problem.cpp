class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        int n = prices.size();
        
        sort(prices.begin(),prices.end());
        
        int i =0;
        int j = n-1;
        int total_cost_min =0;
        
        while(i<=j){
            
            total_cost_min += prices[i];
            i++;
            j-=k;
            
        }
        i = n-1;
        j=0;
        int total_cost_max = 0;
        
        while(i>=j){
            total_cost_max += prices[i];
            i--;
            j+=k;
            
            
        }
        
        return {total_cost_min,total_cost_max};
            
        
    }
};