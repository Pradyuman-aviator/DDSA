class Solution {
public:

    bool DetectCycle(int node, int parent,
                     vector<vector<int>>& adj,
                     vector<int>& Visited) {

        Visited[node] = 1;

        for(int neighbour : adj[node]) {

            if(neighbour == parent) {
                continue;
            }

            if(Visited[neighbour]) {
                return true;
            }

            if(DetectCycle(neighbour, node, adj, Visited)) {
                return true;
            }
        }

        return false;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {

        vector<vector<int>> adj(V);

        // Convert edge list -> adjacency list
        for(auto edge : edges) {

            int u = edge[0];
            int v = edge[1];

                adj[u].push_back(v);
                adj[v].push_back(u);
        }

        vector<int> Visited(V, 0);

        for(int i = 0; i < V; i++) {

            if(!Visited[i]) {

                if(DetectCycle(i, -1, adj, Visited)) {
                    return true;
                }
            }
        }

        return false;
    }
};