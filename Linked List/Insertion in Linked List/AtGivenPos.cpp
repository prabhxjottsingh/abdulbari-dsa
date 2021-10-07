#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
}*first=NULL;

void createLinkedlist(int A[], int n){
    int i;
    struct Node *t;
    struct Node *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i=1; i<n; i++){
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p){
    while(p->next){
        cout<<p->data<<"->";
        p=p->next;
    }
    cout<<"NULL"<<endl;
}

void insertElementatgivenPos(Node* p, int pos, int x){
    Node* t = new Node;
    t->data = x;
    for(int i=0; i<pos-1; i++){
        p = p->next;
    } 
    t->next = p->next;
    p->next = t; 
}

void insertAtHead(Node* p, int x){
    Node* t = new Node;
    t->data = x;
    t->next = first;
    first = t;
}

int main(){
    int A[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(A)/sizeof(A[0]);
    createLinkedlist(A, n);
    display(first);
    insertElementatgivenPos(first,5,100);
    display(first);
    insertAtHead(first, 789);
    display(first);
    return 0;
}