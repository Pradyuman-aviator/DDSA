#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {

        int n = nums.size();

        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        int ans = -1;

        for(int pages = low; pages <= high; pages++){

            int parts = 1;
            int countsum = 0;

            for(int i = 0; i < n; i++){

                if(countsum + nums[i] <= pages){
                    countsum += nums[i];
                }
                else{
                    parts++;
                    countsum = nums[i];
                }
            }

            if(parts <= k){
                ans = pages;
                break;
            }
        }

        return ans;
    }
};