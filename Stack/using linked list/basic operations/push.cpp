//top is a global variable of the structure node

void push(int x)
{
    Node *t = new Node;
    if (t == NULL)
    {
        cout << "Stack is full/overflow";
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}