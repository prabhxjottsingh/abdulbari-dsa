int peek(int pos)
{
    Node *p = top;
    for (int i = 0; (p != NULL) && (i < pos - 1); i++)
        p = p->next;
    if (p != NULL)
        return p->data;
    else
        return -1;
}