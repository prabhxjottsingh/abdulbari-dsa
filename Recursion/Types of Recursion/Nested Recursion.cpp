#include <bits/stdc++.h>
using namespace std;

int fun(int x)
{
    if (x > 100)
        return x - 10;
    else
        return fun(fun(x + 11));
}
int main()
{
    int x = 95;
    cout << fun(x);
}