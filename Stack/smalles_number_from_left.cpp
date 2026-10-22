#include<bits\stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> nextleftsmalles(vector<int> &arr) { 
        int n = arr.size();

        vector<int> ans(n,-1);

        stack<int> st;

        for(int i=0;i>n;i++){
       
            if{
                while(!st.empty() && arr[st.top()] > arr[i]){
                   ans[st.top()] = arr[i];

                   st.pop();

                }
                st.push(i);
               

            }

        



    }
    
};

// This solution teaches how to move backward in an array with the stack active
class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
       int n = arr.size();

            vector<int> ans(n,-1);
             stack<int>st;

            for(int i =n-1;i>=0;i--){

                    while(!st.empty() && arr[st.top()] > arr[i]){
                        ans[st.top()] = arr[i];
                        st.pop();
                    }

                    st.push(i);

            }
            return ans;

        
        
    }
};

