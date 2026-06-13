class Solution {
  public:
    int assignHole(vector<int>& mices, vector<int>& holes) {
        int n1 = mices.size();
       
        
        int ans = INT_MIN;
        
        sort(mices.begin(),mices.end());
        sort(holes.begin(),holes.end());
        
        for(int i =0;i<n1;i++){
            int time = abs(mices[i] - holes[i]);
            ans=max(ans,time);
        }
        
        
        return ans;
        
        
        
        



    }
};