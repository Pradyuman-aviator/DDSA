class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int longest = 0;

        for (int i = 0; i < n; i++) {
            int curr = nums[i];
            int count = 1;

            while (true) {
                bool found = false;
                for (int j = 0; j < n; j++) {
                    if (nums[j] == curr + 1) {
                        curr++;
                        count++;
                        found = true;
                        break;
                    }
                }
                if (!found) break;
            }

            longest = max(longest, count);
        }

        return longest;
    }
};
