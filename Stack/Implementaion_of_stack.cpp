#include <bits/stdc++.h>
using namespace std;
class Stack
{
    int *arr;
    int size;
    int top;
    
public:


bool Flag;
    Stack(int S)
    {
        size = S;
        top = -1;
        arr = new int[S];
        Flag =1; // the stack is empty 
    }
    void push(int n)
    {
       if(top == size - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }

        top++;
        arr[top] = n;
        Flag = 0;
    }
    void pop()
    {
        if(top == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
        if(top==-1){
            Flag=1;
        }
    }
    int peek()
    {
        if(top == -1)
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return arr[top];
    }
    bool is_empty()
    {
        return top == -1;
    }
    int getSize()
    {
        return top + 1;
    }
};


int main(){



    Stack S(5);

    S.push(-1);

    int value =S.peek();

    if(S.Flag==0){ // can be done through the Is_ empty() stuff
        cout << value;
    }




 

    
  





}