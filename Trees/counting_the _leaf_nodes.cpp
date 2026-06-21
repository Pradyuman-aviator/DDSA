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




int Leaf_nodes(Node* root){
    if(root = nullptr) return 0;

    if(root->left == nullptr && root->right == nullptr){
        return 1;
    }

    
    
    
    int ls=Leaf_nodes(root->left);
    int rs=Leaf_nodes(root->right);

    return ls+rs;
    

}


