#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool placed(vector<int>& nums, int dist, int cows){
        int countcows = 1;
        int last = nums[0];

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] - last >= dist){
                countcows++;
                last = nums[i];
            }

            if(countcows >= cows){
                return true;
            }
        }

        return false;
    }

    int aggressiveCows(vector<int> &nums, int k) {
       int n = nums.size();
       int low = 1;
       int high = nums[n-1] - nums[0];
       int ans = 0;

       while(low <= high){
            int mid = (low + high) / 2;

            if(placed(nums, mid, k)){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
       }

       return ans;
    }
};