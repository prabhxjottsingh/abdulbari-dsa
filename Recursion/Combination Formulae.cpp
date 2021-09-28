#include <bits/stdc++.h>
using namespace std;

int combo(int n, int r)
{
    if (n == 1 || r == 1)
        return 1;
    else
        return combo(n - 1, r - 1) + combo(n - 1, r);
}

int main()
{
    int n = 6;
    cout << combo(5, 5);
    return 0;
}
