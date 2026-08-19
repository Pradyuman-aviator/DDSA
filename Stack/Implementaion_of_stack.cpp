#include <bits/stdc++.h>
using namespace std;
class Stack
{
    int *arr;
    int size;
    int top;
public:
    Stack(int S)
    {
        size = S;
        top = -1;
        arr = new int[S];
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
    }
    void pop()
    {
        if(top == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }
    void peek()
    {
        if(top == -1)
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        cout << arr[top] << endl;
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