    #include<bits/stdc++.h>
    using namespace std;

    struct Node{
        int data;
        Node* left;
        Node* right;

        Node(int val){
            data = val;
            left = right = nullptr;
        }
    };

vector<vector<int>> fetch_vertical_element(Node* root){

    map<int, map<int, multiset<int>>> mp;

    queue<pair<Node*, pair<int,int>>> todo;

    todo.push({root,{0,0}});

    while(!todo.empty()){

        auto p = todo.front();
        todo.pop();

        Node* node = p.first;

        int x = p.second.first;
        int y = p.second.second;

        mp[x][y].insert(node->data);

        if(node->left){
            todo.push({node->left,{x-1,y+1}});
        }

        if(node->right){
            todo.push({node->right,{x+1,y+1}});
        }
    }

    vector<vector<int>> ans;

    for(auto p : mp){

        vector<int> col;

        for(auto q : p.second){

            col.insert(col.end(),
                       q.second.begin(),
                       q.second.end());
        }

        ans.push_back(col);
    }

    return ans;
}