#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }
    void push(int x);
    int pop();
    void Display();
};

void Stack::push(int x)
{
    Node *temp;
    temp = new Node;
    if (temp == NULL)
    {
        cout << "Stack is full.";
    }
    else
    {
        temp->data = x;
        temp->next = top;
        top = temp;
    }
}

int Stack::pop()
{
    int x = -1;
    if (top == NULL)
        cout << "Stack is empty";
    else
    {
        x = top->data;
        Node *temp = top;
        top = top->next;
        free(temp);
    }
    return x;
}

void Stack::Display()
{
    Node *p = top;
    while (p != NULL)
    {
        cout << p->data << "->";
        p = p->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Stack st;
    st.push(10);
    st.push(56);
    st.push(45);
    st.Display();
    cout << st.pop() << endl;
    st.Display();
    return 0;
}