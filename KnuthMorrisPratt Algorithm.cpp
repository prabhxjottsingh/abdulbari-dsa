class Solution {
public:
    string longestPrefix(string s) {
        int len = 0, i = 1, n = s.size();
        int lps[n];
        lps[0] = 0;
        while( i < n ){
            if( s[i] == s[len] ){
                ++len;
                lps[i] = len;
                i++;
            }
            else{
                if( len > 0 )
                    len = lps[len - 1];
                else{
                    lps[i] = 0;
                    i++;
                }
            }
        }
        int maxLen = lps[n - 1];
        return s.substr(0, maxLen);
    }
};
