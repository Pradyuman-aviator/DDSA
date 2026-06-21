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

// inference based 

int maxVal(Node*root,int& maxi){  
    if(root == nullptr) return 0;
    maxi = max(maxi,root->data);
     maxVal(root->left,maxi);
     maxVal(root->right,maxi);
    

    return maxi;

}


// without Inference 


int maxVal1(Node* root){
    if(root == nullptr)  return INT_MIN;

    int ls = maxVal1(root->left);
    int rs = maxVal1(root->right);

    return max(root->data,max(ls,rs));



}