//1.
#include<bits/stdc++.h>
using namespace std;

int fun(int x){
    static int n = 0;
    if(x>0){
        return fun(x-1)+x;
    }
}

int main(){
    int x=5;
    cout<<fun(x);
    return 0;
}

//2.

