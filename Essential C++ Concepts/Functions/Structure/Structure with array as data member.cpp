#include <bits/stdc++.h>
using namespace std;

struct arrayinstruct
{
    int a[5];
    int n;
};

void fun(struct arrayinstruct t1)
{
    for (int i = 0; i < 5; i++)
        cout << t1.a[i] << " ";
    cout << endl
         << t1.n;
}

int main()
{
    struct arrayinstruct arr = {{1, 2, 3, 4, 10}, 23};
    fun(arr);
    return 0;
}