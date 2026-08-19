class Stack
{
    Node* top;

public:

    Stack()
    {
        top = NULL;
    }

    void push(int val)
    {
        Node* temp = new Node(val);

        temp->next = top;
        top = temp;
    }

    void pop()
    {
        if(top == nullptr)
        {
            cout << "Underflow";
            return;
        }

        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek()
    {
        if(top == nullptr)
        {
            return -1;
        }

        return top->data;
    }

    bool is_empty()
    {
        return top == nullptr;
    }

    int getSize()
{
    int count = 0;
    Node* temp = top;

    while(temp != nullptr)
    {
        count++;
        temp = temp->next;
    }

    return count;
}
};