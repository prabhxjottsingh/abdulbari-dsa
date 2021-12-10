#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> st;
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else if (s[i] == ')')
        {
            if (st.empty())
            {
                cout << "Not Balanced";
                return 0;
            }
            else
            {
                st.pop();
            }
        }
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