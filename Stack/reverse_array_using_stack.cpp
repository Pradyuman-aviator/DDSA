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
   }
        
    }
};