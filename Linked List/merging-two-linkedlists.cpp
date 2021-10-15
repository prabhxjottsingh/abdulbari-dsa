//combining two sorted linkedlists to form a single sorted linked list

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
} *first = NULL, *second = NULL, *third = NULL;

void createLLfirst(int a[], int size)
{
    first = new node;
    node *last;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < size; i++)
    {
        node *temp;
        temp = new node;
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void createLLsecond(int a[], int size)
{
    second = new node;
    node *last;
    second->data = a[0];
    second->next = NULL;
    last = second;
    for (int i = 1; i < size; i++)
    {
        node *temp;
        temp = new node;
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void display(node *p)
{
    while (p != NULL)
    {
        cout << p->data << "->";
        p = p->next;
    }
    cout << "NULL" << endl;
}

void merge(node *p, node *q)
{
    node *last;
    if (p->data < q->data)
    {
        third = last = p;
        p = p->next;
        last->next = NULL;
    }
    else
    {
        third = last = q;
        q = q->next;
        last->next = NULL;
    }
    while (p != NULL && q != NULL)
    {
        if ((p->data) < (q->data))
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if (p)
        last->next = p;
    else
        last->next = q;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sizea = sizeof(a) / sizeof(a[0]);
    int sizeb = sizeof(b) / sizeof(b[0]);
    createLLfirst(a, sizea);
    createLLsecond(b, sizeb);
    display(first);
    display(second);
    merge(first, second);
    display(third);
    return 0;
}
