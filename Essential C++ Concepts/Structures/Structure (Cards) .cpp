#include<bits/stdc++.h>
using namespace std;

struct cards{
    int face;
    int shape;
    int color;
};

int main(){
    struct cards deck[52];             //Array of structure
    int n = sizeof(deck);                      //structure has no size its always variable of the structure that has a size
    cout<<n;
    return 0;
}