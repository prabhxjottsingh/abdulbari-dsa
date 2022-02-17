#include <iostream>

struct TreeNode
{
    int data;
    TreeNode *left, *right;
    TreeNode(int val)
    {
        data = val;
        left = right = NULL;
    }
};

void preOrderTranversal(TreeNode *root)
{
    if (root == NULL)
        return;
    std::cout << root->data << " ";
    preOrderTranversal(root->left);
    preOrderTranversal(root->right);
}

void postOrderTranversal(TreeNode *root)
{
    if (root == NULL)
        return;
    postOrderTranversal(root->left);
    postOrderTranversal(root->right);
    std::cout << root->data << " ";
}

void inOrderTranversal(TreeNode *root)
{
    if (root == NULL)
        return;
    inOrderTranversal(root->left);
    std::cout << root->data << " ";
    inOrderTranversal(root->right);
}

int main()
{
    TreeNode *root;
    root = new TreeNode(3);
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);
    
    std::cout << "PreOrder Transversal is: ";
    preOrderTranversal(root);
    
    std::cout << "\n";
    std::cout << "PostOrder Transversal is: ";
    postOrderTranversal(root);
    
    std::cout << "\n";
    std::cout << "InOrder Transversal is: ";
    inOrderTranversal(root);
}