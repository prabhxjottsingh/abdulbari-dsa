#include<bits/stdc++.h>
using namespace std;

struct quer{
    int first, second, idx;
};

const int m = 2e5 + 7;
const long long N = 1e6 + 7;
long long block_size, i = 0, cnt[N], current_answer = 0, mo_left = 0, mo_right = -1, arr[m], rArr[m];
vector<quer> q;

bool comp(const quer &a, const quer &b){
    int x = a.first/block_size;
    int y = b.first/block_size;
    if(x!=y)
        return x<y;
    return x&1?a.second<b.second:a.second>b.second;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    long long n, x;
    cin >> n >> x;
    for(long long i = 0; i < n; i++)
        cin >> arr[i];
    i = 0;
    q.resize(x);
    for(int i = 0; i < x; i++){
        cin >> q[i].first >> q[i].second;
        q[i].first -= 1, q[i].second -= 1;
        q[i].idx = i;
    }
    block_size = sqrt(n) + 2;
    sort(q.begin(), q.end(), comp);
    i = 0;
    while( i < x ){
        // cout << q[i].first << " " << q[i].second << ": ";
        while( mo_right < q[i].second ){
            mo_right += 1;
            long long x = arr[mo_right];
            long long prev_val = cnt[x] * cnt[x] * x;
            cnt[x] += 1;
            long long new_val = cnt[x] * cnt[x] * x;
            current_answer -= prev_val;
            current_answer += new_val;
        }
        while( mo_right > q[i].second ){
            long long &x = arr[mo_right];
            long long prev_val = cnt[x] * cnt[x] * x;
            cnt[x] -= 1;
            long long new_val = cnt[x] * cnt[x] * x;
            current_answer -= prev_val;
            current_answer += new_val;
            mo_right -= 1;
        }
        while( mo_left < q[i].first ){
            long long &x = arr[mo_left];
            long long prev_val = cnt[x] * cnt[x] * x;
            cnt[x] -= 1;
            long long new_val = cnt[x] * cnt[x] * x;
            current_answer -= prev_val;
            current_answer += new_val;
            mo_left += 1;
        }
        while( mo_left > q[i].first ){
            mo_left -= 1;
            long long x = arr[mo_left];
            long long prev_val = cnt[x] * cnt[x] * x;
            cnt[x] += 1;
            long long new_val = cnt[x] * cnt[x] * x;
            current_answer -= prev_val;
            current_answer += new_val;
        }
        rArr[q[i].idx] = current_answer;
        // cout << current_answer;
        // cout << endl;
        i += 1;
    }
    for(int i = 0; i < x; i++){
        cout << rArr[i] << endl;
    }
}
