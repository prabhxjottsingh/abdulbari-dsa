/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
private:
    int helperFunc(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int left = helperFunc(root->left);
        int right = helperFunc(root->right);
        return max(left, right) + 1;
    }

public:
    int maxDepth(TreeNode *root)
    {
        int count = helperFunc(root);
        return count;
    }
};