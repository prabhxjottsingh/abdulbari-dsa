//it is not preferred

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int b[N];

struct Node
{
    int data;
    Node *next;
} *first = NULL;

void createLinkedList(int a[], int size)
{
    first = new Node;
    first->data = a[0];
    Node *temp;
    first->next = NULL;
    Node *last;
    last = first;
    for (int i = 1; i < size; i++)
    {
        temp = new Node;
        temp->next = NULL;
        temp->data = a[i];
        last->next = temp;
        last = temp;
    }
}

int display(Node *p)
{
    int count = 0;
    while (p != NULL)
    {
        cout << p->data << "->";
        p = p->next;
        count++;
    }
    cout << "NULL" << endl;
    return count;
}

linkedlistToarray(Node *p, int count)
{
    for (int i = 0; i < count; i++)
    {
        b[i] = p->data;
        p = p->next;
    }
}

void reverseLL(Node *p, int count)
{
    int i = 0;
    p = first;
    int a[count];
    while (p != NULL)
    {
        a[i] = p->data;
        i++;
        p = p->next;
    }
    i--;
    p = first;
    while (p != NULL)
    {
        p->data = a[i];
        p = p->next;
        i--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 12, 36, 97, 78, 96, 3, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    createLinkedList(arr, size);
    int count = display(first);
    reverseLL(first, count);
    display(first);
    return 0;
}