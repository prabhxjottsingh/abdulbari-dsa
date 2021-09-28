#include <bits/stdc++.h>
using namespace std;

struct Array
{
    int *A;
    int length;
    int size;
};

void display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
    cout << endl;
}

void insert(struct Array &arr, int x)
{
    int z = 0;
    if (arr.length >= arr.size)
        cout << "No Space is there for extra element";
    else
    {
        for (int i = arr.length - 1; i >= 0; i--)
        {
            if (arr.A[i] < x)
            {
                z = i + 1;
                break;
            }
        }
        for (int i = arr.length; i >= z; i--)
            arr.A[i + 1] = arr.A[i];
        arr.A[z] = x;
        arr.length++;
    }
}

int main()
{
    struct Array arr;
    cin >> arr.size;
    cin >> arr.length;
    arr.A = new int[arr.size];
    for (int i = 0; i < arr.length; i++)
        cin >> arr.A[i];
    sort(arr.A, arr.A + arr.size);
    display(arr);
    insert(arr, 0);
    display(arr);
}