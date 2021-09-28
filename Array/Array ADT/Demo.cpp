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
    int i;
    cout << "The elements of the array are: ";
    for (int i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
    cout<<endl;
}

int main()
{
    struct Array arr;
    cout << "Enter size of an array: ";
    cin >> arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;
    cout << "Enter the number of elements you want to add in the array: ";
    cin >> arr.length;
    cout << "Enter " << arr.length << " elements of the array: ";
    for (int i = 0; i < arr.length; i++)
        cin >> arr.A[i];
    display(arr);
    return 0;
}