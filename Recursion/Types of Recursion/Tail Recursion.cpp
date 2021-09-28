#include <bits/stdc++.h>
using namespace std;

int fun(int x)
{
    if (x > 0)
    {
        return fun(x - 1) + x;
    }
}

int main()
{
    int n = 5;
    cout << fun(n);
}