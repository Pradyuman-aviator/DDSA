
///PSRQ

class Solution { 
public: 
    ector<int> nextGreater(vector<int> &arr)v { 
        int n = arr.size(); 
        vector<int> ans(n, -1); // Initializing with "-1" 

        for(int i = 0; i < n; i++) { 
            for(int j = 1; j < n; j++) { 
                int circular_index = (i + j) % n;  // imp : good for revisioj
                if(arr[circular_index] > arr[i]) { 
                    ans[i] = arr[circular_index]; 
                    break; 
                } 
            } 
        } 
        return ans; 
    } 



// linear one but related (optimized)


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
                while(!st.empty() && arr[st.top()] < arr[i]){
                    ans[st.top()] = arr[i]; // itearating and checking/comparing the top element with the current iteration we are in
                    // segmen
                    st.pop();
                }
                st.push(i); //  if while() loops exists 

            }

        }
        return ans;

    }
    


    // another appraoch going from behind

    public: 
    vector<int> nextGreater(vector<int> &arr) { 

        int n =  arr.size();

        stack<int> st;
        vector<int> ans(n,-1);

        for(int i=n-1;i>=0;i--){
            if(st.empty()){
                st.push(i);
            }
            else{
                while(arr[st.top()] > arr[i]){

                 
                    st.pop();
                }
              ans[i] = arr[st.top()];
            

        }
        return ans;
    }











