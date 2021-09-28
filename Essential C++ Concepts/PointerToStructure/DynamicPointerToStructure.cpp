#include<bits/stdc++.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

int main(){
    struct rectangle *p;
    struct rectangle rec = {10,20};
    p = &rec;
    p = new struct rectangle;
    p->breadth=10;
    p->length=4;
    cout<<p->length<<" "<<p->breadth;
    return 0;
}