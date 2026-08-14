class Solution {
public:

    void DFS(int node, vector<vector<int>>& adj,
             vector<bool>& Visited, vector<int>& ans, int V) {

        Visited[node] = 1;

        ans.push_back(node);

        for (int j = 0; j<adj[node].size(); j++) {
            int neighbour = adj[node][j];
            if (!Visited[neighbour]) {
                DFS(neighbour, adj, Visited, ans, V);
            }
        }
    }

    vector<int> dfs(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<bool> Visited(V, 0);
        vector<int> ans;
        DFS(0, adj, Visited, ans, V);
        return ans;
    }
};