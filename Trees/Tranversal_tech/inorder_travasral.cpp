#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right =NULL;
    }
};

void inOrder(Node* node,vector<int>& res){
    if(node == nullptr) return;

    /// traversing the left subtree
    inOrder(node->left,res);
    /// visit the current node
    res.push_back(node->data);
    /// traverse the rihgt subtrre last 
    inOrder(node->right, res);


}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    

}
