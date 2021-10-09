#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void createLinkedlist(int A[], int n)
{
    int i;
    struct Node *t;
    struct Node *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    while (p->next != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << p->data << endl;
}

void insertAtHead(int x)
{
    Node *t;
    t = new Node;
    t->data = x;
    t->next = first;
    first = t;
}

void insertAtPos(int pos, int x)
{
    Node *t;
    Node *p1;
    p1 = first;
    t = new Node;
    t->data = x;
    for (int i = 0; i < pos - 1; i++)
    {
        p1 = p1->next;
    }
    t->next = p1->next;
    p1->next = t;
}

void insertAtLast(int x)
{
    Node *t = new Node;
    Node *last;
    last = first;
    t->data = x;
    t->next = NULL;
    while (last->next != NULL)
        last = last->next;
    if (first == NULL)
        first = last = t;
    else
    {
        last->next = t;
        last = t;
    }
}

void insertionInSortedLinkedList(int x)
{
    Node *p;
    p = first;
    Node *t = new Node;

    Node *q = NULL;
    t->data = x;
    while (p->data <= t->data && p)
    {
        q = p;
        p = p->next;
    }
    t->next = q->next;
    q->next = t;
}

int Delete(int key)
{
    Node *p;
    Node *q;
    p = first;
    while (p->data != key || p->next != NULL)
    {
        q = p;
        p = p->next;
    }
    if (p->next != NULL || p->data == key)
        q->next = p->next;
    else
    {
        cout << "Element Not Found";
    }
    int x = p->data;
    delete p;
    return x;
}

int DeleteataPArticularPos(int pos)
{
    Node *p;
    Node *q;
    p = first;
    for (int i = 0; i < pos - 1; i++)
    {
        q = p;
        p = p->next;
    }
    q->next = p->next;
    int x = p->data;
    delete p;
    return x;
}

int DeleteFirstNode(struct Node *p)
{
    first = p->next;
    int x = p->data;
    delete p;
    return x;
}

int main()
{
    int A[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = sizeof(A) / sizeof(A[0]);
    createLinkedlist(A, n);
    display(first);
    insertAtHead(5);
    display(first);
    insertAtPos(7, 65);
    display(first);
    insertAtLast(100);
    display(first);
    insertionInSortedLinkedList(39);
    display(first);
    cout << DeleteFirstNode(first) << endl;
    display(first);
    cout << Delete(100) << endl;
    display(first);
    cout << DeleteataPArticularPos(6) << endl;
    display(first);
    return 0;
}