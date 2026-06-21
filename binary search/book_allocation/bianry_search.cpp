#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool possible(vector<int>& nums, int students, int limit){
        int count = 1;
        int pages = 0;

        for(int i = 0; i < nums.size(); i++){
            if(pages + nums[i] <= limit){
                pages += nums[i];
            }
            else{
                count++;
                pages = nums[i];
            }
        }

        return count <= students;
    }

    int findPages(vector<int> &nums, int m)  {

        int n = nums.size();
        if(m > n) return -1;

        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int ans = -1;
        

        while(low <= high){
            int mid = (low + high) / 2;

            if(possible(nums, m, mid)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return ans;
    }
};