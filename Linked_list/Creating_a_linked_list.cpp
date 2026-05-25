#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;

    Node * next;

    Node(int val){ //constructor
        data = val;

        next = nullptr;

    }
    
};

int main(){
    Node* Head;
    Head = nullptr;

    int arr[4] = {1,2,3,4};


    for(int i = 0;i<4;i++){
        
        //linked list doesn't exist
        if(Head == nullptr){
            Head = new Node(arr[i]);

        }

        // if it already exist 
        else{
            Node * temp;
            temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }




// Printing the stuff 
Node *  temp = Head;
while(temp !=nullptr){
    cout<<temp->data;
    temp = temp->next;
}


}