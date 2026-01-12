class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<long long>> st;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                set<long long> hashset;

                for (int k = j + 1; k < n; k++) {
                    long long sum = (long long)nums[i] + nums[j] + nums[k];
                    long long fourth = (long long)target - sum;

                    if (hashset.find(fourth) != hashset.end()) {
                        vector<long long> temp = {
                            nums[i], nums[j], nums[k], fourth
                        };
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                    hashset.insert(nums[k]);
                }
            }
        }

        vector<vector<int>> ans;
        for (auto &v : st) {
            ans.push_back({
                (int)v[0], (int)v[1], (int)v[2], (int)v[3]
            });
        }
        return ans;
    }
};
