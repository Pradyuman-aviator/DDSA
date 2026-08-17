class Solution {
public:

    bool isCycle(int V, vector<vector<int>>& edges) {

        vector<vector<int>> adj(V);

        // Convert edges to adjacency list
        for (auto edge : edges) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> Visited(V, 0);
        for (int start = 0; start < V; start++) {//checking for the seprated graphs (checking them by checking their pieces )
            if (Visited[start])
                continue;
            queue<pair<int, int>> q;  // {node, parent}
            Visited[start] = 1;
            q.push({start, -1});
            while (!q.empty()) {
                auto [node, parent] = q.front();
                q.pop();
                for (int neighbour : adj[node]) {
                    if (!Visited[neighbour]) {
                        Visited[neighbour] = 1;
                    q.push({neighbour, node});
                    }
                    else if (neighbour != parent) {
                       return true;
                    }
                }
            }
        }
        return false;
    }
};