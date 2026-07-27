class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int start = 0;
        int end = 1;
        int count =0;

     while (start < n && end < n) {

    if (start == end) {
        end++;
        continue;
    }

    int diff = nums[end] - nums[start];

    if (diff == k) {
        count++;

        start++;
        end++;

        while (start < n && nums[start] == nums[start - 1])
            start++;

        while (end < n && nums[end] == nums[end - 1])
            end++;
    }
    else if (diff < k) {
        end++;
    }
    else {
        start++;
    }
}
        return count;
    }

};