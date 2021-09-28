#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a=10, b=20;
    cout<<"Before Swapping: A = "<<a<<" and B = "<<b<<endl;
    swap(&a,&b);
    cout<<"After Swapping: A = "<<a<<" and B = "<<b;
    return 0;
}