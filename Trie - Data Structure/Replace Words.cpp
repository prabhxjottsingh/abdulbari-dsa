class Solution {
private:
    class Trie{
    public:
        bool isEnd;
        Trie* links[26];
        Trie(){
            isEnd = false;
            for(int i = 0; i < 26; i++)
                links[i] = NULL;
        }

        void addWord(Trie* root, string &s){
            Trie* tRoot = root;
            for(auto &a : s){
                if( !tRoot->links[a - 'a'] )
                    tRoot->links[a - 'a'] = new Trie();
                tRoot = tRoot->links[a - 'a'];
            }
            tRoot->isEnd = true;
        }

        int doesPrefixExist(Trie* root, string &s){
            Trie* tRoot = root;
            int i = 1;
            for(auto &a : s){
                if( !tRoot->links[a - 'a'] ) return -1;
                tRoot = tRoot->links[a - 'a'];
                if( tRoot->isEnd ) return i;
                i += 1;
            }
            return -1;
        }

    };

public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        Trie tr;
        Trie* root = new Trie();
        for(auto &a : dictionary)
            tr.addWord(root, a);
        int i = 0, n = sentence.size();
        string rStr = "";
        string currStr = "";
        while( i < n ){
            currStr += sentence[i];
            i += 1;
            if( i == n || sentence[i] == ' ' ){
                int idx = tr.doesPrefixExist(root, currStr);
                if( idx != -1 )
                    rStr += currStr.substr(0, idx);
                else
                    rStr += currStr;
                rStr += " ";
                i += 1;
                currStr.clear();
            }
        }
        rStr.pop_back();
        return rStr;
    }
};
