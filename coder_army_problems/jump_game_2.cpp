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

//optimized


        class Solution {
public:
    int jump(vector<int>& nums) {
       int target = nums.size()-1;

       int farthest =0;
       int currentend =0;
       int jumps =0;

       for(int i=0;i<target;i++){
        farthest =  max(farthest,i+nums[i]);

        if(i == currentend){
            currentend = farthest;
            jumps++;
            
        }
       }

        return jumps;
    }
};
