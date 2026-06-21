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



bool is_Exists(Node* root,int& target){
    if(root == nullptr) return false;

    if(root->data == target) return true;

    return (root->left,target) ||
    is_Exists(root->right,target);





}