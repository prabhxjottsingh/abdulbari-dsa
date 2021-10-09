#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *first = NULL;

void createLinkedlist(int a[], int n)
{
    int i;
    Node *temp;
    Node *last;
    first = new Node;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
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

bool isSorted(Node *p)
{
    int x = INT_MIN;
    while (p != NULL)
    {
        if ((p->data) < x)
            return false;
        x = p->data;
        p = p->next;
    }
    return true;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 61, 8, 7, 8, 9};
    int n = sizeof(A) / sizeof(A[0]);
    createLinkedlist(A, n);
    display(first);
    if (isSorted(first))
        cout << "Yes, linked list is sorted.";
    else
        cout << "No, linked list is not sorted.";
    return 0;
}