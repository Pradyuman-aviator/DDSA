class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
       vector<int> hash(n + 1, 0);

        int repeating=-1;
        int missing=-1;
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        for(int j=1;j<=n;j++){
            if(hash[j]==2) repeating=j;
            else if(hash[j]==0) missing=j;
            if(repeating != -1 && missing !=-1){
                break;
            }
        }
        return {repeating,missing};
    }
};