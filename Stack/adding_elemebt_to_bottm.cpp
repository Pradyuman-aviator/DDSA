class Solution {
  public:
    stack<int> insertAtBottom(stack<int> &st, int x) {
        vector<int> temp;
        
       int n = st.size();
        
        int i =0;
        
        while(!st.empty()){
              temp.push_back(st.top());
            st.pop();
            i++;
        }
        reverse(temp.begin(), temp.end());
        
        stack<int> ans;
        
        
        ans.push(x);
        
        for(int i =0;i<n;i++){
            ans.push(temp[i]);
            
        }
        
        return ans;
        
        
    }
};