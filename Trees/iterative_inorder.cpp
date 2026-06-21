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

vector<int> inorder(Node* root){
    stack<Node*> st;
    Node* node = root;
    vector<int> inorderr;
    while(true){
        if(node != NULL){
            st.push(node);
            node = node ->left;
        }
        else{
            node = st.top();
            inorderr.push_back(node->data);
            node  = node -> right;
        }
    }
}