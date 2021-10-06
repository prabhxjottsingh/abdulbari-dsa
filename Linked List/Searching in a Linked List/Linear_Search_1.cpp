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

void searchElement(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
            break;
        p = p->next;
    }
    if (p == NULL)
        cout << "Element not found";
    else
        cout << "Element found";
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(A) / sizeof(A[0]);
    createLinkedlist(A, n);
    searchElement(first, 9);
    return 0;
}