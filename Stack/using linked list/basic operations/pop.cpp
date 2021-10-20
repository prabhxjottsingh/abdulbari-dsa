int pop()
{
    Node *p;
    if (top == NULL)
    {
        cout << "Underflow";
        return -1;
    }
    else
    {
        p = top;
        top = top->next;
        int x = p->data;
        free(p);
        return x;
    }
}