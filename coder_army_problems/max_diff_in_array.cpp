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


/// Alternate solution thinking greedly

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mini =nums[0];
        int ans =-1;
/// can we amke profit if yes then do the operations
        for (int i=1; i<nums.size();i++) {
            if (nums[i]>mini)
                ans = max(ans,nums[i]-mini);

            mini=min(mini,nums[i]);
        }

        return ans;
    }
};