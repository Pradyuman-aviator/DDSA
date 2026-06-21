#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;


    Node(int val){
        data= val;
        left=right=nullptr;

    }



};


vector<int> postorder(Node* root){
    vector<int> postorder;

    stack<Node*> st1,st2;

    st1.push(root);

    while(!st1.empty()){
        root = st1.top();
        st1.pop();
        st2.push(root);

        if(root->left != NULL){
            st1.push(root->left);

        }

         if(root->right != NULL){
            st1.push(root->right);
            
        }

    }
    while (!st2.empty()) {
        root = st2.top();
        st2.pop();

        postorder.push_back(root->data);




        
    }
    


}