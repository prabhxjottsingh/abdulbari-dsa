void isFull()
{
    Node *temp;
    temp = new Node;
    if (temp == NULL)
        cout << "Stack is full";
    else
        cout << "Stack is not full";
    free(temp);
}