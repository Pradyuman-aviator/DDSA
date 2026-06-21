#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;


    Node(int val){
        data=  val;

        left=right=nullptr;
    }


};


int Sum(Node* root,int& maxi){
    if(root == nullptr) return 0;

    int Leftsum = max(0,Sum(root->left,maxi));
    int Rightsum = max(0,Sum(root->right,maxi));

    maxi =  max(maxi,Leftsum+Rightsum+root->data);

    return root->data+max(Leftsum,Rightsum);
}