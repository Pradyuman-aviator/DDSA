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





// without inference

int Minval(Node* root){
    if(root == nullptr) return INT_MAX;

   int ls = Minval(root->left);
   int rs = Minval(root->right);

   return min(root->data,min(ls,rs));


}