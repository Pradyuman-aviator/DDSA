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
        sort(nums.begin(), nums.end()); // //// // / /

        int max_possible_dist = nums[n-1] - nums[0];
        int ans = 0;

        for(int dist = 1; dist <= max_possible_dist; dist++){
            if(placed(nums, dist, k)){
                ans = dist;
            }
            else{
                break;
            }
        }

        return ans;
    }
};