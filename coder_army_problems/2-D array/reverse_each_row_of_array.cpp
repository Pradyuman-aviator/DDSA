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



//// for the odd matricees


class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();

        int total = 0;

        for (int i = 0; i < n; i++) {
            // Primary diagonal
            total += mat[i][i];

            // Secondary diagonal
            total += mat[i][n - 1 - i];
        }

        // If n is odd, center was counted twice
        if (n % 2 == 1) {
            total -= mat[n / 2][n / 2];
        }

        return total;
    }
};