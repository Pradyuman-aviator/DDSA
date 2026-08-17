class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int rows = grid.size();
        int col = grid[0].size();

        queue<pair<int,int>> q;

        vector<vector<int>> Visited(rows, vector<int>(col, 0));

        int minutes = 0;

        // First put ALL rotten oranges into queue
        for(int i = 0; i < rows; i++) {

            for(int j = 0; j < col; j++) {

                if(grid[i][j] == 2 && !Visited[i][j]) {

                    Visited[i][j] = 1;
                    q.push({i,j});
                }
            }
        }

        // BFS
        while(!q.empty()) {

            int size = q.size();

            // Process one minute
            for(int i = 0; i < size; i++) {

                auto [r,c] = q.front();
                q.pop();
                if(r-1 >= 0 &&
                   grid[r-1][c] == 1 &&
                   !Visited[r-1][c]) {

                    Visited[r-1][c] = 1;
                    grid[r-1][c] = 2;
                    q.push({r-1,c});
                }
                if(r+1 < rows &&
                   grid[r+1][c] == 1 &&
                   !Visited[r+1][c]) {

                    Visited[r+1][c] = 1;
                    grid[r+1][c] = 2;
                    q.push({r+1,c});
                }
                // LEFT
                if(c-1 >= 0 &&
                   grid[r][c-1] == 1 &&
                   !Visited[r][c-1]) {

                    Visited[r][c-1] = 1;
                    grid[r][c-1] = 2;
                    q.push({r,c-1});
                }
                // RIGHT
                if(c+1 < col &&
                   grid[r][c+1] == 1 &&
                   !Visited[r][c+1]) {

                    Visited[r][c+1] = 1;
                    grid[r][c+1] = 2;
                    q.push({r,c+1});
                }
            }
            if(!q.empty()) {
                minutes++;
            }
        }
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < col; j++) {
                if(grid[i][j] == 1) {
                    return -1;
                }
            }
        }
        return minutes;
    }
};