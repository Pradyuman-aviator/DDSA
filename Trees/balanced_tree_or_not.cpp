#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data= val;
        left = right = nullptr;
    }
};



int Depth(Node* root,bool is_balanced = true){
    if(root == nullptr) return 0;
    
    int lh = Depth(root->left);
    int rh = Depth(root->right);
  

    return 1 + max(lh,rh);
}


bool is_balanced(Node* root){
    if(root == nullptr) return true;

    int lh = Depth(root->left);
    
    int rh = Depth(root->right);

    if(abs(lh-rh)>1) return false;

    return is_balanced(root->left) && is_balanced(root->right);



}


