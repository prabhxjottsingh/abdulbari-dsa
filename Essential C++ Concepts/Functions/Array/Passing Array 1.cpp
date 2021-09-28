#include <bits/stdc++.h>
using namespace std;

void fun(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int size = 10;
    int a[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    fun(a, size);
    return 0;
}