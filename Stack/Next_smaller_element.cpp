class Solution{
public: 
    vector<int> nextGreater(vector<int> &arr){
        int n = arr.size();

        vector<int> ans(n,-1);
        stack<int> st; // it gonna store the array indexes 

        for(int i =0;i<n;i++){
            if(st.empty()){
                stack.push(arr[i]);
            }
            else{
                while(!st.empty() && arr[st.top()] > arr[i]){
                    ans[st.top()] = arr[i]; // itearating and checking/comparing the top element with the current iteration we are in
                    // segmen
                    st.pop();
                }
                st.push(i); //  if while() loops exists 

            }

        }
        return ans;

    }
    
};