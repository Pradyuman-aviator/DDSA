#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;

        left=right=nullptr;
    }
    
};


///Using recursion

int Depth(Node* root){
    // basecase

    if(root==NULL) return 0;

    int lh= Depth(root->left);
    int rh = Depth(root->right);

    return 1 + max(lh,rh);

}
/// By level order

int Maxdepth(Node* root){

    queue<Node*> q;

    q.push(root);

    int depth = 0;
    while(!q.empty()){
        int size = q.size();
        depth++;
        for(int i=0;i<size;i++){
            Node* node = q.front();
            q.pop();
            if(node->left !=nullptr){
                q.push(node->left);
            }
            if(node->right !=nullptr){
                q.push(node->right);
            }

        }



    }
    return depth;


}