#include <bits/stdc++.h>
using namespace std;

int a(int);
int b(int);

int main()
{
    int n = 3;
    a(n);
}

int b(int x)
{
    if (x > 0)
    {
        cout << x << " ";
        a(x / 2);
    }
}

int a(int x)
{
    if (x > 0)
    {
        cout << x << " ";
        b(x - 1);
    }
}
F