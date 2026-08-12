#include<bits\stdc++.h>
using namespace std;

int main(){
    int edges,vertex;

    cin >> edges >> vertex;

    /// adj matrix 

    vector<vector<int>> adjMat(edges,vector<int>(vertex,0));

    int u,v,weight;

    for(int i=0;i<edges;i++){
        cin >>  u >>v >> weight;
        
        /// for the forward and reverse directon as welll
        
        adjMat[u][v] = 1;
        adjMat[v][u] = 1;

    }

    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++)
{
    cout << adjMat[i][j]<< " ";
}
    }
    cout << endl;

}