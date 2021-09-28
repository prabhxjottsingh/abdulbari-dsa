#include <bits/stdc++.h>
using namespace std;

int fun(int x)
{
    if (x > 0)
    {
        cout << x << " ";
        fun(x - 1);
        cout << endl;
        fun(x - 1);
    }
}

int main()
{
    int n = 3;
    fun(n);
}