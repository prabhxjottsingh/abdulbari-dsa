#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
int dp[N];

int func(int n, vector<int> &height, int k)
{
    if (n == 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int finalJump = INT_MAX;
    for (int i = 1; i <= k; i++)
    {
        int newJump = INT_MAX;
        if (n - i > -1)
        {
            newJump = func(n - i, height, k) + abs(height[n - i] - height[n]);
        }
        finalJump = min(finalJump, newJump);
    }
    dp[n] = finalJump;
    return dp[n];
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n, k;
    cin >> n >> k;
    vector<int> height(n);
    for (int i = 0; i < n; i++)
        cin >> height[i];
    cout << func(n - 1, height, k);
}