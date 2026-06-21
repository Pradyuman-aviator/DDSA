#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left=right=NULL;
    }
};



vector<int> postroder(Node* root){
    vector<int> psto;
    stack<Node*> st;

    Node* curr=root;
    Node* temp;

    while(curr!=NULL || !st.empty() ){
        if(curr!=nullptr){
            st.push(curr);
            curr = curr->left;
        }
        else{
            temp = st.top() -> right;
            if(temp ==nullptr){
                temp = st.top();
                st.pop();

                psto.push_back(temp->data);

                while(psto.empty() && temp = st.top()-> right){
                         temp = st.top();
                            st.pop();

                            psto.push_back(temp->data);
                }

            }
            else{
                curr = temp;
            }

        }
    }

    

}