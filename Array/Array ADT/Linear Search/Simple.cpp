#include<bits/stdc++.h>
using namespace std;

int main(){
    int size,i;
    cin>>size;
    int a[size];
    int key;
    cin>>key;
    for(int i=0; i<size; i++)
        cin>>a[i];
    
    for(i=0; i<size; i++){
        if(a[i]==key){
            cout<<i+1;
            break;
        }
    }
    if(a[i]!=key)
        cout<<"Element not found.";
    return 0;
}