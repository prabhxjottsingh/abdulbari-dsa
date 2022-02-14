#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

void inOrderTransversal(Node *root)
{
    if (root == NULL)
        return;
    inOrderTransversal(root->left);
    cout << root->data << " ";
    inOrderTransversal(root->right);
}

int main()
{
    struct Node *root;
    root = new Node(2);
    root->left = new Node(2);
    root->right = new Node(5);
    cout << "InOrder Transversal: ";
    inOrderTransversal(root);
}