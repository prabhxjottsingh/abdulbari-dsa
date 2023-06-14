/*
You have the right to work only but never to its fruits.
Let not the fruits of action be your motive, nor let your attachment be to inaction.
*/
#include<bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define ll long long
#define wishOneDay ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define endl '\n';

struct query{
    int l, r, i;
};

const int N = 30000 + 10;
const int P = 200000 + 10;
int arr[N];
const int M = 1e6 + 2;
int cnt[M];
query qu[P];
int block_sz;
int mo_left = 0, mo_right = -1;
int rArr[M];
int cntDist = 0;

bool cmp(const query &a, const query &b){
    int x = a.l/block_sz;
    int y = b.l/block_sz;
    if(x!=y)
        return x<y;
    return x&1?a.r<b.r:a.r>b.r;
}

void subVal(int x){
    cnt[x] -= 1;
    if( cnt[x] == 0 ) cntDist -= 1;
}

void addVal(int x){
    cnt[x] += 1;
    if( cnt[x] == 1 ) cntDist += 1;
}

void solve(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int q;
    cin >> q;
    block_sz = sqrt(n) + 2;
    for(int i = 0; i < q; i++){
        cin >> qu[i].l >> qu[i].r;
        qu[i].i = i;
        qu[i].l -= 1;
        qu[i].r -= 1;
    }
    sort(qu, qu + q, cmp);
    // for(int i = 0; i < q; i++){
    //     cout << qu[i].l << " " << qu[i].r << endl;
    // }
    int i = 0;
    while( i < q ){

        //operation on mo_right
        while( mo_right < qu[i].r ){
            mo_right += 1;
            addVal(arr[mo_right]);
        }while( mo_right > qu[i].r ){
            subVal(arr[mo_right]);
            mo_right -= 1;
        }

        //operation on mo_left
        while( mo_left < qu[i].l ){
            subVal(arr[mo_left]);
            mo_left += 1;
        }while( mo_left > qu[i].l ){
            mo_left -= 1;
            addVal(arr[mo_left]);
        }

        rArr[qu[i].i] = cntDist;
        // cout << qu[i].l << " "  << qu[i].r << " " << cntDist << endl;
        i += 1;

    }

    for(int i = 0; i < q; i++)
        cout << rArr[i] << endl;
}

int main(){

    wishOneDay

    int tc = 1;
    // cin >> tc;
    while( tc-- ) solve(), cout << endl;
    return 0;

}
