class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int n = nums.size();
        


       vector<int> sums;

    for(int i = 0; i < n - 1; i++) {
    sums.push_back(nums[i] + nums[i + 1]);
    }

    //comparing the elements

    for (int i = 0; i < sums.size(); i++) {
    for (int j = i + 1; j < sums.size(); j++) {
        if (sums[i] == sums[j]) {
            return true;
        }
    }
}


    
    return false;
    }
};