class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
    ///// creating an array wihout creating an array huh.....
        int count = 0;
        int nums = 1;
        int i = 0;
        while (true) {
            if (i < arr.size() && arr[i]==nums) {
                i++;
            } 
            else {
                count++;
                if (count == k) {
                    return nums;
                }
            }
            nums++;
        }
    }
};