#include <bits/stdc++.h>
using namespace std;

int arr[10];

void reverseArray(int low, int high)
{
    if (high - low < 1)
        return;
    swap(arr[high], arr[low]);
    low++;
    high--;
    reverseArray(low, high);
}

int main()
{
    int n = 10;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    reverseArray(0, 9);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
