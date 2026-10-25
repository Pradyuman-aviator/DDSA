class Solution {
public:

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> NSR(n,n);  // (n,n) becaise if the we did'nt found the smalles then assign the 9
        vector<int> NSL(n,-1); // this is obvious
        stack<int> st;
     // for next smallest rigth
        for(int i =0;i<n;i++){
            if(st.empty()){
                st.push(i);          
                 }
                 while(!st.empty() && heights[st.top()] > heights[i]){
                    NSR[st.top()] = i;
                    st.pop();

                 }
                 st.push(i);
        }

        // for the next smalles left

        for(int i  = n-1;i>=0;i--){
            if(st.empty()){
                st.push(i);
            }
            else{
            while(!st.empty() && heights[st.top()] > heights[i]){
                NSL[st.top()] = i;
                st.pop();
            }
            st.push(i);
           
            }
        }
        int maxi = 0;
        for(int i  =0;i<n;i++){

            maxi  = max(maxi,heights[i]*(NSR[i]-NSL[i]-1));  // to find the width of the Rectangles

        }
        return maxi;
    }
};