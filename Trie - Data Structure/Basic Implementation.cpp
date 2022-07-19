
struct Node
{
    Node *links[26];
    bool flag = false;

    bool containsKey(char ch)
    {
        if (links[ch - 'a'] != NULL)
            return true;
        return false;
    }

    void puts(char ch, Node *node)
    {
        links[ch - 'a'] = new Node();
    }

    Node *gets(char ch)
    {
        return links[ch - 'a'];
    }

    void setEnd()
    {
        flag = true;
    }

    bool isEnd()
    {
        return flag;
    }
};

class Trie
{

private:
    Node *root;

public:
    // Whenever the class is called/constructor is called, we will have new node
    Trie()
    {
        root = new Node;
    }

    // insert a string in the form of trie, this has a complexity of O(len)
    void insert(string word)
    {
        Node *node = root; // Dummy Variable node which is initially pointing to the root
        for (auto &ch : word)
        {
            if (!node->containsKey(ch))
                node->puts(ch, node);
            // now, move to the referrrence trie
            node = node->gets(ch);
        }
        node->setEnd();
    }

    bool search(string word)
    {
        Node *node = root;
        for (auto &ch : word)
        {
            if (!node->containsKey(ch)) // if it doesn't contains the key then ans is false, i.e. word is not found
                return false;
            node = node->gets(ch);
        }
        return node->isEnd();
    }

    bool startsWith(string prefix)
    {
        Node *node = root;
        for (auto &ch : prefix)
        {
            if (!node->containsKey(ch))
                return false;
            node = node->gets(ch);
        }
        return true;
    }
};
