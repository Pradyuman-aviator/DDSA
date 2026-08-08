## cool solution

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i =0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k= n-1;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum>0){
                    k--;

                } 
                else if(sum<0){
                    j++;

                }
                else {
                    vector<int> temp ={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j] == nums[j-1]) j++;
                    while(j<k &&nums[k]== nums[k+1]) k--;

                }

                     
             
                
                }



        }


        return ans;

        
    }
};



/// written by meee soltuuion and all 


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
       vector<vector<int>> ans;
        sort(nums.begin(),nums.end());


        // skiping the duplicate elemnts at the first 

        
        

        for(int i = 0;i<n-2;i++){

            if(i>0 && nums[i] == nums[i-1]){
            continue;
        }
            int a = -nums[i];
            int start = i+1;
            int end = n-1;

            while(start<end){

                if((nums[start]+nums[end]) == a){
               ans.push_back({nums[i],nums[start],nums[end]});
                start++;
                end--;


                // checkin for the duplicates

                while(start<end && nums[start]==nums[start-1]){
                    start++;
                }
                while(start<end && nums[end]==nums[end+1]){
                    end--;
                }
                

                }
                else if((nums[start] + nums[end]) > a){
                    end--;
                }
                else{
                    start++;
                }

            }

            
        }
        return ans;

        
    }
};