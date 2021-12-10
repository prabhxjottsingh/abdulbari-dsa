#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int low, int high, int target){
    int mid = (high+low)/2;
    if(a[mid]==target)
        return mid;
    if(low>high)
        return -1;
    if(a[mid] < target)
        return binarySearch(a, mid+1, high, target);
    else if(a[mid] > target)
        return binarySearch(a, low, mid-1, target);
}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    sort(a,a+n);
    cout<<binarySearch(a,0, n-1, 6);

}