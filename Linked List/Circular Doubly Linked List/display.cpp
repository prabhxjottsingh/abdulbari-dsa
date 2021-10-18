void display()
{
    Node *p = head;
    do
    {
        p = p->next;
        cout << p->data << " ";
    } while (p != head);
}