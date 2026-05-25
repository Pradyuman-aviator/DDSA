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


Node * CreateLinkedlist(int arr[],int index,int size){
    if(index == size){
        return nullptr;
    }
    Node * temp;
    temp = new Node(arr[index]);
    temp ->next = CreateLinkedlist(arr,index+1,size);

    return temp;

}

int main(){
    Node* Head = nullptr;

    int arr[] = {2,4,6,8};

    Head = CreateLinkedlist(arr,0,4);

    //printing the linked list
    Node * temp;
    temp = Head;
    while(temp != nullptr){
        cout<< temp->data;
        temp = temp->next;
    }
}



