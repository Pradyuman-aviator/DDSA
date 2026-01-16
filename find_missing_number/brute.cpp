class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        int n = nums.size();
        vector<int> ans(2); // ans[0] = repeating, ans[1] = missing

        for (int j = 1; j <= n; j++) {
            int count = 0;

            for (int i = 0; i < n; i++) {
                if (nums[i] == j) {
                    count++;
                }
            }

            if (count == 2) ans[0] = j;
            if (count == 0) ans[1] = j;
        }

        return ans;
    }
};
