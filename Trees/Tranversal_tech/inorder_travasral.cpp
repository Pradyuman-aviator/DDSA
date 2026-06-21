#include<bits\stdc++.h>
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



void inorder(Node* node,vector<int>& res){
    if(node == nullptr) return;

    inorder(node->left,res);
    res.push_back(node->data);
    inorder(node->right,res);


}


int main(){

    Node* root= new Node(1);

    root->left = new Node(2);

    root->right =  new Node(3);

    vector<int> res;

    

}