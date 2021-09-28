#include<bits/stdc++.h>
using namespace std;

int main()
{
   
    int a[5] = {1,2,3,4,5};
    int n = 5;
    for(int i=0; i<n/2; i++){
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp; 
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;

}

time complexity - O(n);