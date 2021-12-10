#include <bits/stdc++.h>
using namespace std;

map<char, int> mp = {{'(', -1}, {')', 1}, {'[', -2}, {']', 2}, {'{', -3}, {'}', 3}};

int main()
{
    stack<char> st;
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (mp[s[i]] < 0)
            st.push(s[i]);
        else if (mp[s[i]] > 0)
        {
            if (st.empty())
            {
                cout << "Not Balanced";
                return 0;
            }
            else if (mp[st.top()] + mp[s[i]] != 0)
            {
                cout << "Not Balanced";
                return 0;
            }
            else
            {
                st.pop();
            }
        }
        // stack<char> v = st;
        // while(!v.empty()){
        //     cout<<v.top()<<" ";
        //     v.pop();
        // }
        cout << endl;
    }
    if (st.empty())
        cout << "Balanced";
    else
        cout << "Not Balanced";
    cout << endl;
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
}