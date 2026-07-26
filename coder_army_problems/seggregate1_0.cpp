class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int n = arr.size();
        
        int count0= 0;
        int count1=0;
        
        
        for(int i = 0 ;i < n ;i++){
            if(arr[i] ==0) count0++;
            if(arr[i]==1) count1++;
        }
        arr.erase(arr.begin(), arr.end());
        
        int zero = 0;
        int one =1;
        
        
        for(int i = 0;i<count0;i++){
            arr.push_back(zero);
        }
        for(int i= count0;i<n;i++){
            arr.push_back(one);
        }
    }
};


/// two pointer approach 


class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int n = arr.size();
        
        
        int start  =  0;
        int end = n-1;
        
        while(start<end){
            if(arr[start] == 0){
                start++;
            }
            else{
                if(arr[end] ==0){
                    swap(arr[start],arr[end]);
                    start++,end--;
                }
                else{
                    end--;
                }
            }
            
            
            
            
        }
        
        
        
    }
};