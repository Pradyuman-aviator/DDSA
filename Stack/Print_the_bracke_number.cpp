class Solution {
  public:

    vector<int> bracketNumbers(string &s) {
        stack<int> st;
        int count = 0;
        vector<int> ans;
        for(char x :s){
            if(x == '('){
                count++;
                st.push(count);
                ans.push_back(count);
            }
            else if(x == ')'){
               ans.push_back(st.top());
               st.pop();
                
                
            }
            
        }
        return ans;
        
    }
};