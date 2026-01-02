class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        if (matrix.empty()) return;

        int n = matrix.size();       // number of rows
        int m = matrix[0].size();    // number of columns

        // First pass: mark rows and columns using -1
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {

                if(matrix[i][j] == 0) {

                    // mark the entire row
                    for(int col = 0; col < m; col++) {
                        if(matrix[i][col] != 0)
                            matrix[i][col] = -1;
                    }

                    // mark the entire column
                    for(int row = 0; row < n; row++) {
                        if(matrix[row][j] != 0)
                            matrix[row][j] = -1;
                    }
                }
            }
        }

        // Second pass: convert all -1 to 0
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == -1)
                    matrix[i][j] = 0;
            }
        }
    }
};

