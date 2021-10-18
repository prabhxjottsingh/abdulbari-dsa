//without recursion
void display(Node *p)
{ //defining of the called function
    do
    {
        cout << p->data << "->";
        p = p->next;
    } while (head != p);
}

display(head); //calling of display function

//using recursion
void display(Node *p)
{ //defining of the called function
    static flag = 0;
    if (p != head || flag = 0)
    {
        cout << p->data << "->";
        p = p->next;
        flag = 1;
    }
}

display(head); //calling of display function