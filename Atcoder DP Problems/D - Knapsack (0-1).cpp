#include<bits/stdc++.h>
using namespace std;

long long int dp[101][100005]; 

long long int func(long long int idx, long long int W, vector<long long int> &wt, vector<long long int> &cost){
    if(idx == 0){
        if(wt[idx] <= W)
            return cost[idx];
        return 0;
    }
    if(dp[idx][W] != -1)
        return dp[idx][W];
    long long int notPick = func(idx - 1, W, wt, cost);
    long long int Pick = 0;
    if(wt[idx] <= W)
        Pick = cost[idx] + func(idx - 1, W - wt[idx], wt, cost);
    return dp[idx][W] = max(Pick, notPick);
}

long long int knapsack(vector<long long int> wt, vector<long long int> value, long long int n, long long int maxWeight){
    long long int res = func(n - 1, maxWeight, wt, value);
    return res;
}

int main(){ 
    memset(dp, -1, sizeof(dp));
    long long int n, k;
    cin >> n >> k;
    vector<long long int> wt(n), cost(n);
    for(long long int i = 0; i < n; i++){
        cin >> wt[i] >> cost[i];
    }
    cout << knapsack(wt, cost, n, k);
}