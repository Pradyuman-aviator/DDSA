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


vector<int> Combined(Node* root){
    // pairs of stacks

    stack<pair<Node*,int>>st;

    st.push({root,1});

    vector<int> pre,in,post;
    while(!st.empty()){
        auto it = st.top();
        st.pop();

        if(it.second == 1){
            pre.push_back(it.first->data);
            it.second++;
            st.push(it); // i am gonna returna agian to this

            if(it.first->left !=nullptr){
                st.push({it.first->left,1});



            }


        }

        else if(it.second==2){
            in.push_back(it.first->data);
            it.second++;
            st.push(it);

            if(it.first->right !=nullptr){
                st.push({it.first->right,1});

                
            }

        }

        else{
            post.push_back(it.first->data);

            

        }




}

}