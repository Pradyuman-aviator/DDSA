class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
      queue<pair<int,int>> q;
        int rows = grid.size();
        int col = grid[0].size();
        vector<vector<int>> Visited(rows, vector<int>(col, 0));
        int count = 0;
        for(int i = 0; i < rows; i++) {
         for(int j = 0; j < col; j++) {
                if(grid[i][j] == '1' && !Visited[i][j]) {
count++;
                    Visited[i][j] = 1;
                    q.push({i,j});

                    while(!q.empty()) {

                        auto [r,c] = q.front();
                        q.pop();

                        // UP
                        if(r-1 >= 0 &&
                           grid[r-1][c] == '1' &&
                           !Visited[r-1][c]) {

                            Visited[r-1][c] = 1;
                            q.push({r-1,c});
                        }

                        // DOWN
                        if(r+1 < rows &&
                           grid[r+1][c] == '1' &&
                           !Visited[r+1][c]) {

                            Visited[r+1][c] = 1;
                            q.push({r+1,c});
                        }

                        if(c-1 >= 0 &&
                           grid[r][c-1] == '1' &&
                           !Visited[r][c-1]) {

                            Visited[r][c-1] = 1;
                            q.push({r,c-1});
                        }
                        if(c+1 < col &&
                           grid[r][c+1] == '1' &&
                           !Visited[r][c+1]) {
                            Visited[r][c+1] = 1;
                            q.push({r,c+1});
                        }
                    }
                }
            }
        }
        return count;
    }
};