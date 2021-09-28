#include <bits/stdc++.h>
using namespace std;

int pow(int n, int x)
{

    if (x == 1)
        return n;
    else
        return pow(n, x - 1) * n;
}
int main()
{
    int n, x;
    cin >> n >> x;
    cout << pow(n, x);
}

//Time Complexity - O(x)
//Space Complexity - O(x)