#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int size;
    int *arr;
    int rear = 0;
    int front = 0;
};

void enqeue(Queue *q, int x)
{
    if (((q->rear + 1) % q->size) == (q->front))
    {
        cout << "Queue is full sorry" << endl;
        return;
    }
    q->rear = ((q->rear + 1) % q->size);
    q->arr[q->rear] = x;
}

int dequeue(Queue *q)
{
    int x = -1;

    if (q->front == q->rear)
    {
        cout << "Queue is Empty" << endl;
        return x;
    }

    x = q->arr[(q->front + 1) % q->size];

    return x;
}

void Display(Queue q)
{
    while (q.rear != q.front)
    {
        cout << q.arr[q.rear] << " ";
        q.rear--;
    }
}

int main()
{
    Queue q;
    q.size = 10;
    q.arr = new int[q.size];
    enqeue(&q, 3);
    enqeue(&q, 3);
    enqeue(&q, 3);
    enqeue(&q, 3);
    enqeue(&q, 3);
    enqeue(&q, 3);
    enqeue(&q, 3);
    enqeue(&q, 3);
    enqeue(&q, 3);
    cout << dequeue(&q) << endl;
    cout << dequeue(&q) << endl;
    cout << dequeue(&q) << endl;
    cout << dequeue(&q) << endl;
    cout << dequeue(&q) << endl;
    cout << dequeue(&q) << endl;
    cout << dequeue(&q) << endl;
    cout << dequeue(&q) << endl;
    enqeue(&q, 3);
    enqeue(&q, 3);
    enqeue(&q, 3);
    enqeue(&q, 3);
    enqeue(&q, 3);
    enqeue(&q, 3);
    enqeue(&q, 3);
    Display(q);
}
