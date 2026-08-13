#include <bits/stdc++.h>
using namespace std;

int main() {
    int vertex, edges;

    cin >> vertex >> edges;

    vector<int> adjList[vertex];

    int u, v;

    for (int i = 0; i < edges; i++) {
        cin >> u >> v;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    // Print the adjacency list
    for (int i = 0; i < vertex; i++) {
        cout << i << " -> ";

        for (int j = 0; j < adjList[i].size(); j++) {
            cout << adjList[i][j] << " ";
        }

        cout << endl;
    }
}