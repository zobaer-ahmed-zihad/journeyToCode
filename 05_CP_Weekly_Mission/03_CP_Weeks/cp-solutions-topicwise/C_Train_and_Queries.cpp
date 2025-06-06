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
        int n, m;
        cin >> n >> m;
        map<int, set<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mp[val].insert(i);
        }
        while (m--)
        {
            int l, r;
            cin >> l >> r;
            if (mp.find(l) == mp.end() || mp.find(r) == mp.end())
            {
                cout << "NO" << '\n';
            }
            else
            {
                auto leftMostStartingIndex = mp[l].begin();
                auto rightMostEndingIndex = mp[r].rbegin();
                if (*leftMostStartingIndex < *rightMostEndingIndex)
                {
                    cout << "YES" << '\n';
                }
                else
                {
                    cout << "NO" << '\n';
                }
            }
        }
    }
    return 0;
}
//problem link: https://codeforces.com/problemset/problem/1702/C
