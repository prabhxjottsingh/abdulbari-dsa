#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    int top;
    int *s;
    int size;
};

void push(Stack *st, int x)
{
    if (st->size - 1 == st->top)
        cout << "Stack Overflow" << endl;
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}

int pop(Stack *st)
{
    int x;
    if (st->top == -1)
    {
        cout << "Stack UNderflow";
        return -1;
    }
    else
    {
        x = st->s[st->top];
        st->top--;
        return x;
    }
}

int peek(Stack st, int pos)
{
    if (st.top - pos + 1 < 0)
    {
        cout << "No such position exists";
        return -1;
    }
    else
    {
        int x = st.s[st.top - pos + 1];
        return x;
    }
}

int stackTop(Stack st)
{
    if (st.top == -1)
    {
        cout << "No top most value";
        return -1;
    }
    else
        return st.s[st.top];
}

bool isEmpty(Stack st)
{
    if (st.top == -1)
        return true;
    else
        return false;
}

bool isFull(Stack st)
{
    if (st.top == st.size - 1)
        return true;
    else
        return false;
}

void Display(Stack st)
{
    while (st.top != -1)
    {
        cout << st.s[st.top] << " ";
        st.top--;
    }
    cout << endl;
}

int main()
{
    Stack st;
    cout << "Enter the size of the stack: " << endl;
    cin >> st.size;
    st.s = new int[st.size];
    st.top = -1;
    for (int i = 0; i < st.size; i++)
    {
        int x;
        cin >> x;
        push(&st, x);
    }
    Display(st);
    cout << peek(st, 4) << endl;
    cout << stackTop(st) << endl;
    if (isEmpty(st))
        cout << "Yes, stack is empty";
    else
        cout << "No, stack is not empty";
    cout << endl;
    if (isFull(st))
        cout << "Yes, stack is Full";
    else
        cout << "No, stack is not full";
    cout << endl;
    for (int i = 0; i < st.size; i++)
        pop(&st);
    Display(st);
    cout << "Deletion of all the elements is done" << endl;
    if (isEmpty(st))
        cout << "Yes, stack is empty";
    else
        cout << "No, stack is not empty";
    cout << endl;
    if (isFull(st))
        cout << "Yes, stack is Full";
    else
        cout << "No, stack is not full";
    cout << endl;
    return 0;
}