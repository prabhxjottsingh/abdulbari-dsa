#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *p;
    p = new int[5];
    cout<<"Enter elements of the array: ";
    for (int i = 0; i < 5; i++)
        cin >> p[i];
    for (int i = 0; i < 5; i++)
        cout << p[i] << " " << endl;
    delete [] p;
    return 0;
}