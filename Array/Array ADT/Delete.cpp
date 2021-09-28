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
    cout << endl
         << "The elements in the array are: ";
    for (int i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
    cout << endl;
}

void Delete(struct Array &arr, int index)
{
    for (int i = index + 1; i < arr.length; i++)
    {
        arr.A[i - 1] = arr.A[i];
    }
    arr.length--;
}

int main()
{
    struct Array arr;
    cout << "Enter the size of the array: ";
    cin >> arr.size;
    arr.A = new int[arr.size];
    cout << endl
         << "Enter the number of the elements you want to insert in the array: ";
    cin >> arr.length;
    cout << endl
         << "Enter the elements of the array: ";
    for (int i = 0; i < arr.length; i++)
        cin >> arr.A[i];
    display(arr);
    Delete(arr, 3);
    display(arr);
    return 0;
}