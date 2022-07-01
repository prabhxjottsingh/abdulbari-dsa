#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *builtTree(Node *root)
{

    int data;
    cout << "Enter the root Node: " << '\n';
    cin >> data;
    root = new Node(data);

    if (data == -1)
        return NULL;

    cout << "Enter the data for inserting in the left of: " << data << '\n';
    root->left = builtTree(root->left);

    cout << "Enter the data for inserting in the right of: " << data << '\n';
    root->right = builtTree(root->right);

    return root;
}

void levelOrderTransversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            Node *temp = q.front();
            cout << temp->data << " ";
            q.pop();
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        cout << '\n';
    }
}

int main()
{
    Node *root = NULL;
    root = builtTree(root);
    levelOrderTransversal(root);
}