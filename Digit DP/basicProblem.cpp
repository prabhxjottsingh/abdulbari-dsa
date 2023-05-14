/*
find the count of number between l and r which have a sum of digits = x
1 <= L <= R <= 1^18
1 <= x <= 180
*/

#include<bits/stdc++.h>
using namespace std;

int digSum(int n){
    int sum = 0;
    while( n ){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int bruteForce(int l, int r, int x){
    int cnt = 0;
    for(int i = l; i <= r; i++) if( digSum(i) == x ) cnt += 1;
    return cnt;
}

int solve(string nums, int n, int x, bool tight){
    if( x < 0 ) return 0;
    if( n == 1 ){
        if( x >= 0 && x <= 9 ) return 1;
        return 0;
    }
    int ub = (tight ? nums[nums.size() - n] - '0' : 9);
    int cnt = 0;
    for(int dig = 0; dig <= ub; dig++){
        cnt += solve(nums, n - 1, x - dig, (tight & ub == dig));
    }
    return cnt;
}

int main(){
    int l, r, x;
    cin >> l >> r >> x;
    string L = "", R = "";
    R = to_string(r);
    cout << bruteForce(l, r, x);
    cout << endl;
    cout << solve(R, R.size(), x, 1);
}
