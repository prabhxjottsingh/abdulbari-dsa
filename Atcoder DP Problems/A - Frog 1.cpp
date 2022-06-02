#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
int dp[N];

int func(int n, vector<int> &height)
{
    if (n == 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int firstJump = func(n - 1, height) + abs(height[n] - height[n - 1]);
    int secondJump = INT_MAX;
    if (n - 2 > -1)
        secondJump = func(n - 2, height) + abs(height[n] - height[n - 2]);
    int finalJump = min(firstJump, secondJump);
    dp[n] = finalJump;
    return dp[n];
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    vector<int> height(n);
    for (int i = 0; i < n; i++)
        cin >> height[i];
    cout << func(n - 1, height);
}