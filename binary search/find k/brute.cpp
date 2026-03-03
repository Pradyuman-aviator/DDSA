class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

   vector<int> a;

      for(int i = 1; a.size() < k; i++){
            auto it = find(arr.begin(), arr.end(), i);

            if(it == arr.end()){
                a.push_back(i);        }
        }
 return a[k - 1];
    }
};


// time complexity o(n*k) where n is the size of arr and k is the kth missing number we are looking for