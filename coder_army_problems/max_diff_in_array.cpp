/// O(n)


class Solution {
public:
    int maximumDifference(vector<int>& nums) {

    int n = nums.size();
    int suffix = nums[n-1];
    int maxi = INT_MIN;

    for(int i = n-2;i>=0;i--){
        suffix = max(suffix,nums[i]);

        maxi = max(abs(nums[i]-suffix),maxi);


    }

     return (maxi > 0) ? maxi : -1;
        
    }
};