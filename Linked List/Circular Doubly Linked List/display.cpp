#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *prev;
    int data;
    Node *next;
} * head;

void createCircularDoublyLL(int a[], int size)
{
    Node *p;
    Node *temp;
    head = new Node;
    head->prev = NULL;
    head->data = a[0];
    head->next = NULL;
    p = head;
    for (int i = 1; i < size; i++)
    {
        temp = new Node;
        temp->next = NULL;
        temp->data = a[i];
        temp->prev = p;
        p->next = temp;
        p = temp;
    }
    p->next = head;
    head->prev = p;
}

void display()
{
    Node *p = head;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
}

void Delete(int pos)
{
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    createCircularDoublyLL(arr, size);
    display();
    return 0;
}