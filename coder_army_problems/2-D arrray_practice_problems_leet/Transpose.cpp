class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();

        int columns = matrix[0].size();

        vector<vector<int>> ans;

        for(int j=0;j<columns;j++){
            vector<int> temp;
            for(int i=0;i<rows;i++){
                temp.push_back(matrix[i][j]);

            }

            ans.push_back(temp);
        }

        return ans;
    }
};



///but if we have square matrix then we can do this lolll 


class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        int n = matrix.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                swap(matrix[i][j], matrix[j][i]);

            }
        }

        return matrix;
    }
};