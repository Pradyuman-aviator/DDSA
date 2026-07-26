class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

     vector<pair<int,int>> arr;

        for(int i =0 ;i <n;i++){
            arr.push_back({nums[i],i}); // at first we have the values and at second we have the value of index
        }
        sort(arr.begin(), arr.end());
        int start =0;
        int end = n-1;

        while(start <end){
            int sum = arr[start].first + arr[end].first;

            if(sum ==  target){
                return {arr[start].second,arr[end].second};

            }

            else if(sum < target){
                start++;  ///moving towards the  higher value

            }
            else{
                end--; //in case if sum is less then moving towards the lower value 
            }

        }
        return {};
        
    }
};