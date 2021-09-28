#include<bits/stdc+++.h>
using namespace std;

struct complex{
    int real;
    int imagenery;
};

int main(){
    struct complex cmp_no;
    cout<<"Enter the real part of the complex number: ";
    cin>>cmp_no.real;
    cout<<"Enter the imagenery part of the complex number: ";
    cin>>cmp_no.imagenery;
    cout<<"The complex number you have entered is: "<<r.real<<" +i "<<cmp_no.imagenery<<endl;
    return 0;    
}