class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();

        int primary = 0;
        int secondary = 0;

        // Primary diagonal
        for (int i = 0; i < n; i++) {
            primary += mat[i][i];
        }

        // Secondary diagonal
        int i = 0;
        int j = n - 1;

        while (i < n && j >= 0) {
            secondary += mat[i][j];
            i++;
            j--;
        }

        int total_sum = primary + secondary;

        return total_sum;
    }
};