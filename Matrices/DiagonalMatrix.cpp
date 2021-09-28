#include <bits/stdc++.h>
using namespace std;

void sets(int a[], int i, int j, int x)
{
    if (i == j)
        a[i] = x;
}

int gets(int a[], int i, int j)
{
    if (i == j)
        return a[i];
    return 0;
}

int main()
{
    int n;
    cout << "Enter the rows and colunms of the square matrix: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the diagonal matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            sets(a, i, j, x);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << gets(a, i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}
