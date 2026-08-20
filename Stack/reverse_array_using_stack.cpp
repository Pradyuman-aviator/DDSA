class Solution {
  public:
    void reverseArray(vector<int> &arr) {
     int n = arr.size();
     stack<int> s;
     
     for(int i=0;i<n;i++){
         s.push(arr[i]);
         
     }
     
     /// adding them back to the array

   for(int i = 0; i < arr.size(); i++) {
       arr[i] = s.top();
       s.pop();
       }    }
};

///r eversirng hte string using ths staxkx


class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
    stack<int> st;
        for(auto a : s){
            st.push(a);

        }
        int i =0;
        while(!st.empty()){
            s[i] = st.top();
            i++;
            st.pop();            
        }
    }
};

