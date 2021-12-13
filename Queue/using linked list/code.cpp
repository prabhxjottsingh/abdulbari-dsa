#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *front = NULL, *rear = NULL;

void enqeueu(int x)
{
    Node *t = new Node;

    if (t == NULL)
    {
        cout << "Queue is Full";
        return;
    }

    t->data = x;
    t->next = NULL;

    if (front == NULL)
    {
        front = rear = t;
    }

    else
    {
        rear->next = t;
        rear = t;
    }
}

int deqeueu()
{

    if (front == NULL)
    {
        cout << "Queue is empty";
        return -1;
    }

    else
    {
        int x = front->data;
        front = front->next;
        return x;
    }
}

void Display()
{
    Node *p = front;
    //cout<<p->data;
    while (p)
    {
        //p = p->next;
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    enqeueu(10);
    enqeueu(20);

    Display();

    cout << endl
         << deqeueu();
}