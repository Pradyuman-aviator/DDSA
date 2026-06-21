#include<bits/stdc++.h>
using namespace std;

struct Node1{
    int data;
    Node1* left;
    Node1* right;


    Node1(int val){
        data=  val;

        left=right=nullptr;
    }


};
struct Node2{
    int data;
    Node2* left;
    Node2* right;


    Node2(int val){
        data=  val;

        left=right=nullptr;
    }


};




bool is_identical(Node1* root1,Node2* root2){
    if((root1 == nullptr && root2 == nullptr)){
        return true;
    }
    if(root1==nullptr || root2 == nullptr){
        return false;
    }

   



    return (root1->data == root2->data) && is_identical(root1->left,root2->left) && is_identical(root1->right,root2->right);







}





