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

void reverse()
{
    Node *p = first;
    Node *temp = NULL;
    while (p != NULL)
    {
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        p = p->prev;
        if (p != NULL && p->next == NULL)
            first = p;
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

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    createDoublyLL(arr, size);
    display(first);
    cout << length() << endl;
    reverse();
    display(first);
    return 0;
}