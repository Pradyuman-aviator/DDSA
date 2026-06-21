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



vector<int> preorder(Node* root){
    vector<int> preorder;

    if(root == nullptr) return;

    stack<Node*>st;
    st.push(root);

    while(!st.empty()){
            root = st.top();

            st.pop();

            preorder.push_back(root->data);
            if(root->right !=nullptr){
                st.push(root->right);
            };
            if(root->left !=nullptr){
                st.push(root->left);
            };


            





    }
    return preorder;

    

    


}