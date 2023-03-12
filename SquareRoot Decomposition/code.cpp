#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int len = sqrt(n);
    len += 2;
    int sqrtArr[len];
    for(int i = 0; i < len; i++)
        sqrtArr[i] = 1e9;
    for(int i = 0; i < n; i++){
        int sqrtIdx = i / len;
        sqrtArr[sqrtIdx] = min(sqrtArr[sqrtIdx], arr[i]);
    }
    int q;
    cin >> q;
    while( q-- ){
        int l, r;
        cin >> l >> r;
        int minVal = 1e9;
        while( l <= r ){
            if( l % len == 0 && l + len - 1 <= r ){
                minVal = min(minVal, sqrtArr[l / len]);
                l += len;
            }
            else{
                minVal = min(minVal, arr[l]);
                l++;
            }
        }
        cout << minVal << endl;
    }
}
