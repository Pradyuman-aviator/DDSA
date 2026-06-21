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




// for handling the leaf node -> to check if this is leaf node or note

bool is_leaf(Node* root){
    return (root->left==nullptr && root->right==nullptr);
}

// now to add left boundary

void addleftboundary(Node*root,vector<int> &res){
    vector<int> temp;
    Node* curr = root->left;

    while (curr)
    {
        /* code */
    
    
    if(!is_leaf(curr)){
        res.push_back(curr->data); // then pass it there
    }
    if(curr->right){
        curr= curr->right;
    }
    else{
        curr = curr->left;
    }
    
}
}




// add right boundary

void addRightBoundary(Node* root,vector<int> &res){
   
    Node* curr = root->right;
    vector<int> temp;
    while (curr)
    {
        if(!is_leaf(curr)){
            temp.push_back(curr->data);

        }
        if(curr->left){
            curr = curr->right;
        }
        else{
            curr = curr->left;
        };

        for(int i = temp.size()-1 ;i>=0;--i){
            res.push_back(temp[i]);
        }
        
    };

}


    // for tree nodes 

    void addleaves(Node* root,vector<int> &res){
        Node * curr = root;

        if(is_leaf(curr)){
            res.push_back(curr->data);

        }

        if(root->left){
            addleaves(root->left,res);
          }

        if(root->right) addleaves(root->right,res);
   

    }
    


    vector<int> printBoundary(Node* root){
        vector<int> res;

        if(!root) return res;
        if(!is_leaf(root)) res.push_back(root->data);
        addleftboundary(root,res);
        addleaves(root,res);
        addRightBoundary(root,res);

        return res;

    }
    

    














