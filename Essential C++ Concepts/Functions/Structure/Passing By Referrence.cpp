#include <bits/stdc++.h>
using namespace std;

struct rectangle
{
    int l;
    int b;
};

int area(struct rectangle &r)
{
    r.l++;
    return r.l * r.b;
}

int main()
{
    struct rectangle rec = {10, 23};
    cout << "Area: " << area(rec);
    cout << endl
         << rec.l;
}