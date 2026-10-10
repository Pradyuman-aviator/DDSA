        class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
          int n = arr.size();
        stack<string>s; //  ok cool    
            for(int i = 0;i<n;i++){
                if(s.empty()){   // make this habbit
                    s.push(arr[i]);
                }
                     else if(s.top() == arr[i]){
                    s.pop();
                }
                else{
                    s.push(arr[i]);
                }
            }
        
        return s.size();
    }
};