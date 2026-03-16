class Solution {
public:
    double minmaxGasDist(vector<int>& stations, int k) {
        
        int n = stations.size();
        
        vector<int> placed(n-1, 0);
        
        for(int gas = 0; gas < k; gas++) {
            
            double maxGap = -1;
            int index = -1;
            
            for(int i = 0; i < n-1; i++) {
                
                double gap = stations[i+1] - stations[i];
                double current = gap / (placed[i] + 1);
                
                if(current > maxGap) {
                    maxGap = current;
                    index = i;
                }
            }
            
            placed[index]++;
        }
        
        double ans = 0;
        
        for(int i = 0; i < n-1; i++) {
            
            double gap = stations[i+1] - stations[i];
            double current = gap / (placed[i] + 1);
            
            ans = max(ans, current);
        }
        
        return ans;
    }
};