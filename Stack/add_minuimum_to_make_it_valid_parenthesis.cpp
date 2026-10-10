class Solution {
public:
    int minAddToMakeValid(string s) {
       stack<char> st;

       int n = s.length();
       int count = 0;

       for(char x : s){
        if(x == '('){
            st.push(x); // it stores the number of  ((  left in string 
        }
        else{
            if(st.empty()){
                count++;  //// for the unknown or  ))) this part of string 
            }
            else{
            st.pop();
            }
        }
       }
         return st.size() +count;
    }
};