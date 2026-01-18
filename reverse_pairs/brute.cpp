class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int n =nums.size();
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((long long)nums[i]>(long long)2*nums[j]) count++;
            }
        }
        return count;
    }
};

//O(n^2) approach