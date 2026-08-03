// brute force 

## cool sol

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       /* int n =nums.size();
        int maxi=INT_MIN;
        for(int i =0;i<n;i++){
             int sum=0;
            for(int j=i;j<n;j++){
               
                
                sum+=nums[j];
                maxi=max(sum,maxi);
                

            }
        }
        return maxi;
        
    }
};
*/

//kadan's algo.....

      int sum=0;
      int maxi=INT_MIN;
      int n =nums.size();
      //iterating through all the array
      for(int i=0;i<n;i++){
         sum+=nums[i];
        if(sum>maxi){
            maxi=sum;
        }
        
        if(sum<0) sum=0;
        
        
      }
      return maxi;

    }
    
};



// TLE
									
									
									
									class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        int Maxi = INT_MIN;

        for(int i=0;i<n;i++){
            int prefix =0;
            for(int j=i;j<n;j++){
                prefix+=nums[j];
                Maxi = max(prefix,Maxi);

            }
        }
        return Maxi;
    }
};





/// kadan's algo  TC -> O(N)


 
 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ///No wusing the kadan;s algo\

        int n = nums.size();

        int maxi = INT_MIN;
        int prefix = 0;

        for(int i=0;i<n;i++){
           prefix+=nums[i];
           maxi = max(prefix,maxi);
           if(prefix < 0 ){
            prefix =0;
           }
          
        }
        return maxi;
    }
};
 