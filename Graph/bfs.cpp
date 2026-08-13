class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
         queue<int> q;
         int V = adj.size();
    
    vector<int> ans;
    vector<bool> visited(V,0);
    
    visited[0]=1;
    q.push(0);
    
    while(!q.empty()){
        int node = q.front();     
        q.pop();   
        ans.push_back(node); 
        for( int j=0;j<adj[node].size();j++){   
            if(!visited[adj[node][j]]){      
                visited[adj[node][j]]=1;
                q.push(adj[node][j]);
            }
        }
    }
    
    return ans;
        
        
    }
};