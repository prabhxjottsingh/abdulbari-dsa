//Time Complexity: O(n) -> number of nodes
//Space Complexity: O(n) -> height of the tree

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

void preOrderTransversal(Node *root)
{
    if ((!root))
        return;
    cout << root->data << " ";
    preOrderTransversal(root->left);
    preOrderTransversal(root->right);
}

int main()
{
    struct Node *root;
    root = new Node(2);
    root->left = new Node(2);
    root->right = new Node(5);
    preOrderTransversal(root);
}