
/// i did lot of mistakes here

class Solution {
  public:
  
    void DFS(int node,vector<vector<int>>&adj,vector<bool>&Visited,stack<int> &s){\
    
        
        Visited[node] =1;
        
        for(int j=0;j<adj[node].size();j++){
            if(!Visited[adj[node][j]]){
                DFS(adj[node][j],adj,Visited,s);
            }
            
           
            
            
        }
         s.push(node);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        stack<int> s;
        
        /// conversion edge list -> ajoint list
        
        for(auto edge : edges){
            
            int u = edge[0];
            int v  = edge[1];
            
            adj[u].push_back(v);
           
            
                
        }
        
        
        vector<bool> Visited(V, 0);
        
        for(int i=0;i<V;i++){
        if(!Visited[i]){
            DFS(i,adj,Visited,s);
        }
        }
        
        vector<int> ans;
        while(!s.empty()){
            ans.push_back(s.top());
            
            s.pop();
        }
        
        return ans;
        
        
    }
};