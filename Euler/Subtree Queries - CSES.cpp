#include<bits/stdc++.h>
using namespace std;

void dfs(long node, long par, vector<long> graph[], long* start, long* end, long* lt, long &time){
    start[node] = time;
    lt[time++] = node;
    for(long &child : graph[node]){
        if( child != par )
            dfs(child, node, graph, start, end, lt, time);
    }
    end[node] = time;
    lt[time++] = node;
}

const long N = 4e5 + 10;
long fTree[N];

void addValue(long idx, long n, long val){
    while( idx <= n ){
        fTree[idx] += val;
        idx += idx & (-idx);
    }
}

long query(long idx){
    long sum = 0;
    while( idx > 0 ){
        sum += fTree[idx];
        idx -= (idx) & (-idx);
    }
    return sum;
}

long sumQuery(long r, long l){
    return query(r) - query(l);
}

void buildFenwickTree(long *lt, long n, long *val, long time){
    for(long i = 1; i < time; i++)
        addValue(i, time, val[lt[i]]);
}

int main(){

    long n, q;
    cin >> n >> q;
    long val[n + 1], start[n + 1], end[n + 1], lt[2 * n + 10], time = 1;
    for(long i = 1; i <= n; i++)
        cin >> val[i];
    vector<long> graph[n + 1];
    for(long i = 0; i < n - 1; i++){
        long u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    dfs(1, 0, graph, start, end, lt, time);

    buildFenwickTree(lt, n, val, time);

    for(long i = 0; i < q; i++){
        long type;
        cin >> type;
        if( type == 1 ){
            long s, x;
            cin >> s >> x;
            addValue(start[s], time, -val[s] + x);
            addValue(end[s], time, -val[s] + x);
            val[s] = x;
        }
        else{
            long s;
            cin >> s;
            cout << sumQuery(end[s], start[s] - 1) / 2 << endl;
        }
    }
    return 0;
}
