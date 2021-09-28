#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 10;
    int* p;
    p = &n;
    cout<<p<<"=";
    cout<<&n<<endl;
    cout<<*p<<"=";
    cout<<n<<endl;
}