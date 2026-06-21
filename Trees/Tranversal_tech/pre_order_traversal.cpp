#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
     Node*left; 
     Node*right;

    Node(int val){
        data = val;
        left=right=nullptr;
    }
    
    
};

// pass by rerference so that no morc opies of same vector should be made within the code 
// all of the recursice operation uses same vector 


void preorder(Node* node,vector<int>& res){
    if(node == nullptr) return;

   
    res.push_back(node->data);

   preorder(node->left,res);

    preorder(node->right,res);
   


}

int  main(){
    Node* root =  new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    vector<int> res;

    preorder(root,res);

    for(int x : res){

        cout << x <<" ";

    }
}