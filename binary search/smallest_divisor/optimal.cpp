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
        int low =1 ,high=getMax(nums);
        int mid = low + ((high - low)/2);
        int answer = high;   // safe initialization
        while(low <= high){
           int sum = 0;
            mid = low + ((high-low)/2);
            for(int i = 0 ;i < n;i++){
           sum += (nums[i] + mid - 1) / mid;
        }
        if(sum<=threshold){
             answer = mid;
            high = mid -1;
        }
        else{
            low = mid + 1;
        }

        }
        return answer;
     
    }
};