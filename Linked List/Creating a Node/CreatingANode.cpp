#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* next;
};

int main(){
    struct node* P;
    P = new node;
    P->data = 10;
    P->next = 0;
    return 0;
}