class Solution {
public:
//// Ncr formula.....
 int nCr(int n, int r) {
        long long res = 1;
        for (int i = 0; i < r; i++) {
            res = res * (n - i);
            res = res / (i + 1);
        }
        return (int)res;
    }
    vector<vector<int>> generate(int numRows) {
    //// creating the desired array

        vector<vector<int>> ans;

        for (int n = 0; n < numRows; n++) {
            vector<int> row;
            for (int r = 0; r <= n; r++) {
                row.push_back(nCr(n, r));
            }
            ans.push_back(row);
        }
        return ans;
        
    }
};