#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return fact(n - 1) * n;
}
int main()
{
    int n = 5;
    cout << fact(n);
}

//Time Complexity - O(n)
//Space Complexity - O(n)