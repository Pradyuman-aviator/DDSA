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

    // to add the elements to the front 
    Node * Tail =nullptr;

    for(int i = 0;i<4;i++){
        if(Head == nullptr){
            Head = new Node(arr[i]);
            Tail = Head;
        }
        else{
            Tail -> next = new Node(arr[i]);
            Tail = Tail->next;
        }

    }


    // Deleting front node

    if(Head){
        Node*temp1=Head;
        Head = Head->next;
        delete temp1;


    }
    Node*temp2;
    temp2 = Head;

    while(temp2){
        cout<<temp2->data;
        temp2 = temp2->next;
    }




}