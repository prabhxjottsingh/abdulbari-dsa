#include <bits/stdc++.h>
using namespace std;

int dp[100003][4];
vector<vector<int>> v(100003, vector<int>(3));

int func(int idx, int lastIdx)
{
    int maxSum = INT_MIN;
    if (idx == 0)
    {
        for (int i = 0; i < 3; i++)
        {
            if (lastIdx != -1)
                maxSum = max(maxSum, v[0][i]);
        }
        return dp[idx][lastIdx] = maxSum;
    }
    if (dp[idx][lastIdx] != -1)
        return dp[idx][lastIdx];
    for (int i = 0; i < 3; i++)
    {
        if (i != lastIdx)
        {
            maxSum = max(maxSum, v[idx][i] + func(idx - 1, i));
        }
    }
    return dp[idx][lastIdx] = maxSum;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> v[i][j];
    }
    cout << func(n - 1, 3);
}