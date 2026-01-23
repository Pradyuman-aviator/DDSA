class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans(2, -1);
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] >= target) {
                high = mid - 1;
            }
             else {
                low = mid + 1;
            }
        }
        if (low == n || nums[low] != target) return ans;
        ans[0] = low;
        high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] <= target) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }
        ans[1] = high;

        return ans;
    }
};
