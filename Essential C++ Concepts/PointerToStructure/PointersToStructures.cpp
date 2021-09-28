#include<bits/stdc++.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

int main(){
    
    struct rectangle r;
    r.length = 10;
    r.breadth = 20;
    cout<<"Printed from variables: "<<r.length<<" and "<<r.breadth<<"."<<endl;
    
    struct rectangle* p;
    p = &r;
    cout<<"Printed with the help of pointer: "<<p->length<<" and "<<p->breadth<<".";

    return 0;

}