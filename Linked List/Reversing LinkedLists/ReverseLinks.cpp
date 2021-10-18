#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Node *first;

void createLL(int a[], int size)
{
    Node *last;
    first = new Node;
    first->data = a[0];
    first->next = NULL;
    last = new Node;
    last = first;
    for (int i = 1; i < size; i++)
    {

        Node *temp;
        temp = new Node;
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void display()
{
    Node *p = first;
    while (p != NULL)
    {
        cout << p->data << "->";
        p = p->next;
    }
    cout << "NULL" << endl;
}

void reverseLL()
{
    Node *p = first;
    Node *q;
    Node *r;
    q = NULL;
    r = NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(a) / sizeof(a[0]);
    createLL(a, size);
    display();
    reverseLL();
    display();
    return 0;
}