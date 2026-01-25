class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;

        for(int i=0;i<n;i++){
            int a = nums[i];
            mini = min(mini,a);
        }
        return mini;
        
    }
};