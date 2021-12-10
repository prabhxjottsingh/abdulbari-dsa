
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *top = NULL;

//class Stack{}

void push(int x)
{
    Node *temp;
    temp = new Node;

    if (temp == NULL)
    {
        cout << "Stack is full";
        return;
    }

    temp->data = x;
    temp->next = top;
    top = temp;
}

int pop()
{
    if (top == NULL)
    {
        cout << "Stack is Empty";
        return -1;
    }

    int x = top->data;
    Node *temp = top;
    top = top->next;
    free(temp);
    return x;
}

void Display()
{
    Node *p = top;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    Display();
    cout << pop();
}