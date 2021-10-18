#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *prev;
    int data;
    Node *next;
} *first = NULL;

void createDoublyLL(int a[], int size)
{
    first = new Node;
    first->prev = NULL;
    first->data = a[0];
    first->next = NULL;
    Node *p = first;
    Node *temp;
    for (int i = 1; i < size; i++)
    {
        temp = new Node;
        temp->prev = p;
        temp->data = a[i];
        temp->next = p->next;
        p->next = temp;
        p = temp;
    }
}

void display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int length()
{
    Node *p = first;
    int count = 0;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}

void insert(int x, int pos)
{
    Node *p = first;
    Node *temp;
    if (pos == 1)
    {
        temp = new Node;
        temp->prev = NULL;
        temp->data = x;
        temp->next = first;
        first->prev = temp;
        first = temp;
    }
    else
    {
        for (int i = 0; i < pos - 2; i++)
            p = p->next;
        temp = new Node;
        temp->prev = p;
        temp->data = x;
        temp->next = p->next;
        p->next = temp;
    }
}

int Delete(int pos)
{
    Node *p = first;
    if (pos == 1)
    {
        first = p->next;
        int x = p->data;
        delete p;
        if (first)
            first->prev = NULL;
        return x;
    }
    else
    {
        Node *q;
        for (int i = 0; i < pos - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        int x = p->data;
        delete p;
        if (p->next)
            p->next->prev = p->prev;
        return x;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    createDoublyLL(arr, size);
    display(first);
    cout << length() << endl;
    insert(5, 1);
    display(first);
    insert(5, 9);
    display(first);
    cout << Delete(1) << endl;
    display(first);
    cout << Delete(6) << endl;
    display(first);
    return 0;
}