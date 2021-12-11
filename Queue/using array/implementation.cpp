#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int size = 4;
    int front = -1, rear = -1;
    int *arr;
};

void enqueue(struct Queue *q, int x)
{
    if (q->rear == q->size - 1)
    {
        cout << "Sorry, queue is full";
    }
    else
    {
        q->rear++;
        q->arr[q->rear] = x;
    }
}

int dequeue(struct Queue *q)
{
    if (q->rear == q->front)
        cout << "Queue is already empty";
    else
    {
        q->front++;
        int x = q->arr[q->front];
        //delete[q->arr[q->front]];
        return x;
    }
    return -1;
}

void Display(struct Queue q)
{
    while (q.front != q.rear)
    {
        cout << q.arr[++q.front] << " ";
        // q.rear--;
    }
    cout << endl;
}

int main()
{
    int size;
    struct Queue q;
    cout << "Enter the size of the queue you wanted: ";
    cin >> q.size;
    q.arr = new int[q.size];
    q.front = -1;
    q.rear = -1;
    cout << "Enter " << q.size << " element in the queue: ";
    for (int i = 0; i < q.size; i++)
    {
        int x;
        cin >> x;
        enqueue(&q, x);
    }
    cout << dequeue(&q) << endl;
    Display(q);
}