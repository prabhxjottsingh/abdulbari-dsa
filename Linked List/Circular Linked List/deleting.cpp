#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
} * head;

void createCircularLL(int a[], int size)
{
    int i;
    Node *temp, *last;
    head = new Node;
    head->data = a[0];
    head->next = head;
    last = head;
    for (i = 1; i < size; i++)
    {
        temp = new Node;
        temp->data = a[i];
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}

void insert(int key, int pos)
{
    if ((pos < 0))
        return;
    if (pos == 0)
    {
        Node *temp, *p = head;
        temp = new Node;
        temp->data = key;
        temp->next = head;
        do
        {
            p = p->next;
        } while (p->next != head);
        p->next = temp;
    }
    else
    {
        Node *p = head, *temp;
        for (int i = 0; i < pos - 2; i++)
        {
            p = p->next;
        }
        temp = new Node;
        temp->data = key;
        temp->next = p->next;
        p->next = temp;
    }
}

void display(Node *p)
{
    do
    {
        cout << p->data << "->";
        p = p->next;
    } while (p != head);
    cout << p->data << endl;
}

void Delete(int pos)
{
    if (pos != 1)
    {
        Node *p = head;
        Node *q = NULL;
        for (int i = 0; i < pos - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        delete p;
    }
    else
    {
        Node *p = head;
        do
        {
            p = p->next;
        } while (p->next != head);
        p->next = head->next;
        delete head;
        head = p->next;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    createCircularLL(arr, size);
    display(head);
    insert(2, 0);
    display(head);
    Delete(1);
    display(head);
    return 0;
};