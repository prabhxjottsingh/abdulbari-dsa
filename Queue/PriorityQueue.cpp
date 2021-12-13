#include <bits/stdc++.h>
using namespace std;

void showPQ(priority_queue<int> a)
{
    while (!a.empty())
    {
        cout << a.top() << " ";
        a.pop();
    }
    cout << endl;
}

int main()
{
    priority_queue<int> a;
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(50);
    a.push(40);
    a.push(60);
    a.push(1330);
    a.push(1034);
    a.push(1033);
    cout << "The priority queue ypu have enteres is: ";
    showPQ(a);

    cout << "The size of the queue is: " << a.size() << endl;
    cout << "Top element of the queue is: " << a.top() << endl;
    a.pop();
    cout << "The size of the queue and top element of the PQ after the removal of top element is: " << a.size() << " and " << a.top();
}