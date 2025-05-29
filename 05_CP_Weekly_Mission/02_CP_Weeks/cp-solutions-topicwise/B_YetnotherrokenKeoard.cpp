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
        string st;
        cin >> st;

        vector<pair<int, char>> upper;
        vector<pair<int, char>> lower;
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] == 'B')
            {
                if (!upper.empty())
                {
                    upper.pop_back();
                }
            }
            else if (st[i] == 'b')
            {
                if (!lower.empty())
                {
                    lower.pop_back();
                }
            }
            else
            {
                if (islower(st[i]))
                    lower.push_back({i, st[i]});
                else
                    upper.push_back({i, st[i]});
            }
        }
        upper.insert(upper.end(), lower.begin(), lower.end());
        sort(upper.begin(), upper.end());
        for (auto [id, ch] : upper)
            cout << ch;
        cout << '\n';
    }

    return 0;
}
//problem link: https://vjudge.net/contest/704342#problem/F