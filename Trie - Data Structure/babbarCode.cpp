#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
            children[i] = NULL;
        isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode *root, string word)
    {

        if (word.size() == 0)
        {
            root->isTerminal = true;
            return;
        }

        int idx = word[0] - 'a';
        TrieNode *child;

        if (root->children[idx] != NULL)
        {
            child = root->children[idx];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->children[idx] = child;
        }

        insertUtil(child, word.substr(1));
    }

    void insertString(string word)
    {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode *root, string word)
    {
        if (word.size() == 0)
            return root->isTerminal;

        int idx = word[0] - 'a';
        TrieNode *child;

        if (root->children[idx] != NULL)
            child = root->children[idx];
        else
            return false;

        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word)
    {
        return searchUtil(root, word);
    }
};

int main()
{
    Trie *tr = new Trie;
    tr->insertString("abcd");
    cout << tr->searchWord("abcd");
}