#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node * left;
    Node * right;

    Node(int val){
        data = val;

        left = right =nullptr;
    }
};

vector<int> zigzag_trav(Node* root){
    vector<vector<int>> result;

    queue<Node*> q;
    bool flag = true;

    q.push(root);
    while(!q.empty()){
        int size =  q.size();
        vector<int> rows(size);

        for(int i=0;i<size;i++){
        Node* node= q.front();
                q.pop();

            int index = (flag) ? i:(size-1-i);

            rows[index] = node->data;

            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }

        }
        flag = !flag;

        result.push_back(rows);


    }
    

}