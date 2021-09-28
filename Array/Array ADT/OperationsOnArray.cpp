#include <bits/stdc++.h>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void display(struct Array arr)
{
    cout << "The elements of the array are: ";
    for (int i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
    cout << endl;
}

void get(struct Array arr, int pos)
{

    if (pos >= arr.length && pos < arr.size)
        cout << "No number exists at such position of the array.";

    else if ((pos >= arr.size) || (pos < 0))
        cout << "No such position exists.";

    else
        cout << "At " << pos << " index of the array " << arr.A[pos] << " exists.";
}

int main()
{

    struct Array arr;
    cout << "Enter the size of the array: ";
    cin >> arr.size;
    cout << "Enter the number of elements you want to insert in the array: ";
    cin >> arr.length;

    arr.A = new int[arr.size];

    cout << "Enter the elements in the array: ";

    for (int i = 0; i < arr.length; i++)
        cin >> arr.A[i];

    display(arr);

    get(arr, 4);
    O(1)
    set();
    O(1) // set the value of a particular index
    max();
    O(n)
    min();
    O(n)
    sum();
    O(n)
    return 0;
}