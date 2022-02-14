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

void postOrderTransversal(Node *root)
{
    if (root == NULL)
        return;
    postOrderTransversal(root->left);
    postOrderTransversal(root->right);
    cout << root->data << " ";
}

int main()
{
    struct Node *root;
    root = new Node(2);
    root->left = new Node(2);
    root->right = new Node(5);
    cout << "PostOrder Transversal: ";
    postOrderTransversal(root);
}