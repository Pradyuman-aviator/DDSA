
///PSRQ

class Solution { 
public: 
    vector<int> nextGreater(vector<int> &arr) { 
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
};
