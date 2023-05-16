class Solution {
private:
    class Trie{
        public:
            Trie* links[2];
            Trie(){
                links[0] = NULL;
                links[1] = NULL;
            }
    };

    void addXOR(int val, Trie* root){
        Trie* tRoot = root;
        for(int i = 30; i > -1; i--){
            int bit = ((val & (1 << i)) != 0 ? 1 : 0);
            if( !tRoot->links[bit] )
                tRoot->links[bit] = new Trie();
            tRoot = tRoot->links[bit];
        }
    }

    int findMx(int val, Trie* root){
        Trie* tRoot = root;
        int rVal = 0;
        for(int i = 30; i > -1; i--){
            int bit = ((val & (1 << i)) != 0 ? 1 : 0);
            if( tRoot->links[1 - bit] ){
                tRoot = tRoot->links[1 - bit];
                rVal |= (1 << i);
            }
            else
                tRoot = tRoot->links[bit];
        }
        return rVal;
    }

public:
    int findMaximumXOR(vector<int>& nums) {
        Trie *root = new Trie();
        for(auto &a : nums) addXOR(a, root);
        int mx = 0;
        for(auto &a : nums) mx = max(mx, findMx(a, root));
        return mx;
    }
};
