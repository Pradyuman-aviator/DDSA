#include<bits\stdc++.h>
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



Node * CreateLinkedlist(int arr[],int index,int size,Node* prev){
    if(index==size){
        return prev;
    }

    Node * temp;
    temp =  new Node(arr[index]);
    temp->next = prev;

    return CreateLinkedlist(arr,index+1,size,temp);
}


int main(){
    Node* Head;
    Head = nullptr;

    int arr[] = {1,2,3,4};

    Head = CreateLinkedlist(arr,0,4,nullptr);

    // adding element in the 3rd position

    int x = 3;
    Node * temp1;
    temp1 = Head;
    // reaching to Xth position
    x--;
    while(x--){
        temp1=temp1->next;
        
    }
    Node *  temp2 = new Node(6);
    temp2 -> next = temp1->next;
    temp1->next =temp2;

    //printing 

    Node *  temp;
    temp = Head;
    while(temp){
        cout<<temp->data;
        temp =  temp->next;
    }


}