#include <bits/stdc++.h>
using namespace std;

struct rectangle 
{
    int l;
    int b;
};

void changelength(struct rectangle *r, int newLength)
{
    r->l = newLength;
}

int main()
{
    struct rectangle rec = {10, 23};
    int newLength = 20;
    changelength(&rec, newLength);
    cout << rec.l;
}