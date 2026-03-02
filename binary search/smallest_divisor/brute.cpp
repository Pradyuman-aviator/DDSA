class Solution {
public:

    int getMax(vector<int>& nums){
        int maxi = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            maxi = max(maxi, nums[i]);
        }
        return maxi;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {

        int n = nums.size();
        int maxi = getMax(nums);

        for(int d = 1; d <= maxi; d++){

            int sum = 0;

            for(int i = 0; i < n; i++){
                sum += (nums[i] + d - 1) / d;   // ceiling division
            }

            if(sum <= threshold){
                return d;
            }
        }

        return -1;
    }
};
