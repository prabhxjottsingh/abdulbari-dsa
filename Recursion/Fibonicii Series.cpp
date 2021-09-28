#include<bits/stdc++.h>
using namespace std;


int fib(int n){
    if(n<=1){
        
        return n;
    }
    else
        return fib(n-1) + fib(n-2);
}

int main(){
    int n = 10;
    int ans = fib(n-1);
    cout<<ans;
    return 0;
}

