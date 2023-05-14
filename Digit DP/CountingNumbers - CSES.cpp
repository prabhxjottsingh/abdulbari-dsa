#include<bits/stdc++.h>
using namespace std;

long long dp[25][11][2][2];

long long f(string &a, int n, int prev, bool tight, bool leadingZero){
    if( n == 1 ){
        // cout << prev << " " << tight << endl;
        if( tight ){
            int cnt = 0;
            for(int i = 0; i <= a[a.size() - 1] - '0'; i++){
                if( prev != i || (leadingZero && i == 0) ) cnt += 1;
            }
            return cnt;
        }
        else{
            if( leadingZero ) return 10;
            return 9;
        }
    }
    long long &ans = dp[n][prev][tight][leadingZero];
    if( ans != -1 ) return ans;
    int ub = ((tight) ? (a[a.size() - n] - '0') : 9);
    long long cnt = 0;
    // cout << prev << " " << ub << endl;
    for(int dig = 0; dig <= ub; dig++){
        if( (dig != prev) || (leadingZero && prev == 0) ){
            if( dig == 0 )
                cnt += f(a, n - 1, dig, (tight && (ub == dig)), leadingZero);
            else
                cnt += f(a, n - 1, dig, (tight && (ub == dig)), 0);
        }
    }
    return ans = cnt;
}

int main(){
    memset(dp, -1, sizeof(dp));
    long long a, b;
    cin >> a >> b;
    a -= 1;
    // a = max(a, 0ll);
    string x = to_string(a);
    string y = to_string(b);
    long long firstEnc = f(y, y.size(), 0, 1, 1);
    memset(dp, -1, sizeof(dp));
    // cout << firstEnc << endl;
    long long secondEnc = f(x, x.size(), 0, 1, 1);
    // cout << secondEnc << endl;
    cout << firstEnc - secondEnc;
}
