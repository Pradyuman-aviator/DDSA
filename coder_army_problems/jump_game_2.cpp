/// O(n^2)


class Solution {
public:
    int jump(vector<int>& nums) {
        int target = nums.size()-1;
        int ans =0;
        while(target>0){

            for(int j=0;j<target;j++){
                if(j + nums[j] >= target){
                    target =j;
                    ans++;
                    break;

                }
            }
        }

        return ans;

        
    }
};