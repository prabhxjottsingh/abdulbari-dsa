//floyd's algorithm

bool checkLoop(Node *p)
{
    Node *walker = p;
    Node *runner = p;
    while ((runner->next != NULL) && (runner != NULL))
    {
        if (runner == walker)
            return true;
        runner = runner->next->next;
        walker = walker->next;
    }
    return false;
}