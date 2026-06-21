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




int count(Node* root){
    if(root==nullptr) return 0;

    int lh=count(root->left);
    int rh=count(root->right);


return 1 + lh + rh;


};



