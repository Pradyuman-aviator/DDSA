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


int maxDepth(Node* root){
    if(root == nullptr) return 0;

    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);

    return 1 +  max(lh,rh);
}

/*
// O(n^2) Solution


int Diameter(Node* root){

    if(root == nullptr)
        return 0;

    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);

    int currDiameter = lh + rh;

    int leftDiameter = Diameter(root->left);
    int rightDiameter = Diameter(root->right);

    return max(currDiameter,
           max(leftDiameter, rightDiameter));
}

*/


/// O(n) solution 





int Diameter(Node* root,int& maxi){
    if(root == nullptr) return 0;

    int lh  = Diameter(root->left,maxi);
    int rh  = Diameter(root->right,maxi);
    
    maxi = max(maxi,lh+rh);

    return 1 + max(lh,rh);
   
    
}