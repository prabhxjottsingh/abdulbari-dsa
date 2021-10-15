#include <bits/stdc++.h>
using namespace std;

template <class T>
class Node
{
public:
    T data;
    Node<T> *next;
};

template <class T>
class LinkedList
{
private:
    Node<T> *first;

public:
    LinkedList(); //constructor
    LinkedList(T a[], int size);
    ~LinkedList();

    void display();
    void insert(int index, T key);
    T Delete(int index);
    int length();
};

template <class T>
LinkedList<T>::LinkedList()
{
    first = NULL;
}

template <class T>
LinkedList<T>::LinkedList(T A[], int size)
{
    Node<T> *last;
    first = new Node<T>;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < size; i++)
    {
        Node<T> *temp;
        temp = new Node<T>;
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

template <class T>
LinkedList<T>::~LinkedList()
{
    Node<T> *p;
    while (first)
    {
        first = first->next;
        delete p;
        p = first;
    }
}

template <class T>
void LinkedList<T>::display()
{
    Node<T> *p = first;
    while (p)
    {
        cout << p->data << "->";
        p = p->next;
    }
    cout << "NULL" << endl;
}

template <class T>
void LinkedList<T>::insert(int index, T key)
{

    if (index < 0 || index > length())
        return;

    Node<T> *p = first;
    Node<T> *temp;
    temp = new Node<T>;
    temp->data = key;
    temp->next = NULL;
    if (index == 0)
    {
        temp->data = key;
        temp->next = first;
        first = temp;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        temp->next = p->next;
        p->next = temp;
    }
}

template <class T>
T LinkedList<T>::Delete(int index)
{
    if (index < 0 || index > length())
        return -1;

    Node<T> *p = first;
    if (index == 1)
    {
        int x = p->data;
        first = first->next;
        delete p;
        return x;
    }

    else
    {
        Node<T> *temp;
        for (int i = 0; i < index - 1; i++)
        {
            temp = p;
            p = p->next;
        }
        T x = p->data;
        temp->next = p->next;
        delete p;
        return x;
    }
}

template <class T>
int LinkedList<T>::length()
{
    int count = 0;
    Node<T> *p = first;
    while (p)
    {
        count++;
        p = p->next;
    }
    return count;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(A) / sizeof(A[0]);

    LinkedList<int> l(A, size);

    l.insert(0, 12);
    l.insert(4, 5);
    l.Delete(3);
    l.display();
    cout << l.length();
    return 0;
}