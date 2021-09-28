#include<bits/stdc++.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

int main(){
    struct rectangle r;
    cout<<"Enter the length of the rectangle: ";
    cin>>r.length;
    cout<<"Enter the breadth of the rectangle: ";
    cin>>r.breadth;
    cout<<"The area of the rectangle is: "<<r.length*r.breadth<<endl;
    return 0;
}