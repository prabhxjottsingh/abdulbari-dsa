#include<bits/stdc++.h>
using namespace std;

int* fun(int size){
    int *p;
    p = new int[sizeof(int) * size];
   for(int i=0; i<5; i++)
        cin>>p[i];
    return (p);
}

int main(){
    int *a;
    a = fun(5);
    for(int i=0; i<5; i++)
        cout<<a[i]<<" ";
    return 0;
}