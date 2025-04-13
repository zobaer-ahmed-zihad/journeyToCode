#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n, m;
    // cin >> n >> m;
    // vector<vector<int>> v(n, vector<int>(m));
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << '\n';
    // }

    // int n;
    // cin >> n;
    // vector<vector<int>> v;
    // for (int i = 0; i < n; i++)
    // {
    //     int m;
    //     cin >> m;
    //     vector<int> a;
    //     for (int i = 0; i < m; i++)
    //     {
    //         int val;
    //         cin >> val;
    //         a.push_back(val);
    //     }
    //     v.push_back(a);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < v[i].size(); j++)
    //     {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << '\n';
    // }
    int n;
    cin >> n;
    vector<string> st;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        st.push_back(s);
    }

    // for(auto s : st)
    //     cout<<s<<'\n';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < st[i].size(); j++)
        {
            cout << st[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}