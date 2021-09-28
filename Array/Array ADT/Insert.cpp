#include<bits/stdc++.h>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};

void display(struct Array arr){
    cout<<endl<<"The elements in the array are: ";
    for(int i=0; i<arr.length; i++)
        cout<<arr.A[i]<<" ";
    cout<<endl;
}

void insert(struct Array &arr, int x, int index){
    if(arr.size==arr.length)
        cout<<"No space availabe for adding any extra element in the array.";
    else{
        for(int i=arr.length; i>=index; i--)
            arr.A[i+1] = arr.A[i];
        arr.A[index] = x; 
        arr.length++;
    }
}    

int main(){
    struct Array arr;
    cout<<endl<<"Enter size of an array: ";
    cin>>arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;
    cout<<endl<<"Enter the number of numbers you want in array: ";
    cin>>arr.length;
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<arr.length; i++)
        cin>>arr.A[i];
    display(arr);
    insert(arr, 15, 2);
    display(arr);
    return 0;
}