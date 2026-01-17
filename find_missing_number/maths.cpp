class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        long long SN = 1LL * n * (n + 1) / 2;
        long long S2N = 1LL * n * (n + 1) * (2 * n + 1) / 6;

        long long S = 0, S2 = 0;
        for (int x : nums) {
            S += x;
            S2 += 1LL * x * x;
        }

        long long val1 = S - SN;          // dup - missing
        long long val2 = S2 - S2N;        // dup^2 - missing^2

        long long sum = val2 / val1;      // dup + missing
        long long duplicate = (val1 + sum) / 2;
        long long missing = duplicate - val1;

        return {(int)duplicate, (int)missing};
    }
};
