#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *first = NULL;

void createLinkedList(int arr[], int n)
{
    Node *temp;
    Node *last;
    first = new Node;
    first->data = arr[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = arr[i];
        last->next = temp;
        temp->next = NULL;
        last = temp;
    }
}

void display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << "->";
        p = p->next;
    }
    cout << "NULL" << endl;
}

void removeDuplicates(Node *p)
{
    Node *q;
    q = p->next;
    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

int main()
{
    int arr[] = {1, 23, 4, 5, 6, 7, 8, 8, 8, 8, 9, 9, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    createLinkedList(arr, size);
    display(first);
    removeDuplicates(first);
    display(first);
}