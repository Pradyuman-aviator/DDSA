#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPages(vector<int> &nums, int m)  {

        int n = nums.size();

        if(m > n) return -1;

        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        int ans = -1;

        for(int pages = low; pages <= high; pages++){

            int students = 1;
            int countpages = 0;

            for(int i = 0; i < n; i++){

                if(countpages + nums[i] <= pages){
                    countpages += nums[i];
                }
                else{
                    students++;
                    countpages = nums[i];
                }

            }

            if(students <= m){
                ans = pages;
                break;
            }
        }

        return ans;
    }
};