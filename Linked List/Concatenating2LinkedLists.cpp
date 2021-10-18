//Appending two linked lists

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *first = NULL, *second = NULL;

void createLLa(int a[], int size)
{
    first = new Node;
    first->data = a[0];
    first->next = NULL;
    Node *last;
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

void createLLb(int a[], int size)
{
    second = new Node;
    second->data = a[0];
    second->next = NULL;
    Node *last;
    last = second;
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

void display(Node *p)
{
    while (p)
    {
        cout << p->data << "->";
        p = p->next;
    }
    cout << "NULL";
    cout << endl;
}

void concatenate(Node *p, Node *q)
{
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = q;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(a) / sizeof(a[0]);
    createLLa(a, size);
    createLLb(b, size);
    display(first);
    display(second);
    concatenate(first, second);
    display(first);
    return 0;
}