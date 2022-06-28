class Solution
{
public:
    vector<int> bottomView(Node *root)
    {
        map<int, int> mp;
        queue<pair<Node *, int>> q;
        q.push({root, 0});
        while (!q.empty())
        {
            auto node = q.front();
            q.pop();
            Node *temp = node.first;
            int line = node.second;
            mp[line] = temp->data;
            if (temp->left)
                q.push({temp->left, line - 1});
            if (temp->right)
                q.push({temp->right, line + 1});
        }
        vector<int> res;
        for (auto &a : mp)
            res.push_back(a.second);
        return res;
    }
};