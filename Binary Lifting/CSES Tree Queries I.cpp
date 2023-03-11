//time complexity for each query: O(log k)
/*
Binary Lifting is very important, it is kind of Sparse Table like Algorithm
*/


#include<bits/stdc++.h>
using namespace std;

const int MAX = 18;

int main(){
    int n, q;
    cin >> n >> q;
    vector<vector<int>> parent(MAX + 1, vector<int> (n + 1, -1));
    for(int i = 2; i <= n; i++){
        int x;
        cin >> x;
        parent[0][i] = x;
    }
    for(int i = 1; i < MAX; i++){
        for(int j = 0; j <= n; j++){
            if( parent[i - 1][j] == -1 )
                parent[i][j] = -1;
            else
                parent[i][j] = parent[i - 1][parent[i - 1][j]];
        }
    }
    for(int i = 0; i < q; i++){
        int node;
        int k;
        cin >> node >> k;
        for(int i = 0; i < MAX; i++){
            if( (k & (1 << i)) )
                node = parent[i][node];
            if( node == -1 ) break;
        }
        cout << node << endl;
    }
}
