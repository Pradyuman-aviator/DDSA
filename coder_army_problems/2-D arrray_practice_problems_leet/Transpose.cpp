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