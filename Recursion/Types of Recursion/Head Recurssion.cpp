#include <bits/stdc++.h>
using namespace std;

int fun(int x)
{
    if (x > 0)
    {
        fun(x - 1);
        cout << x;
    }
}

int main()
{
    int n = 5;
    fun(n);
}