#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string st;
        cin >> st;
        vector<char> st1;
        map<char, char> mp;
        set<char> unique_chars(st.begin(), st.end());
        for (auto ch : unique_chars)
        {
            st1.push_back(ch);
        }
        int size = st1.size();
        for (int i = 0; i < st1.size(); i++)
        {
            mp.insert({st1[i], st1[size - 1]});
            size--;
        }
        for (int i = 0; i < st.size(); i++)
        {
            for (auto [key, value] : mp)
            {
                if (st[i] == key)
                {
                    cout << mp[key];
                }
            }
        }
        cout << endl;
    }

    return 0;
}
//problem link: https://codeforces.com/contest/1974/problem/B