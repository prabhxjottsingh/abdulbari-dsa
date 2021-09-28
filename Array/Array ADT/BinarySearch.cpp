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
    sort(a, a+size);
    int h=size, l=0, mid;
    
    while(l<h){
        mid = (l+h)/2;
        if(a[mid]<key)
            l = mid+1;
        else if(a[mid]>key)
            h = mid-1;
        else
            break;
    }
    if(l<=h)
        cout<<"Element Found";
    else
        cout<<"ELement not found";
   
    return 0;
}

We can also do this with the help of tail recursion, but its better to use a loop than to use a tail recusrsion tho following code uses tail recursion


#include<bits/stdc++.h>
using namespace std;

int Rbinary(int a[], int l, int h, int key){
    int mid = (l+h)/2;
    if(l<=h){
        if(a[mid]<key)
            return Rbinary(a, mid+1, h, key);
        else if(a[mid]>key)
            return Rbinary(a, l, mid-1, key);
        else
            return mid;
    }
    return -1;
}

int main(){
    
    int size,i;
    cin>>size;
    
    int a[size];
    
    int key;
    cin>>key;
    
    for(int i=0; i<size; i++)
        cin>>a[i];
    sort(a, a+size);
    int h=size, l=0, mid;
    mid = (l+h)/2;
    int x = Rbinary(a, l, h, key);
 
    if(x > 0)
        cout<<"Element Found";
    else
        cout<<"ELement not found";
   
    return 0;
}